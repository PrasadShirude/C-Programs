#include<iostream>

using namespace std;

int Addition(int iNo1,int iNo2)
{
	int iResult = 0;

	iResult = iNo1 + iNo2;

	return iResult;
}

int main()
{
	int iValue1 =0, iValue2 = 0, iRet = 0;

	cout<<"Jay Ganesh from C++\n";

	cout<<"\nEnter first number : ";
	cin>>iValue1;

	cout<<"\nEnter Second number : ";
	cin>>iValue2;

	iRet = Addition(iValue1,iValue2);

	cout<<"\nAddition of " << iValue1 <<" and "<< iValue2<<" numbers : "<<iRet<<"\n";
	
	return 0;
}
