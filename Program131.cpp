//Accept number of bits u want to read from the file

#include<stdlib.h>
#include<stdlib.h>
#include<fcntl.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

class FileX
{
public:
	int fd;

	FileX(char Name[])	// FileX(char * Name)
	{
		fd = open(Name,O_RDONLY);
		if(fd == -1)
		{
			cout<<"Unable to open file\n";
			exit(0);
		}
		else
		{
			cout<<"File Successully Open\n";
		}

	}
	~FileX()
	{
		close(fd);
	}

	void ReadData()
	{	
		int ret = 0;
		char arr[10] ;
		while((ret =read(fd,arr,10)) != 0)
		{	
			write(1,arr,ret);
		}
	}
};

int main()
{	
	int No =0;
	char str[30];	//100
	cout<<"Enter File Name : ";
	cin>>str;
	FileX obj(str);	//obj(100)


	obj.ReadData();
	return 0;
}