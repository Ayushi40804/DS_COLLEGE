#include <stdio.h>
#include <string.h>
#include <ctype.h>
void compress(char *str_AYUSHI);
int main(){
    char str_AYUSHI[100];
    printf("Enter the string: ");
    gets(str_AYUSHI);
    compress(str_AYUSHI);
    return 0;
}
void compress(char *str_AYUSHI){
    int count_AYUSHI = 1, i_AYUSHI;
    for(i_AYUSHI = 0; str_AYUSHI[i_AYUSHI] != '\0'; i_AYUSHI++){
        if (str_AYUSHI[i_AYUSHI] == str_AYUSHI[i_AYUSHI+1]){
            count_AYUSHI++;
        }
        else{
            printf("%c%d", str_AYUSHI[i_AYUSHI], count_AYUSHI);
            count_AYUSHI = 1;
        }
    }
}