#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	long long int n ;
	cin>>n;
	long long int f=0;

	if(n%2==0){
		f = n/2;
	}

	else{
		f = (n-1)/2 - n;
	}

	cout<<f;


	return 0;
}