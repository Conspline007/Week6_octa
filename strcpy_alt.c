#include <stdio.h>
#include <string.h>
int main()
{
    int i=0;
	char a[4]="Hell";	
	char b[4]="B";
	
	for (i=0;  (a[i]!='\0' && b[i]!= '\0')  ;i++)
	a[i]=b[i];
	
	printf("The output after copying string 2 into string 1 is \n");
	for (i=0;i<strlen(a);i++)
	{
		printf("%c",a[i]);
	}

	return 0;
}

