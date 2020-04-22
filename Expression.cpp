#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a,b,c;

	cin>>a;
	cin>>b;
	cin>>c;

	int max = a+b+c;

	if((a*b+c)>max) max = a*b+c;

	if((a+b*c)>max) max = a+b*c;

	if((a*b*c)>max) max = a*b*c;

	if((a*(b+c))>max) max = a*(b+c);

	if(((a+b)*c)>max) max = (a+b)*c;
  
  	cout<<max;


	return 0;
}