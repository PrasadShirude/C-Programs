/* Accept string from user and reverse the words present in the string

Input : _ _ _ Abc_ _ _pqr_ _ _A_ _AB_ _
Output : _ _ _cbA_ _ _ rqp_ _ _A_ _BA_ _
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

	void WordReverse()
	{
		int iCnt = 0;
		char *ptr = str;
		char *str;
		while(*ptr != '\0')
		{
			if(*ptr == ' ')
			{
				while((*ptr == ' ') && (*ptr != '\0') )
				{	
					cout<<*ptr;
					ptr++;
				}
			}
			else
			{
				while((*ptr != ' ') && (*ptr != '\0') )
				{
					iCnt++;
					ptr++;
				}
				str = ptr;
				str--;
				while((iCnt > 0) && (*str != ' '))
				{
					//printf("%c",*str );
					cout<<*str;
					iCnt--;
					str--;
				}

				while((*ptr != ' ') && (*ptr != '\0') )
				{
					ptr++;
				}
			}
		}
	
	}
};

int main()
{	
	StringX obj;
	obj.Accept();
	obj.WordReverse();
	
	return 0;
}