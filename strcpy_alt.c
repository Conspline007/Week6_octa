#include <stdio.h>
#include <string.h>
int main()
{
    int s1_len,s2_len,i=0;
	printf("Enter length of 1st string: "); scanf ("%d",&s1_len);
	printf("Enter length of 2nd string: "); scanf ("%d",&s2_len);
	char s1[s1_len+1],s2[s2_len+1];

	getchar();

	printf("Enter 1st string: "); fgets(s1,s1_len+1,stdin);

	getchar();

	printf("Enter 2nd string: "); fgets(s2,s2_len+1,stdin);

	while (s1[i]!='\0' && s2[i]!='\0')
	{
        s1[i]=s2[i];
		i++;
	}
	s1[i]='\0';

	printf("1st string now : %s",s1); 

	return 0;
}

