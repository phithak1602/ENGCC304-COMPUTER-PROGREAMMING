#include <stdio.h>

int main() {
    int years ;

    //////////input//////////
    printf( "Input years : " ) ;
    scanf( "%d", &years ) ;
    years = years % 4 ;
    
    //////////output//////////
    switch (years) {
        case 0 :
            printf( "Feb = 29 days" ) ;
        break ;
        case 1 :
            printf( "Feb = 28 days" ) ;
        break ;
        case 2 :
            printf( "Feb = 28 days" ) ;
        break ;
        case 3 :
            printf( "Feb = 28 days" ) ;
        break ;
        default:
            printf( "Error, Please try again." ) ;
        break ;
    } //end switch case
    return 0 ;
} //end funtion