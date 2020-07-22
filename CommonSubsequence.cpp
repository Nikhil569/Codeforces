#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		for (int j = 0; j < n; ++j)
		{
			cin>>a[j];
		}
		for (int j = 0; j < m; ++j)
		{
			cin>>b[j];
		}

		int result =-1 ;
		for (int j = 0; j < n; ++j)
		{
			for (int k = 0; k < m; ++k)
			{
				if(a[j]==b[k]){
					result = a[j];
					goto loop;
				}
			}
		}

		loop:
		if(result==-1) cout<<"NO"<<endl;
		else{
			cout<<"YES"<<endl;
			cout<<1<<" "<<result<<endl;
		}

	}

	return 0;
}