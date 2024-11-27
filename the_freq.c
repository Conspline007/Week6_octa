#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,count=0;
    
    printf("Enter the length of the string: ");
    scanf("%d",&n);

    char s[n+1];

    getchar();

    printf("Enter the string: ");
    fgets(s,n+1,stdin);

    for(i=1;i<n;i++)
    {
        if(s[i]=='t' && s[i+1]=='h' && s[i+2]=='e' && (s[i+3]==' '||s[i+3]=='\0') && s[i-1]==' ')
        {
            count++;
        }
    }

    printf("Frequency of the word 'the': %d\n",count);

    return 0;
}
