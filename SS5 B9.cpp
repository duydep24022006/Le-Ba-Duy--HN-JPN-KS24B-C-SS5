#include <stdio.h>

int main(){
	float op, a=0, b=0, c=0;
	int i; 
	do{
		printf("\n   MENU\n");
		printf("1 .Nhap 3 so \n2. tong 3 so\n3. Trung binh cong 3 so\n4. so nho nhat \n5. So lon nhat\n6. Thoat\n");
		printf("Moi ban chon: \n");
		scanf("%d",&i);
		switch(i){	
	    		case 1:
               			 printf("moi ban nhap so a\n ");
               			 scanf("%f",&a);
               			 printf("moi ban nhap so b\n ");
               			 scanf("%f",&b);
               			 printf("moi ban nhap so c\n ");
               			 scanf("%f",&c);
               			 break;
               			 
            		case 2:
               			op = a + b +c;
				 printf("tong 3 so = %f.2\n",op);
               			 break;
            		case 3:
                		op = (float)(a + b +c)/3;
                		printf("trung binh cong 3 so = %.2f\n",op);
               	 		break;
           		case 4:
                		if(c<=a && c<=b){
                			printf("so nho nhat la %.2f",c);
					break; 
				} else if(b<=c && b<=a){
					printf("so nho nhat la %.2f",b);
					break; 
				}else{
					printf("so nho nhat la %.2f",a);
					break;
				}
                	case 5: 
				if(c>=a && c>=b){
                			printf("so lon nhat la %.2f",c);
					break; 
				} else if(b>=c && b>=a){
					printf("so lon nhat la %.2f",b);
					break; 
				}else{
					printf("so  nhat la %.2f",a);
					break;
				}	
           		case 6: // Thoát
                		printf("Cam on ban da su dung chuong trinh. Tam biet!\n");
                		break;
            		default:
                		printf("Moi ban nhap dung yeu cau!\n");
			}
	} while(i != 6);
	
	return 0;	 
} 

