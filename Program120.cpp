/* Accept string from user and print display the length of the string

Input : 5894
Output : 4 9 8 5
		 4 9 8 
		 4 9 
		 4
		 
*/

#include<iostream>

using namespace std;

class NumberX
{	
public:
	int iNo = 0 ;

	void Accept()
	{
		cout<<"Enter number :";
		cin>>iNo;
	}

	void Pattern()
	{	
		int iValue = iNo, iCnt = 0, i = 0 , k =0;

		while(iValue > 0)
		{
			iCnt++;
			iValue = iValue / 10;
		}
		iValue = iNo;
		for(i = iCnt;i> 0;i--)
		{
			for(k =0;k<i;k++)
			{
				cout<<iValue%10<<"\t";
				iValue = iValue /10;
			}
			cout<<"\n";
			iValue = iNo;
		}
		
	}
};

int main()
{
	NumberX obj;
	obj.Accept();
	obj.Pattern();
	
	return 0;
}