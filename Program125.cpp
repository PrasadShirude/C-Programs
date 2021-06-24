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

	FileX(char Name[])
	{
		fd = open(Name,O_WRONLY | O_CREAT);
		if(fd == -1)
		{
			cout<<"Unable to open file";
		}
		else
		{
			cout<<"File Successully Open";
		}

	}
	~FileX()
	{
		close(fd);
	}
};

int main()
{
	char str[30];
	cout<<"Enter File Name : ";
	cin>>str;
	FileX obj(str);

	return 0;
}