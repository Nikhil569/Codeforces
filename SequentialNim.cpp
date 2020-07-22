#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		int n;
		cin>>n;
		long int a[n];
		int count=0;
		for (int j = 0; j < n; ++j)
		{
			cin>>a[j];
		}

		for(int j=0;j<n-1;j++){
			if(a[j]>1) break;
			else count++;
		}

		if(count%2==0) cout<<"First"<<endl;
		else cout<<"Second"<<endl;

	}


	return 0;
}