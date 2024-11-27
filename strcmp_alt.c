#include <stdio.h>
#include <string.h>
int main()
{
	int s1_len,s2_len,i=0,k,f=1;
	printf("Enter length of 1st string: "); scanf ("%d",&s1_len);
	printf("Enter length of 2nd string: "); scanf ("%d",&s2_len);

	if ((s1_len!=s2_len))
	{printf("Both the strings are not equal "); f=0; return 0;}

	char s1[s1_len+1],s2[s2_len+1];

	getchar();

	printf("Enter 1st string: "); fgets(s1,s1_len+1,stdin);

	getchar();

	printf("Enter 2nd string: "); fgets(s2,s2_len+1,stdin);
	
	for (i=0;i<s1_len;i++)
	{
		k=s1[i]-s2[i];
		if (k!=0)
		{
		    printf("Both the strings are not equal ");
			f=0;
		    break;
		}
	}
	if(f==1)
	printf("Both strings are equal");
	return 0;
}
