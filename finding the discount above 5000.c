#include <stdio.h> 
int main() 
{ 	 
    double  quantity,price,amount,discount; 	 	
	   printf(" 5000:");   
	   scanf("%lf %lf",&quantity, &price); 	
	   amount=20*30; 	
	   if(amount>5000) 
{ 		                    discount=amount*0.05; 		
amount=amount-discount; 	
} 	 	
	printf("%lf",amount); 	
 	return 0;
 	 }