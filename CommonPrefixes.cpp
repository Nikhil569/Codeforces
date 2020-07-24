#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;

	string s(200,'a');
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	char x = 'a',y='b';
	cout<<s<<endl;
	for (int i = 0; i < n; ++i)
	{
		if(s[a[i]]==y)	s[a[i]] = x;
		else	s[a[i]] = y;
		cout<<s<<endl;		
	}

}


int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		solve();
	}


	return 0;
}