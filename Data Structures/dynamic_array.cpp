#include<iostream>
#include<vector>
using namespace std;

int main()
{
	
	int n,q,lastAnswer=0;
	
	cin>>n>>q;
	
	vector< vector <int> > seqList(n,vector<int>(0));
	
	int query[q][3];
	for(int i=0;i<q;i++)
	{
		for( int j=0; j<3;j++)
		cin>>query[i][j];
	}
		for(int i=0;i<q;i++)
	{
	
			int index=((query[i][1]^lastAnswer)%n);
			if(query[i][0]==1)
			{
				seqList[index].push_back(query[i][2]);
			}
			else
			{
				lastAnswer=seqList[index][query[i][2]%seqList[index].size()];
				cout<<endl<<lastAnswer<<endl;
			}
	}
}
