#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,m,a,b;
	cin>>n;
	cin>>m;
	cin>>a;
	cin>>b;

	float x,y;
	int min = a*n;
	//cout<<min;
	//x = ceil(0.5);
	//cout<<x<<endl;

	for (int y = n-1; y>=0; --y)
		{
			x = ceil((n-y)/(float)m);
			//cout<<x<<" ";

			if(((a*y)+(x*b))<min) min = (a*y)+(x*b);
			//cout<<min<<endl; 
		}	

	cout<<min;
	return 0;
}