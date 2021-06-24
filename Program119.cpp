/* Accept string from user and print display the length of the string

Input : 5894
Output : 4 9 8 5
		 9 8 5
		 9 5
		 5
		 
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
		int iValue = iNo;
		
		int iTemp = 0 ;
		while(iValue != 0)
		{
			iTemp = iValue;
			while(iTemp != 0)
			{
				cout<< iTemp % 10<<"\t";
				iTemp = iTemp / 10;
			}
			cout<<"\n";
			iValue = iValue/10;

	
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