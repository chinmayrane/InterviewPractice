#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

string replaceSpaces(string *&str1){
	string inputString1 = *(*(&str1)); 
	string cleanString;
	int stringLength = inputString1.length();
	cout<<"Original Length: "<<stringLength<<endl;
	if(inputString1.length() == 0) return NULL;
	int spaceCounter = 0;

	for (int i = 0; i < inputString1.length(); ++i)
	{
		if(inputString1[i]==' ')
			++spaceCounter;
	}

	int newLength = inputString1.length() + (spaceCounter*2);
	cout<<"New Length : "<<newLength<<endl;

	inputString1.resize(newLength);
	for (int i = stringLength-1,j = newLength-1;i!=-1;--i, --j)
	{
		if(inputString1[i] == ' '){
			cout<<"Am here"<<endl;
			inputString1[j] = '0';
			--j;
			inputString1[j] = '2';
			--j;
			inputString1[j] = '%';
			
		}else{
			inputString1[j] = inputString1[i];
			
		}
	}

	inputString1[newLength]='\0';
	return cleanString;
}


int main()
{
	string str1;

	printf("Enter a String:\n");
	getline(cin,str1);
	
	string *s_1 = &str1;
	string cleanString = replaceSpaces(s_1);

	cout<<"WithoutSpaces String: "<<cleanString<<endl;
}