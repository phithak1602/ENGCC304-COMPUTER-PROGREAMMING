#include <stdio.h>

int main() {
    int num1 ;
    float num2 ;
    char abc ;

    //////////input//////////
    printf( "Please Enter value :" ) ;
    scanf( "%d %f %c" ,&num1 ,&num2 ,&abc ) ;
    
    //////////output//////////
    printf( "%d %.2f %c" ,num1 ,num2 ,abc ) ;
    return 0 ;
} //end funtion
