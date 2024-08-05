Write a function to find the longest substring of a given string that contains all unique characters. For example, the longest substring without repeating characters for the string "abcabcbb" is "abc", with the length of 3.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter a string : ");
    scanf("%s", str);
    int n = strlen(str);
    int i, j, k;
    int max = 0;
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            int flag = 0;
            for (k = i; k < j; k++)
            {
                if (str[k] == str[j])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                if (max < j - i + 1)
                {
                    max = j - i + 1;
                }
            }
        }
    }
    printf("The longest substring without repeating characters is %d", max);
    return 0;
}