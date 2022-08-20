#include <stdio.h>
#include <string.h>

int main() {
    char name[100] ;
    int i ;

    //////////input//////////
    printf( "Input : " ) ;
    scanf( "%s",&name ) ;

    //////////output//////////
    printf( "outout = " ) ;
    int num = strlen( name ) ;
    for ( i = num ; i >= 0 ; i-- ) {
        printf( "%c", name[i] ) ;
    } //end for
    return 0 ;
} //end funtion