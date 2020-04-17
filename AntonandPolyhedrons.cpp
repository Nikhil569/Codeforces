#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int faces = 0;
	string str;

	for(int i=0;i<n;i++){
		cin>>str;

		switch (str[0]){
			case 'T': 
				faces = faces+4;
				break;
			case 'C': 
				faces = faces+6;
				break;
			case 'O': 
				faces = faces+8;
				break;
			case 'D': 
				faces = faces+12;
				break;
			case 'I': 
				faces = faces+20;
				break;
		}

	}

	cout<<faces;




	return 0;
}