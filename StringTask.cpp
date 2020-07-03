#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	queue<char> s;
	string a;

	cin>>a;

	for (int i = 0; i < a.size(); ++i)
	{
		if(a[i]=='A' || a[i]=='a' || a[i]=='O' || a[i]=='o' || a[i]=='Y' || a[i]=='y' || a[i]=='E' || a[i]=='e' || a[i]=='U' || a[i]=='u' || a[i]=='I' ||a[i]=='i'){}

		else{
			char b = a[i];
			if(a[i]>=65 && a[i]<=90){
				b = b + 32;
			}

			s.push('.');
			s.push(b);
		}	
	}

	int n = s.size();

	for (int i = 0; i < n; ++i)
	{
		cout<<s.front();
		s.pop();
	}




 

	return 0;
}