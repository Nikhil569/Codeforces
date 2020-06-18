#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string a;
	cin>>a;
	int count = a.size()-1;
	//int a[count + 1];
	//int min=10,min_no=0;

	/*for(int i=0;i<=count;i++){
		a[count-i] = int(n/(long long int)pow(10,i))%10;							This thing cannot handle the magnitude of input codeforces is giving
	}*/

	//a = to_string(n)

	int counter=-1;

	for (int i = 0; i <=count; ++i)
	{
		if(a[i]%2==0){
			counter=i;
			if(a[i]<a[count]){
				char temp = a[i];
				a[i] = a[count];
				a[count] = temp;
				counter = -2;
				break;
			}
		}
	}

	if(counter==-1) cout<<-1;
	
	else if(counter==-2){
		/*long long int p=0;
		for (int i=0; i<=count; ++i)
		{
			p = p + a[count-i]*(long long int)pow(10,i);
		}*/
		cout<<a;
	} 

	else{
		char temp = a[counter];
		a[counter] = a[count];
		a[count] = temp;
	
		/*long long int p=0;
		for (int i=0; i<=count; ++i)
		{
			p = p + a[count-i]*(long long int)pow(10,i);
		}*/
		cout<<a;
	}

	return 0;
}