#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	for(int i=0;i<t;i++){
		int n,m;
		cin>>n>>m;
		int a[n][m];
		int count_row = 0;
		int count_col = 0;

		for(int j=0;j<n;j++){
			int sum=0;
			for(int k=0;k<m;k++){
				cin>>a[j][k];
				sum = sum + a[j][k]; 
			}
			if(sum==0) count_row++;
		}

		for(int j=0;j<m;j++){
			int sum=0;
			for(int k=0;k<n;k++){
				sum = sum + a[k][j]; 
			}
			if(sum==0) count_col++;
		}

		int min;

		min = (count_col<=count_row) ? count_col:count_row;

		if(min%2==0) cout<<"Vivek"<<endl;
		else cout<<"Ashish"<<endl;

	}


	return 0;
}