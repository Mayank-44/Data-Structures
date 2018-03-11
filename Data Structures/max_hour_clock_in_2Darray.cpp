#include<iostream>
using namespace std;
int main()
{
	int ar[6][6];
	
	for(int i=0;i<6;i++)
		for(int j=0;j<6;j++)
			cin>>ar[i][j];
			
	int max=ar[0][0]+ar[0][1]+ar[0][2]+ar[1][1]+ar[2][0]+ar[2][1]+ar[2][2];
	
	for(int i=0;i<4;i++)
	{	
		int sum=0;
		for(int j=0;j<4;j++)
		{
			sum=ar[i][j+0]+ar[i][j+1]+ar[i][j+2]+ar[i+1][j+1]+ar[i+2][j+0]+ar[i+2][j+1]+ar[i+2][j+2];
			if(sum>max)
			max=sum;
		}
	}
	cout<<max;
}
