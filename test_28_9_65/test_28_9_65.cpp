#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Scan_and_Showdata() ;
void Calculate_Age() ;
void Calculate_MinMax() ;

struct Employee {
    int  no, yearold, monthold, dayold ;
    char name[ 100 ] ;
}typedef Em ;

Em nee[ 100 ] ;
int n, yearfix = 2018, monthfix = 6, dayfix = 21, sumyear[ 100 ], summonth[ 100 ], yearmax = -99, yearmin = 99, max, min ;

int main() {
    Scan_and_Showdata() ;
    printf( "\n Max : %s [ %d Years,%d Months ]", nee[max].name, sumyear[max], summonth[max] ) ;
    printf( "\n Min : %s [ %d Years,%d Months ]\n", nee[min].name, sumyear[min], summonth[min] ) ;

    return 0 ;
}//end funtion main

void Scan_and_Showdata() {
    FILE *fp ;
    fp = fopen( "a.txt","r" ) ;
    if( fp == NULL ) {
        printf( "Error opening file" ) ;
        exit( 0 ) ;
    }//end if

    char t1[ 20 ], t2[ 20 ], t3[ 20 ], t5[ 20 ], t6[ 20 ] ;
    fscanf( fp,"%2s %10s %10s",t1,t2,t3 ) ;
    
    while( fscanf( fp,"%2d %10s %4d%c%2d%c%2d\n", &nee[n].no, nee[n].name, &nee[n].yearold, t5, &nee[n].monthold, t6, &nee[n].dayold ) != EOF ) {
        Calculate_Age() ;
        Calculate_MinMax() ;
        printf( " %s %d Years %d Months\n", nee[n].name, sumyear[n], summonth[n] ) ;
        n++ ;
    }//end while
    fclose( fp ) ; 
}//end funtion Scan_and_Showdata

void Calculate_Age() {
    sumyear[n] = yearfix - nee[n].yearold ;
    if( nee[n].monthold < monthfix || nee[n].monthold == monthfix ) {
        summonth[n] = monthfix - nee[n].monthold ;
    }else {
        summonth[n] = monthfix - nee[n].monthold + 12 ;
        sumyear[n] = yearfix - nee[n].yearold - 1 ;
    }//end if else

    if( nee[n].dayold > dayfix ) {
        summonth[n] = summonth[n] - 1 ;
    }//end if

    if( summonth[n] < 0 ) {
        sumyear[n] = sumyear[n] - 1 ;
        summonth[n] = summonth[n] + 12 ;
    }//end if
}//end funtion Calculate_Age

void Calculate_MinMax() {
    if( sumyear[n] >= yearmax ) {
        yearmax = sumyear[n] ;
        max = n ;
    }//end if
    if( sumyear[n] <= yearmin ) { 
        yearmin = sumyear[n] ;
        min = n ;
    }//end if
}//end funtion Calculate_MinMax

