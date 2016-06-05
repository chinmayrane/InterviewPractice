#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <algorithm>


using namespace std;

bool isSubstring(string str, string substr){
	if(str.length() < substr.length()){
		return 0;
	}

	//Buggy
	// for (int i = 0; i < str.length(); ++i)
	// {
	// 	int j;
	// 	for (j = 0; i < substr.length(); ++i)
	// 	{
	// 		if(str[i+j] != substr[j]){
	// 			break;
	// 		}
	// 	}

	// 	if(j==substr.length()){
	// 		return 1;
	// 	}
	// }

	//Npos == -1 
	//Check if you can find the substr in the cmbined string
	if(str.find(substr) != string::npos) return true;
    else return false;
}


bool isRotation(string str1, string str2){

	if(str1.length()!=str2.length() || str1.length()==0 || str2.length() ==0){return 0;}

	return isSubstring(str1+str1, str2);
}

int main()
{
	string str1,str2;

	printf("Enter a String:\n");
	cin>>str1;

	printf("Enter another String\n");
	cin>>str2;

	cout<<"Is Rotated"<<isRotation(str1,str2)<<endl;
	return 0;
}