#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[])
{
	char str[100];
	int counter = 1;
	cin>>str;

	int len = strlen(str);
	//cout<<len;

	if(len == 1) {
		if(str[0]>=97) str[0] = str[0]-32;
		else str[0] = str[0]+32;
	}

	else{
		for(int i=1;i<len;i++){
			if(str[i]>=97) counter = 0;
		}

		if(counter==1){
			for(int i=0;i<len;i++){
				if(str[i]>=97) str[i] = str[i] - 32;
				else str[i] = str[i] + 32;
		}		
	}

	}



	cout<<str;
	
	


	return 0;
}