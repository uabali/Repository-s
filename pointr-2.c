 #include <stdio.h>
 
 void degistir(int *x,int *y)
 {
 	 int gecici;
 	 
 	 gecici=*x;
 	 
 	 *x=*y;
 	 *y=gecici;
 	
 }
 

 int main()
 {
 	int a=10,b=20;
 	
 	printf("cagirmadan once %d ve %d \n\n", a,b);
 	
    degistir(&a,&b);
 	
 	printf("cagrildiktan sonra %d ve %d", a,b);
 	
 	return 0;
 }
