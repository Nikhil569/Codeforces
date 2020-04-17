#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	int a;

	a = (n>=m)?m:n;

	if(a%2==0) cout<<"Malvika";
	else cout<<"Akshat";


	return 0;
}