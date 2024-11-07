#include <stdio.h>
#include <string.h>

int main()
{
	char a[20];
	int i;
//Getting input	
    printf("\nEnter the string \n");
    gets(a);

    if (a[0]>='a'&& a[0] <='z')
	a[0]=a[0]-32;
    
    for (i=1;i<20;i++)
    {
    	if(a[i]==' ' && (a[i+1]>='a'&& a[i+1] <='z'))
    	a[i+1]=a[i+1]-32;
	}
	printf("\nThe required string is \n");
	puts(a);
    
	return 0;
}
