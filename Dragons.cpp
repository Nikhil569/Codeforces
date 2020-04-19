#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
	int s,n,counter=0;
	cin>>s>>n;
	int x[n],y[n];


	for(int i=0;i<n;i++){
		cin>>x[i]>>y[i];
	}

	for (int i = 0; i < n-1 ; ++i)
	{
		for(int j=i+1;j<n;j++){
			if(x[i]>=x[j]){
				int max = x[i];
				x[i] = x[j];
				x[j] = max;

				max = y[i];
				y[i] = y[j];
				y[j] = max;
			}
		}
	}

	for(int i=0;i<n;i++){
		if(s>x[i]){
			s = s + y[i];
			//cout<<s<<endl;
		}

		else{
			counter = 1;
			break;
		}
	}

	if(counter==0) cout<<"YES";
	else cout<<"NO";




	return 0;
}