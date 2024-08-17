#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isAnagram(char *str1_AYUSHI, char *str2_AYUSHI);
int main(){
    char str1_AYUSHI[100], str2_AYUSHI[100];
    printf("Enter the first string: ");
    gets(str1_AYUSHI);
    printf("Enter the second string: ");
    gets(str2_AYUSHI);
    if (isAnagram(str1_AYUSHI, str2_AYUSHI)){
        printf("The two strings are anagrams of each other.\n");
    }
    else{
        printf("The two strings are not anagrams of each other.\n");
    }
    return 0;
}
int isAnagram(char *str1_AYUSHI, char *str2_AYUSHI){
    int freq1_AYUSHI[256] = {0}, freq2_AYUSHI[256] = {0}, i_2305849;
    for(i_2305849 = 0; str1_AYUSHI[i_2305849] != '\0'; i_2305849++){
        if (isalpha(str1_AYUSHI[i_2305849])){
            freq1_AYUSHI[tolower(str1_AYUSHI[i_2305849])]++;
        }
    }
    for(i_2305849 = 0; str2_AYUSHI[i_2305849] != '\0'; i_2305849++){
        if (isalpha(str2_AYUSHI[i_2305849])){
            freq2_AYUSHI[tolower(str2_AYUSHI[i_2305849])]++;
        }
    }
    for(i_2305849 = 0; i_2305849 < 256; i_2305849++){
        if (freq1_AYUSHI[i_2305849] != freq2_AYUSHI[i_2305849]){
            return 0;
        }
    }
    return 1;
}