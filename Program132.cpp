//Accept number of bits u want to write data to  the file

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
		fd = open(Name,O_WRONLY | O_APPEND);
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

	void WriteData()
	{	
		char str[] = " Lives in Pune";
		write(fd,str,14);
	}
};

int main()
{	
	int No =0;
	char str[100];	//100
	cout<<"Enter File Name : ";
	cin>>str;
	FileX obj(str);	//obj(100)


	obj.WriteData();
	return 0;
}