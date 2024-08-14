//print three lines one with charaacter one with word and one with string using input
#include <stdio.h>
int main()
{
    char c;
    char word[20];
    char sentence[100];
    printf("Enter a character: ");
    scanf("%c", &c);
    printf("Enter a word: ");
    scanf("%s", word);
    printf("Enter a sentence: ");
    scanf(" %[^\n]s", sentence);
    printf("Character: %c\n", c);
    printf("Word: %s\n", word);
    printf("Sentence: %s\n", sentence);
    return 0;
}