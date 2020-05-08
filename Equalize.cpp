#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	long long int n;
	long long int cost=0;
	cin>>n;

	string a,b;
	cin>>a>>b;

	for(int i=0;i<n;i++){
		if(a[i]!=b[i]){
			int flag = 0;
			for(int j=i+1;j<(i+2) && j<n;j++){
				if(a[j]!=b[j] && a[j]==b[i] && abs(i-j)<2 ){
					char temp=a[j];
					a[j] = a[i];
					a[i] = temp;
					cost = abs(i-j)+cost;
					flag = 1;
					break;
				}
			}
			if(flag==0){
				a[i]=b[i];
				cost = 1+cost;
			}
		}
	}

	cout<<cost;


	return 0;
}