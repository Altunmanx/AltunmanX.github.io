#include <stdio.h>

/* function main begins program execution */
int main( void )
{
   int integer1; /* first number to be input by user  */
   int integer2; /* second number to be input by user */
   int sum;      /* variable in which sum will be stored */ 

   printf(" Enter first integer\n");
   scanf( "%d", &integer1 );       

   printf( "Enter second integer\n"); 
   scanf( "%d", &integer2 );           
   
   sum = integer1 + integer2; 

   printf( "Sum is %d\n", sum ); 
   
   return 0; 

} 
