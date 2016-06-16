#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

string removeDuplicates(string *&str){
	string inputString;

	// cout<<"String: "<<*(*(&str))<<endl;
	inputString = *(*(&str));

	// Calculate Length
	int length = inputString.length();
	string clean = "";
	
	if(length < 2) return inputString;

	int flag = 0, p=0;

	//Logic Similar to Unique Character Identification
	for (int i = 0; i < length; ++i)
	{
		int pos = (int)inputString[i] - (int)'a';
		// Comparison
		if((flag & (1<<pos))==0){
			clean += inputString[i];
			flag = flag | (1 <<pos);
		}
	}

	return clean;
};


int main()
{
	string str;
	printf("Enter a String:\n");
	cin>>str;
	string *s_ = &str;
	
	string cleanString = removeDuplicates(s_);
	
	cout<<"Clean String : "<<cleanString<<endl;
}