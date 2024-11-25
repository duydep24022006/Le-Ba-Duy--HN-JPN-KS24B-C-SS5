#include <stdio.h>

int main(){
	int i, n, sum=0;
	printf("moi ban nhap so can tinh toan ");
	scanf( "%d",&n);
	if(n > 0){
		for(i=1;i <= n;i++){
			sum += i;
		}
		printf("Tong cac so tu 1 den %d la %d\n",n,sum);
	}else {
		printf("moi ban nhap so nguyen lon hon 0" );
	} 
	 return 0;  
} 
