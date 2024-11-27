#include <stdio.h>

int main()
{
    int n, i, f = 0;
    char c;

    printf("Enter the length of the string: ");
    scanf("%d", &n);

    char s[n+1];

    getchar();

    printf("Enter the string: ");
    fgets(s, n+1, stdin);

    printf("Enter the character to find: ");
    scanf("%c", &c);

    for (i=0; s[i] !='\0'; i++)
    {
        if (s[i]==c)
        {
            printf("First occurrence of '%c' is at index %d\n", c, i);
            f=1;
            break;
        }
    }

    if (f==0)
        printf("Character '%c' not found in the string\n", c);

    return 0;
}
