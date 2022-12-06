/* klavyeden girilen iki tamsayýnýn
toplamýný fonksiyon kullanarak
hesaplayan c prog. yazýnýz */

#include<stdio.h>

int toplam(int x,int y)
{
	return (x+y);
}

 int main()
 {
 	int a,b,sytplm;
 	
 	printf("toplamak istedeginiz iki sayi giriniz:\n");
 	   printf("Birinci sayiyi giriniz:\n");
 	   scanf("%d",&a);
 	   printf("Ikinci sayiyi giriniz:\n");
 	   scanf("%d",&b);
 	   // sytplm=toplam(a,b);
 	   // yada
 	   // printf("girdiginiz sayilarin toplami %d dir", sytplm);
 	   printf("girdiginiz sayilarin toplami %d dir", toplam(a,b));
 
 	return 0;
 }
