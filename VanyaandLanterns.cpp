#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	long long int l;
	cin>>n;
	cin>>l;

	long long int a[n+2];
	a[0]=0;
	a[n+1]=l;

	for (int i = 1; i<n+1 ; ++i)
	{
		cin>>a[i];
	}

	for (int j = 1; j < n ; ++j)
	{
		for (int k = j+1; k < n+1; ++k)
		{
			if(a[k]<a[j]){
				a[k] = a[k]+a[j];
				a[j] = a[k]-a[j];
				a[k] = a[k]-a[j];
			}
		}
	}

	/*for (int i = 1; i<n+1 ; ++i)
	{
		cout<<a[i];
	}*/

	long double max = ((a[1]-a[0]) >= (a[n+1]-a[n]))? (a[1]-a[0]) : (a[n+1]-a[n])  ;
	//cout<<fixed<<setprecision(9)<<max;

	for(int m=1;m<n;m++){
		long double b = a[m+1]-a[m];
		//cout<<b<<endl;

		if(b/2 > max){
			max = b/2;
		}
	}

	cout<<fixed<<setprecision(9)<<max;




	return 0;
}