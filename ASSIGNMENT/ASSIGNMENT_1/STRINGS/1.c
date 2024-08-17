#include <stdio.h>
#include <string.h>
void Substring(char *str_2305849);
int main(){
    char string_2305849[100];
    printf("Enter a string: ");
    scanf("%s", string_2305849);
    Substring(string_2305849);
    return 0;
}
void Substring(char *str_2305849){
    int i, j, k, str_len_2305849, max_len_2305849 = 0, first_2305849 = 0, last_2305849 = 0;
    str_len_2305849 = strlen(str_2305849);
    for(i = 0; i < str_len_2305849; i++){
        int freq[256] = {0};
        for(j = i; j < str_len_2305849; j++){
            if(freq[str_2305849[j]] == 1){
                break;
            }
            freq[str_2305849[j]] = 1;
            if(j - i > max_len_2305849){
                max_len_2305849 = j - i;
                first_2305849 = i;
                last_2305849 = j;
            }
        }
    }
    printf("The longest substring with all unique characters is: ");
    for(k = first_2305849; k <= last_2305849; k++){
        printf("%c", str_2305849[k]);
    }
    printf("\n");
}
