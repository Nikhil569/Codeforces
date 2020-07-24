#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,ans=0;
	cin>>n;
	string a,b;
	cin>>a>>b;

	for (int i = 0; i < n; ++i)
	{
		if(a[i]>b[i]){
			cout<<-1<<endl;
			return;
		}
	}

	for (char x = 'a'; x <= 't'; ++x)
	{
		char y = 'z';
		vector<int> v;
		for (int i = 0; i < n; ++i)
		{
			if(a[i]==x && b[i]>x){
				v.push_back(i);
				y = (y<b[i]) ? y:b[i];
			}
		}
		if(!v.empty()){
			ans++;
			for (int i = 0; i < v.size(); ++i)
			{
				a[v[i]] = y;
			}
		}
	}
	cout<<ans<<endl;
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