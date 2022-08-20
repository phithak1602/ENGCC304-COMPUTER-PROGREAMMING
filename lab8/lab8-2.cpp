#include <stdio.h>

int main() {
    int array[1000] ;
    int num ,i ,j ,k ;
    bool chak ;

    //////////Input//////////
    printf( "Input Array Size : " ) ;
    scanf( "%d",&num ) ;
    i = 0 ;
    while ( i < num ) {
        printf( "Array[%d] : ", i ) ;
        scanf( "%d" ,&array[i] ) ;
        i++ ;
    } //end while

    //////////Output//////////
    printf( "Unique = " ) ;
    j = 0 ;
    while ( j < num ) {
        chak = false ; 
        k = 0 ;
        while ( k < num ) {
            if ( j != k ) {
                if ( array[j] == array[k] ) {
                chak = true ;
                } //end if
            } //end if
            k++ ;  
        } //end while
        if ( chak == false ) {
            printf( "%d ", array[j] );
        } //end if
        j++ ;  
    } //end while
    return 0 ;
} //end funtion