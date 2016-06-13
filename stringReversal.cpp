#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <stack>

using namespace std;

string stringReversal(string *&c){
	stack<char> s1;
	string s2 = *(*(&c));
	
	for (int i = 0; i < s2.length(); ++i){
		s1.push(s2[i]);
	}

	for (int i = 0; i < s2.length(); ++i){
		s2[i] = s1.top();
		s1.pop();		
	}
	return s2;
}


int main()
{
	string s;
	cout<<"[INPUT] Enter a string to reverse: \n";
	cin>>s;
	string *s_ = &s;
	string reversedString = stringReversal(s_);
	cout<<"[OUTPUT] Reversed String: "<<reversedString<<"\n";

	return 0;	
}