#include <stdio.h>

int main(){
	int i, n=1, sum=1;

	do{
		printf("\n");
		printf("bang cuu truong cua %d do nha be con nho nho\n",n);
		for(i=1;i <= 10;i++){
			sum = i * n;
			printf("bang cuu truong cau %d là %d * %d = %d\n",n,i,n,sum);
		}
		n++;
	}while(n<=9);
	
	 return 0;  
} 
