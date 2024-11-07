#include <stdio.h>
#include <string.h>

int main()
{
	int n,i,j,f=1;
	printf("Enter the number of elements to be inserted in the string ");
	scanf("%d",&n);
	char a[n],b[n];
//Getting input	
    printf("Enter the string ");
    scanf("%s",a);

    for (i=0;i<n+1;i++)
    b[i]=a[i];

    strrev(a);

    puts(a);
    puts(b);

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
