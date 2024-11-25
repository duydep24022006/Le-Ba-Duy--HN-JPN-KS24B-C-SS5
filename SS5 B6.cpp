#include <stdio.h>

int main(){
    int a, b, i;
	float sum;  
    
    do {
        printf("Moi ban nhap so a\n");
        scanf("%d", &a);
        printf("Moi ban nhap so b\n");
        scanf("%d", &b);
        printf("  CALCULATOR\n");
        printf("1. Tong hai so\n2. Hieu hai so\n3. Tich hai so\n4. Thuong hai so\n5. Thoat\n");
        printf("  Lua chon cua ban: ");
        scanf("%d", &i);
        switch(i){
            case 1:
                sum = a + b;
                printf("Tong cua %d va %d la %.2f\n", a, b, sum);
                break;
            case 2:
                sum = a - b;
                printf("Hieu cua %d va %d la %.2f\n", a, b, sum);
                break;
            case 3:
                sum = a * b;
                printf("Tich cua %d va %d la %.2f\n", a, b, sum);
                break;
            case 4:
                sum = (float)a / b;
                printf("Thuong cua %d va %d la %.2f\n", a, b, sum);
                break;
            case 5: // Thoát
                printf("Cam on ban da su dung chuong trinh. Tam biet!\n");
                break;
            default:
                printf("Moi ban nhap dung yeu cau!\n");
        }
    } while(i != 5);
    return 0;
}
