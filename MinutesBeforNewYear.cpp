#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	for (int i = 0; i < t; ++i)
	{
		int h,m;
		cin>>h;
		cin>>m;

		int count=0;

		count = 1440 - (m+ (h*60));

		cout<<count<<endl;
	}


	return 0;
}