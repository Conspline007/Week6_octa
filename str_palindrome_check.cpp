#include <stdio.h>
#include <string.h>

int main()
{
	int n,i,f=1;
    char t;
	printf("Enter length of string: "); scanf ("%d",&n);
	char a[n+1],b[n+1];

	getchar();

	printf("Enter string: "); fgets(a,n+1,stdin);

    for (i=0;i<n+1;i++)
    b[i]=a[i];

    for (i=0;i<n/2;i++)
    {
        t=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=t;
    }
    

    for (i=0;i<n;i++)
    {
        if (a[i]!=b[i])
        {printf("This is not a palindrome string");
        f=0;
        break;}
    }
    if (f==1)
    printf("It is a palindrome string ");
    
    
	return 0;
}
