#include<stdio.h>
int calculateRemainder(int dividend, int divisor) {
        int quotient =dividend/divisor;
        int product =quotient*divisor;
        int remainder =dividend-product;
        return remainder;
}
int main(){
        int num1, num2;

        printf("Enter the dividend: ");
        scanf("%d", &num1);

        printf("Enter the divisor: ");
        scanf("%d", &num2);

        int remainder = calculateRemainder(num1, num2);

        printf("Remainder: %d\n", remainder);

         return 0;
}