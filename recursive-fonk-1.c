#include <stdio.h>
 
 void listele(int sayi)
 {
 	if(sayi==0) 
 	{
	 printf("%d\n",sayi);
	 }
 	else
	 {
	 printf("%d\n",sayi);
	 listele(sayi-1);
	  } 	
 }
 int main()
 {
 	int n;
 	printf("lutfen bir sayi giriniz : ");
 	scanf("%d",&n);
 	listele(n);
 	
 	return 0;
 }
