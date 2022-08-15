#include <stdio.h>

int main() {
    int years ;

    //////////input//////////
    printf( "Input years : " ) ;
    scanf( "%d", &years ) ;
    years = years % 4 ;
    
    //////////output//////////
    if ( years == 0 ) {
        printf( "Feb = 29 days" ) ;
    } else if ( years != 0 && years <= 3 ) {
        printf( "Feb = 28 days" ) ;
    } else {
        printf( "Error, Please try again." ) ;
    } //end if else
    
    return 0 ;
} //end funtion