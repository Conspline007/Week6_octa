#include <stdio.h>
#include <string.h>
int main()
{
	char a[4]="Hell";
	char b[4]="Hell";
	
	int k=0,i,f=1;
	int k1,k2;
	printf("%d %d",k1,k2);
	
	
	k1=strlen(a);
	k2=strlen(b);
	
	if ((k1!=k2))
	printf("Both the strings are not equal ");
	
	else
	{
		for (i=0;i<k1;i++)
		{
			k=a[i]-b[i];
		    if (k!=0)
		    {
			printf("Both the strings are not equal ");
			f=0;
		    break;
		    }
		}
    }
	if(f==1)
	printf("Both strings are equal");
	return 0;
}
