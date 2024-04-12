#include<stdio.h>
int main(){
        int number,reverse=0;

        printf("Enter a 3-digit number: ");
        scanf("%d", &number);

        //Extracting the digits and forming the reverse number
        reverse +=(number %10)*100;
        number /=10;
        reverse +=(number %10)*10;
        number /=10;
        reverse +=number;

        printf("The reverse number is: %d\n",reverse);

        return 0;
}