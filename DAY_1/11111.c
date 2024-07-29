//Write a function to find the longest substring of a given string that contains all unique characters.
//For example, the longest substring without repeating characters for the string "abcabcbb" is "abc", with the length of 3.
#include <stdio.h>
int main()
{
    int x, arr[100];
    printf ("Enter a number: ");
    scanf("%d", &x);
    
    printf("Enter a string : ");
    for(int i = 0; i < 100; i++)
    {
        scanf("%c", &arr[i]);
        if (arr[i] == '\n')
        {
            break;
        }
    } 
    return 0;
}