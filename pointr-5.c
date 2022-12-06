#include <stdio.h>
 
 int main()
 {
 	int t[100];
 	int i;
 	int *pt;
 	
 	for(pt=t;pt<t+100;pt++)
 	{
 		*pt=0; 
	 }
	 for(pt=t;pt<t+100;pt++)
 	{
 		printf("1.forum %d\n",*pt); 
	 }

/*
    for(i=0;i<100;i++)
 	{
 		t[i]=0; 
	 }
	 for(i=0;i<100;i++)
 	{
 		printf(" 2. forum %d\n",t[i]); 
	 }

 	// t=&t[0] aynýdýr.
 	*/
 	
 	
 	return 0;
 }
