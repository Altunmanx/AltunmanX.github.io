
#include <stdio.h>
#include <math.h>
int main( void )
{
 int popularity;     //popularity
 int size;           //size
 int homeValue;      // summation popular�ity and size ant multiplication 10000
 
 printf("Enter the popularity: \n " );
 scanf( "%d", &popularity );
 
 printf("Enter the size: \n ");
 scanf("%d", &size );
 
 homeValue = (int)(pow(popularity, 3) + pow(size, 2))*10000;

 printf("Home value is: %d \n", homeValue); 
 
 return 0;
 
}
