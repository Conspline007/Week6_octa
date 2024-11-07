#include <stdio.h>

int main()
{
	int i,c=0;
	char ch[]="Hello World";
	for(i=0;ch[i]!='\0';i++)
	c++;
	printf("The length of string is %d",c);
	return 0;
}

