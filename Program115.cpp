#include<iostream>

using namespace std;

class Numbers
{
public:
	int *Arr;
	int iSize;

	Numbers(int iNo)
	{
		iSize = iNo;
		Arr = new int[iSize];
	}

	void Accept()
	{
		int i = 0;
		cout<<"Enter elements : ";
		for(i = 0;i<iSize;i++)
		{
			cin>>Arr[i];
		}
	}

	void Display()
	{
		int i = 0;
		cout<<"Elements are : ";
		for(i = 0;i<iSize;i++)
		{
			cout<<Arr[i]<<"\t";
		}
	}

	int Add()
	{
		int iSum =0, i =0 ;

		for(i = 0;i<iSize;i++)
		{
			iSum += Arr[i];
		}
		return iSum;
	}

	~Numbers()
	{
		cout<<"Inside Destructor\n";
		delete []Arr;
	}
};


int main()
{
	int iNo =0, iRet =0;

	cout<<"Enter number of elements : ";
	cin>>iNo;

	Numbers obj(iNo);

	obj.Accept();
	obj.Display();
	iRet = obj.Add();

	cout<<"\nAddition is : "<<iRet<<"\n";

	return 0;
}

/*
int Arr[7] = {10,20 ,30 ,40 ,50 ,20 ,15};
char *days[] = {"Monday","Tuesday","Wednesday",.....}
for(i = 0; i< 7 ;i ++)
{
    iMax = 0;
    for (j = i+1; j < 7; j++)
    {
            if(Arr[j]- Arr[i] > iMax)
            {
                iMax = Arr[j] - Arr[i];
                index = j;
            }
    }
    printf("%d",index);
    printf("Price of painting : %d",Arr[index]);
    printf("Day is : %s",days[index]);
}
*/