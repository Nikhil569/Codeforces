#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	string str;
	getline(cin,str);
	int a = str.size();
	//cout<<a<<endl;
	int counter = 0;

	for(int i=1;i<a-1;i=i+3){
		if(str[i] != '\0'){
			for(int j=i+3;j<a-1;j=j+3){
				if(str[i]==str[j]) str[j]='\0';
			}

			counter = counter + 1;
		}
	}

	cout<<counter;



	return 0;
}
