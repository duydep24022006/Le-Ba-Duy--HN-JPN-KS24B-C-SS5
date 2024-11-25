#include <stdio.h>

int main(){
	int i=86, n;
	printf("chao mung ban den voi tro choi nhi mang ten la doan so\n");
	do{
		printf("moi ban nhap so ngau nhien dung nhat: ",i);
		scanf("%d",&n); 
		if(i!=n){
			printf("sai roi be cung heheehe!\n");
		}
	}while(i!=n);
	printf("chuc mung chau da doan dung");
	
	 return 0; 
}
