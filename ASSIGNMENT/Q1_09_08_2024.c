#include <stdio.h>   
int main()  
{      int sparse [4][5] =      {  
        {0 , 0 , 6 , 0 , 9 },  
        {0 , 0 , 4 , 6 , 0 },  
        {0 , 0 , 0 , 0 , 0 },  
        {0 , 1 , 2 , 0 , 0 }  
    };  
     int s = 0;  
    for(int x=0; x < 4; x++)  
    {  
        for(int y=0; y < 5; y++)  
        {  
            if(sparse[x][y]!=0)  
            {  
                s++;  
            }  
        }  
    }  
    int matrix[3][s];   
     int z=0;  
    for(int x=0; x < 4; x++)  
    {  
        for(int y=0; y < 5; y++)  
        {  
            if(sparse[x] [y]!=0)  
            {  
                matrix[0][z] = x;  
                matrix[1][z] = y;  
                matrix[2][z] = sparse[x] [y];  
                z++;  
            }  
      }  
    }  
      for(int x=0 ;x < 3; x++)  
    {  
        for(int y=0; y < s; y++)  
        {  
            printf("%d ", matrix[x] [y]);  
            printf("");  
        }  
        printf("\n");  
    }  
    return 0;  
}  