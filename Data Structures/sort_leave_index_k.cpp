#include<iostream>

using namespace std;

int main()
{
	int size,k;
	cout<<"Enter the size of array:";
	cin>>size;
	
	cout<<"Which index should remain same? :";
	cin>>k;
	
	int ar[size];
	cout<<"Enter the element of array:";
	
	for(int i=0;i<size;i++)
	cin>>ar[i];
	
	for(int i=0;i<size-1;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(i==k || j==k)
			continue;
			
			if(ar[i]>=ar[j])
			{
				int temp=ar[i];
				ar[i]=ar[j];
				ar[j]=temp;
			}
		}
	}
	
	cout<<"Array after sorting is:"<<endl;
	for(int i=0;i<size;i++)
	cout<<ar[i];
	
	return 0;
}
