#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int T;
	cin>>T;

	for(int i=0;i<T;i++){
		char s[100],temp[200];
		cin>>s;
		int a = strlen(s);
		int flag=0,counter=0;

		for(int j=1;j<a;j++){
			if(s[0]!=s[j]){
				flag=1;
				break;}
		}

		if(flag==1){
			for(int k=0;k<a-1;k++){
				if(s[k]=='0'&&s[k+1]=='0'){
					temp[counter]=s[k];
					cout<<temp[counter];
					temp[counter+1]='1';
					cout<<temp[counter+1];
					counter=counter+2;
				}

				else if(s[k]=='1'&&s[k+1]=='1'){
					temp[counter]=s[k];
					cout<<temp[counter];
					temp[counter+1]='0';
					cout<<temp[counter+1];
					counter=counter+2;
				}

				else {
					temp[counter]=s[k];
					cout<<temp[counter];
					counter++;
				}

			}


			cout<<s[a-1]<<endl;
			//for (int l = 0; l<temp.size(); ++l)
			//{
			//	cout<<temp[l];
			//}
		}

		else cout<<s<<endl;

	}


	return 0;
}