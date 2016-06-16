#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

void reverse(char *str){
	// printf("%s\n", str);

	//Calculate the length
	int length =0;

	while(str[length] != '\0'){
		length++;
	}

	printf("Length: %d\n", length);

	int i,j;

	for(i=0,j=length-1; i<j; ++i,--j){
		printf("I: %d\nJ:%d\n",i,j);
		printf("str[i]: %c\nstr[j]:%c\n",str[i],str[j]);
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		printf("str[i]: %c\nstr[j]:%c\n",str[i],str[j]);
	}

}

int main()
{
	char* str = new char[256];

	printf("Enter a Sting\n");
	scanf("%s",str);
	reverse(str);
	printf("The reversed String is :%s\n", str);
	return 0;
}