#include<iostream>

using namespace std;

int main()
{
	int size,k;
	cout<<"Enter the size of array:";
	cin>>size;
	
	int ar[size];
	cout<<"Enter the element of array:";
	
	for(int i=0;i<size;i++)
	cin>>ar[i];
	int i=0;
	for(i=0;i<size-1;i++)
	{
		if(ar[i]>ar[i+1])
		cout<<ar[i];	
	}
	cout<<ar[size-1];
	
	
	return 0;
}
