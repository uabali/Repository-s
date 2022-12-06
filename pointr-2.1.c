 #include <stdio.h>
 
 void degistir(int x,int y)
 {
 	 int gecici;
 	 
 	 gecici=x;
 	 
 	 x=y;
 	 y=gecici;
 	
 	printf(" x:%d ve y:%d \n\n\n",x,y);
 }
 

 int main()
 {
 	int a=10,b=20;
 	
 	printf("cagirmadan once %d ve %d \n\n", a,b);
 	
    degistir(a,b);
 	
 	printf("cagrildiktan sonra %d ve %d", a,b);
 	
 	return 0;
 }
 
 /* adersle göndermesek gllobal olarak o adresin gösterdiði deðeri
 deðiþtiremeyiz.Eðer adres ile gönderirsek deðiþtireceðimiz deðer 
 her tarafta deðiþir.*/
