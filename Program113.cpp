#include<iostream>

using namespace std;

class Arthimatic
{
public:
	int iNo1, iNo2;
	Arthimatic(int x, int y)
	{
		iNo1 = x;
		iNo2 = y;
	}

	int Addition()
	{
		int iResult = 0;

		iResult = iNo1 + iNo2;

		return iResult;
	}

	int Substraction()
	{
		int iResult = 0;

		iResult = iNo1 - iNo2;

		return iResult;
	}
};

int main()
{	
	int iValue1= 0 , iValue2 = 0;

	int iRet = 0;

	cout<<"Enter 1st number : ";
	cin>>iValue1;

	cout<<"Enter 2nd number : ";
	cin>>iValue2;
	
	Arthimatic obj1(iValue1,iValue2);
	Arthimatic obj2(iValue1,iValue2);

	iRet = obj1.Addition();
	cout<<"Addition : "<<iRet<<"\n";
	
	iRet = obj2.Substraction();
	cout<<"Substraction : "<<iRet<<"\n";
	return 0;
}

