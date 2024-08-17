//Recurssive Algorithm to solve Tower of Hanoi Problem.
//No of steps required to solve the problem is 2^n - 1.

#include <stdio.h>

void TowerOfHanoi (int n,char A,char B,char C);

int main ()
{
    int n;
    printf(" Enter the number of disks:");
    scanf("%d", &n );
    //printf("TEST");
    TowerOfHanoi ( n , 'A' , 'B' , 'C' ) ;
    return 0 ;
}
void TowerOfHanoi ( int n , char A , char B , char C ){
    
    if ( n <= 0){
        printf("ERROR!\n");
        return;
    }
    if ( n==1 ) {
        //printf("TEST");
        printf ( "Move the disk from %c to %c.\n" ,A , C);
        return;
    }
    else
    {
        //printf("TEST");
        TowerOfHanoi(n-1, A , C , B );
        TowerOfHanoi( 1 , A , B , C );
        TowerOfHanoi(n-1, B , A , C );
    }
}