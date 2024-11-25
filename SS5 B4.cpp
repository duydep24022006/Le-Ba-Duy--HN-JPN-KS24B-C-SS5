#include <stdio.h>

int main(){
	int i, n, sum=1;
	printf("moi ban nhap so tu 1 den 10 de tinh  bang cuu truong ");
	scanf( "%d",&n);
	if(n > 0 && n<=10){
		for(i=1;i <= 10;i++){
			sum = i * n;
			printf("bang cuu truong cau %d là  %d\n",n,sum);
		}
		}else {
			printf("moi ban nhap so nguyen lon hon 0" );
		
	} 
	 return 0;  
} 
