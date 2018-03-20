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
	
	int min=ar[size-1];
	cout << min<< " ";
	for(i=size-2;i>=0;i--)
	{
		if(ar[i]>min)
		{
			min=ar[i];
			cout<<ar[i];	
		}	
	}
	
	
	
	return 0;
}
