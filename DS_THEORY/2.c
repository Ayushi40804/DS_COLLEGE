#include <stdio.h>
#include <string.h>
int main()
{
    char p[20]; 
char *s = "string"; 
int length = strlen(s); 
//printf("%d\n",length);
int i; 
for (i = 0; i < length; i++) 
     p[i] = s[length - i]; //This program access s[6] which is the null string character.
    //p[length] = '\0'; //adding null character at the end of the string
    // printf("TEST\n");
printf("%s",p); 
    return 0;
}
