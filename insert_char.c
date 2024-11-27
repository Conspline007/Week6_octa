#include <stdio.h>

int main()
{
    int n,i,p;
    char c;

    printf("Enter the length of the string: ");
    scanf("%d",&n);

    char s[n+1];

    getchar();

    printf("Enter the string: ");
    fgets(s,n+1,stdin);

    printf("Enter the position to insert the character: ");
    scanf("%d",&p);

    printf("Enter the character to insert: ");
    scanf(" %c",&c);

    for(i=n;i>=p;i--)
    {
        s[i+1]=s[i];
    }

    s[p]=c;
    s[n+1]='\0';

    printf("The string after insertion is: %s",s);

    return 0;
}
