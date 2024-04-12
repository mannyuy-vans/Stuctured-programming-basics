#include<stdio.h>
int main(){
        int number, sum = 0;
        printf("Enter a 3-digit number: ");
        scanf("%d", &number);
        //Extracting the digits and adding them to the sum
        sum += number % 10;
        //Extracting the units digit
        sum /= 10;
        //Remove the units digit
        sum += number % 10;
        //Extract the tens digit
        sum /= 10;
        //Remove the tens digit
        sum += number % 10;
        //Extract the hundreds digits
        printf("The sum of the digits is: %d\n", sum);
        return 0;
}