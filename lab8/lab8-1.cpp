#include <stdio.h>

int main() {
    int array[1000] ;
    int num ,i ,j ,k ;
    bool chak ;

    //////////Input//////////
    printf( "Input Array Size : " ) ;
    scanf( "%d",&num ) ;
    for ( i = 0 ; i < num ; i++ ) {
        printf( "Array[%d] : ", i ) ;
        scanf( "%d" ,&array[i] ) ; 
    } //end for

    //////////Output//////////
    printf( "Unique = " ) ;
    for ( j = 0; j < num; j++) {
        chak = false ;
        for ( k = 0; k < num; k++) {
            if ( j != k ) {
                if ( array[j] == array[k] ) {
                chak = true ;
                } //end if
            } //end if
        } //end for
        if ( chak == false ) {
            printf( "%d ", array[j] );
        } //end if  
    } //end for
    return 0 ;
} //end funtion