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
		char arr[20];
		read(fd,arr,10);
		write(1,arr,10);		//printf("%s",arr);
	}
};

int main()
{
	char str[30];	//100
	cout<<"Enter File Name : ";
	cin>>str;
	FileX obj(str);	//obj(100)
	obj.ReadData();
	return 0;
}