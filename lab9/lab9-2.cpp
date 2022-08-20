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
    i = num ;
    while( i >= 0 ) {
        printf( "%c", name[i] ) ;
        i-- ;
    } //end while
    return 0 ;
} //end funtion