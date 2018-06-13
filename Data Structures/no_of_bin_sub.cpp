#include<iostream>

using namespace std;

int main()
{

int sub_str=0;

int ar[5];
cout<<"Enter the binary string:";

for(int i=0;i<6;i++)
cin>>ar[i];

for(int i=0;i<5;i++)
{
	if(ar[i]==1)
	{
		for(int j=i+1;j<6;j++)
		{
			if(ar[j]==1)
			sub_str++;
		}
	}
}

cout<<"no of substring is:"<<sub_str<<endl;
return 0;
}
