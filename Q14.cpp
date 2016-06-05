#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <algorithm>


using namespace std;

bool checkAnagrams(string *&str1, string *&str2){
	string inputString1 = *(*(&str1)); 
	string inputString2 = *(*(&str2));

	if(inputString1.length() != inputString2.length())return false;
	if(inputString1 == "" || inputString2 == "") return false;


	sort(&inputString1[0], &inputString1[0]+inputString1.length());
	sort(&inputString2[0], &inputString2[0]+inputString2.length());

	if(inputString1 == inputString2) return true;
	else return false;
}


int main()
{
	string str1,str2;

	printf("Enter a String:\n");
	cin>>str1;

	printf("Enter a possible anagram string you think:\n");
	cin>>str2;
	string *s_1 = &str1;
	string *s_2 = &str2;
	
	if(checkAnagrams(s_1,s_2)){
		cout<<"String are anagram"<<endl;
	}else{
		cout<<"String are not anagram"<<endl;	
	}
	
	
}