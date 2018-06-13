#include<iostream>
using namespace std;

int main()
{
int ar[3][3];

cout<<"Enter the 3X3 matrix";
for(int i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
	cin>>ar[i][j];
}

for(int i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
	{
		if(i<j)
		{
			int temp=ar[i][j];
			ar[i][j]=ar[j][i];
			ar[j][i]=temp;
		}
	}
}

cout<<"Transpose of matrix is:"<<endl;
for(int i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
	cout<<ar[i][j]<<"\t";
	cout<<endl;
}

for(int i=0;i<3/2;i++)
{
	for(int j=0;j<3;j++)
	{
		{
			int temp=ar[i][j];
			ar[i][j]=ar[3-1-i][j];
			ar[3-1-i][j]=temp;
		}
	}
}

cout<<"final matrix is:"<<endl;
for(int i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
	cout<<ar[i][j]<<"\t";
	cout<<endl;
}

return 0;
}
