#include <stdio.h>

int main() {
    int i ;
    int j ;
    int num ;
    char star = '*' ;

    //////////input//////////
    printf( "Input your line : " ) ;
    scanf( "%d", &num ) ;

    //////////output//////////
    for ( i = 1 ; i <= num ; i++ ) {
        for ( j = num ; j >= i ; j-- ) {
            printf( "%c", star ) ;
        } //end for
        printf( "\n" ) ;
    } //end for
    return 0 ;
} //end funtion