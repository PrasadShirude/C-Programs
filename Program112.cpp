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
	int iRet = 0;

	Arthimatic obj1(10,11);
	Arthimatic obj2(11,10);

	iRet = obj1.Addition();
	cout<<"Addition : "<<iRet<<"\n";
	
	iRet = obj2.Substraction();
	cout<<"Substraction : "<<iRet<<"\n";
	return 0;
}

