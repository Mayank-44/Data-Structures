#include<iostream>
#include<algorithm>
using namespace std;


int main()
{

int size;
cout<<"Enter the size of array:";
cin>>size;

int ar[size];
cout<<"Enter the element of array:";
for(int i=0;i<size;i++)
cin>>ar[i];

int sum[size];

for(int i=0;i<size;i++)
{	
	int max=0;
	int pre_max=-999999;
	int max_point=0;
	sum[i]=0;
	for(int j=i;j<size;j++)
	{
		max+=ar[j];
		if(max > pre_max)
		{
			max_point=j;
			pre_max=max;
		}		
	}
	for(int k=i;k<=max_point;k++)
	sum[i]+=ar[k];
}

for(int i=0;i<size;i++)
cout<<sum[i]<<" ";
cout<<endl;
int m=sum[0];
int index=0;
for(int i=0;i<size;i++)
{
	if(m<=sum[i])
	{
		m=sum[i];
		index=i;
	}
}
cout<<"Max sum is:"<<m<<endl;
cout<<"It starts with digit:"<<ar[index]<<" index:"<<index<<endl;
//
//int count=0;
//for(int i=index;i<size;i++)
//{
//	if(count == m)	
//	{
//		cout<<"Max sub array sum is:"<<count<<endl;
//		return 0;
//	}
//	count+=ar[i];
//}	
		
return 0;
}
