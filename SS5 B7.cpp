#include <stdio.h>

int main(){
	unsigned int a, b, number1, number2, j;
	printf("moi ban nhap so a!");
	scanf("%d",&a);
	printf("moi ban nhap so b!");
	scanf("%d",&b);
	number1 = a , number2 = b;
	while(a != b){
		if(number1>number2){
			j = number1 - number2; 
			number1 = j; 
		} else{
			j = number2 - number1; 
			number2 = j; 
		} 
		
	}
	 printf("UCLN cua hai so da nhap la: %u\n", a);
	 
	 return 0;	 
	
} 

 
