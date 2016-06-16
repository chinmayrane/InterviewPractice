#include <stdio.h>
#include <stdlib.h>
#include <map>
#include <string>
#include <iostream>


using namespace std;

bool isUnique(string str){
	int flag = 0;
	for (int i = 0; i < str.length(); ++i)
	{
		cout<<"TypeCasted character Literal"<<(int)str[i]<<endl;
		int pos = (int)str[i] - (int)'a';
		cout<<"Pos: "<< pos<<endl;
		 // (1 << pos) shifts the bit representation of 1 (32 bits) to left by pos-steps
         // if ((check & (1 << pos)) >0 ) means that current char was seen before
		if((flag & (1<<pos)) > 0)
			return false;
		flag = flag | (1 <<pos);
		cout<<"Flag Value : "<< flag <<endl;	
	}
	return true;
}


// bool isUnique(string str){
// 	map<char, bool> compareMap;
// 	for (int i = 0; i < str.length(); ++i)
// 	{
// 		if(compareMap.find(str[i]) == compareMap.end())
// 			compareMap[str[i]]=1;
// 		else return 0;
// 	}
// 	return 1;
// }

int main()
{
	string str;
	printf("Enter a String:\n");
	cin>>str;

	if(isUnique(str))
		printf("All the characters in the string are unique\n");
	else
		printf("The characters in the string aren't unique\n");
	return 0;	
}

