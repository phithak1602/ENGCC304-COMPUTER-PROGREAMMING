#include <stdio.h>
#include <string.h>

void EmployeeInfo() ;
void Calculate() ;
void EmployeeOutput() ;

bool  condition = true ;
char  chack ,name[100] ,namemax[100] ;
int   count ,year ,yearmax ;
float salary ,avg ,sum ,salarymax ;

int main() {
    do {
        printf ( "Do you want to Enter Employee Information? (y/n) : " ) ;
        scanf  ( " %c",&chack ) ;
        switch ( chack )  {
        case 'y' :
        	condition = true ;
            EmployeeInfo();
        break ;
        case 'n' :
            condition = false ;
            EmployeeOutput() ;
        break ;
        }//end switch case
    } while ( condition ) ; 
    return 0 ;
}//end funtion main

void EmployeeInfo() {
    count++ ;
    printf( "Employee Name : " ) ;
    char temp ;
    scanf ( "%c",&temp ) ;                //temp statement to clear buffer
    scanf ( "%[^\n]",name ) ;
    printf( "Salary (Bath/Month) : " ) ;
    scanf ( "%f",&salary ) ;
    printf( "Duration (Year) : " ) ;
    scanf ( "%d",&year ) ;
    Calculate();
}//end funtion EmployeeInfo

void Calculate() {
    sum += salary ;
    avg = sum / count ;
    while( salary >= salarymax ) {
        strcpy( namemax, name ) ;
        salarymax = salary ;
        yearmax = year ;
        break;
    }//end while
}//end funtion Calculate

void EmployeeOutput() { 
    printf( "\nAverage of Salary : %.2f Bath",avg ) ;
    printf( "\nPayment of every month : %.2f Bath",sum ) ;
    printf( "\n** Most salary in this business **" ) ;
    printf( "\nName : %s (%d Years)",namemax,yearmax ) ;
    printf( "\nSalary : %.2f Bath", salarymax ) ;
}//end funtion EmployeeOutput
