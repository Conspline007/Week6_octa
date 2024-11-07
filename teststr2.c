#include <stdio.h>
#include <string.h>
int main()
{
    int n=10,i,j;
    char temp;
	char str[n];
    fgets(str,n,stdin);
    //Sorting	
	for (i = 0; str[i] != '\0'; i++) {
        for (j = i + 1; str[j] != '\0'; j++) {
            if (str[i] > str[j]) {
                // Swap the characters if they are in the wrong order
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    puts(str);

	return 0;
}
