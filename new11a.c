#include <stdio.h>
#include <stdlib.h>
#include <math.h>

		void ReturnValFromParam(  int newFirstParametr, int newSecondParametr )
		{
			 int x;
	       		 int ad = 20;
			 int bd = 30;

			 x = ad + bd;







			 char str[100];
			 int i;


			 printf("Function gets parameter from user");

			 scanf( %d,%d, str, &i );
			 puts( str );
			 
			 printf("You Entered :", %d,%d, str, i );







			 ReturnValFromParam( ad,bd );

 			 printf( "Argument x return value: " , x ); 

			 printf( "Function return value of x", ReturnValFromParam( x ) );

			 printf( "Function return values",  ReturnValFromParam(ad,bd) );

			 ReturnValFromParam(10,20);


		}


int main( int argc , char argv[])
{
  int y = 110;
  int z = 110;
  int t = 110;

  
 
  int array[y][z][t]; /* Declares an array */
  
 	 
    		for ( int y = 100; y > 1; y-- ) {
        		for( int z = 100; z > 1; z-- ) {
				for( int t = 100; t > 1 ;  t-- ) {
  	
  
  
    					
        					printf( "[%d][%d][%d]=%d\t"); printf(" y, z , t: \t", y,z,t ); printf("array[y][z][t]: \t" , array[y][z][t] ); printf("[%d][%d][%d]\n" ); 
				
						
				}
					}
						}


						float q = 0.000001;
						float a = 0.000002;
						float v = 0.000003;

						for ( q = 1.968795 ; q < 10; q++ ) {
							for ( a = 2.345633; a < 20; a++ ) {
								for ( v = 3.345251; v < 30; v++ ) {
									printf("%d%d%di=%d\t] = %d\t"); printf( "q,a,v: \n", q,a,v );

					
  		}
			}
				}
					
						
			int s=1,d=5,f=7;
			int g=4,h=5,j=6;
			int l,p;

		int qw[d][f];
		int mkv[h][j];
		int mkvv[l][p];
				
				printf( "qw :", qw[d][f] );
			
					mkvv[l][p] = mkv[h][j] + qw[d][f];

					printf( "mkvv : " , mkvv[l][p] );
						
						printf( "mkv :\t", mkv[h][j] );

							l = d+h;
							p = f+j;

							printf( "qw + mkv = \t" , mkvv[l][p] );
		
								
		  double e;
		  double *u;

		  for( *u = 1; *u < 10; *u++ ) {
			for( e = 1; e < 10; e++ ) {

					e = 1 ;
					u = &e;
					
					

					printf( "/nu = ", u );
					printf( "e = ", e );
					printf("/n");

					*u = 10;
					printf("\n*u", *u );
			}
				}   
  

		 return 1;
}










