#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	int a[n];
	int b[n] = {0};
	//cout<<b[3];

	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		if(a[i]>0){
			b[a[i]-1] = i+1;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		if(a[i]==0 && b[i]==0){
			for (int j = 0; j < n; ++j)
			{
				if(b[j]==0 && i!=j){
					b[j] = i+1;
					a[i] = j+1;
					break;
				}
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		if(a[i]==0){
			for (int j = 0; j < n; ++j)
			{
				if(b[j]==0 && i!=j){
					b[j] = i+1;
					a[i] = j+1;
					break;
				}
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<" ";
	}


	return 0;
}