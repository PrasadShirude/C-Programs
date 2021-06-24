/* Accept string from user and print display the word count

Input : _ _ _ Abc_ _ _pqr_ _ _A_ _AB_ _
Output : 4
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

	int WordCount()
	{
		int iCnt = 0;
		char *ptr = str;
		while(*ptr != '\0')
		{
			if(*ptr == ' ')
			{
				while((*ptr == ' ') && (*ptr != '\0') )
				{
					ptr++;
				}
			}
			else
			{
				iCnt++;
				while((*ptr != ' ') && (*ptr != '\0') )
				{
					ptr++;
				}
			}
		}
		return iCnt;
	}
};

int main()
{	
	int iRet = 0;

	StringX obj;
	obj.Accept();
	iRet = obj.WordCount();
	cout<<"No.of character are : "<<iRet<<"\n";
	return 0;
}