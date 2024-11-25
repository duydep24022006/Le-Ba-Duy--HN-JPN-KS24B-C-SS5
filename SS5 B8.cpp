#include <stdio.h>

int main() {
    unsigned int a, b, j;

    printf("Moi ban nhap so a: ");
    scanf("%u", &a);
    printf("Moi ban nhap so b: ");
    scanf("%u", &b);

    if (a == 0 || b == 0) {
        printf("UCLN cua %u va %u la: %u\n", a, b, (a == 0) ? b : a);
        return 0;
    }
    int num1=a, num2=b; 
    
// thuat toan Euclid
    while (num1 != num2) {
        if (num1 > num2) {
            j = num1 - num2;
            num1 = j;
        } else {
            j = num2 - num1;
            num2 = j;
        }
    }
    int BCNN = a * b / num1;  
    
    printf("BCLN cua hai so da nhap la: %d\n", BCNN);
    return 0;
}

