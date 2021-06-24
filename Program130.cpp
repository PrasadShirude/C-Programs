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

	void ReadData(int Size)
	{	
		int ret = 0;
		char *arr = new char[Size];
		ret =read(fd,arr,Size);
		cout<<ret<<"\n";
		write(1,arr,ret);
	}
};

int main()
{	
	int No =0;
	char str[30];	//100
	cout<<"Enter File Name : ";
	cin>>str;
	FileX obj(str);	//obj(100)

	cout<<"Enter no.of bytes you want to read from file : ";
	cin>>No;
	obj.ReadData(No);
	return 0;
}