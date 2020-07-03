#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int a[] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};

	int size = sizeof(a)/sizeof(a[0]);

	int n,flag=0;
	cin>>n;

	for (int i = 0; i < size; ++i)
	{
		if(n%a[i]==0){
			flag = 1;
			cout<<"YES";
			break;
		}
	
	}	

	if(flag==0) cout<<"NO";

	return 0;
}