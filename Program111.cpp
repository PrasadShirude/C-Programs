#include<iostream>

using namespace std;

class Arthimatic
{
public:
	int iNo1, iNo2;

	void Accept()
	{
		cout<<"\nEnter first number : ";
		cin>>iNo1;

		cout<<"\nEnter Second number : ";
		cin>>iNo2;
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
	int iRet = 0;

	Arthimatic obj1;
	Arthimatic obj2;

	obj1.Accept();
	iRet = obj1.Addition();
	cout<<"Addition : "<<iRet<<"\n";

	obj2.Accept();
	
	iRet = obj2.Substraction();
	cout<<"Substraction : "<<iRet<<"\n";
	return 0;
}

