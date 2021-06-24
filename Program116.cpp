/* Accept string from user and print display the length of the string

Input : Hello
Output : 5
*/

#include<iostream>

using namespace std;

class StringX
{	
public:
	char str[30];

	void Accept()
	{
		cout<<"Enter string :";
		scanf("%[^'\n']s",str);
	}

	int Strlen()
	{
		int iCnt = 0;
		char *ptr = str;
		while(*ptr != '\0')
		{
			ptr++;
			iCnt++;
		}
		return iCnt;
	}
};

int main()
{
	StringX obj;
	obj.Accept()
	int iRet = obj.Strlen();
	cout<<"length of String is : "<<iRet<<"\n";
	return 0;
}