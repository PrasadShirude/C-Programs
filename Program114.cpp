#include<iostream>

using namespace std;

int Addition(int Arr[],int iSize)
{
	int iSum = 0, i = 0;
	if((Arr == NULL) || (iSize <= 0))
	{
		return 0;
	}

	for(i=0;i<iSize;i++)
	{
		iSum += Arr[i];
	}

	return iSum;
}


int main()
{
	int iRet =0, *Arr = NULL;
	int iSize = 0,i = 0;

	cout<<"Enter number of elements : ";
	cin>>iSize;

	Arr = new int[iSize];

	cout<<"Enter elements : ";
	for(i = 0;i< iSize;i++)
	{
		cin>>Arr[i];
	}

	
	iRet = Addition(Arr,iSize);

	cout<<"Addition of array elements is : "<<iRet<<'\n';

	delete []Arr;

	return 0;
}