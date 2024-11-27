#include <stdio.h>

int main()
{
    int n,i;
    printf("Enter the length of the string: ");
    scanf("%d",&n);

    char s[n+1];

    getchar(); 

    printf("Enter the string: ");
    fgets(s,n+1,stdin);

    printf("Vowels in the string: ");
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'|| s[i]=='A'|| s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U')
        {
            printf("%c ",s[i]);
        }
    }

    return 0;
}
