#include<stdio.h>

// int main(){ //simple intrest
//     float principle,rate,time;
//     printf("enter the principle amount:");
//     scanf("%f",&principle);
//     printf("enter the rate:");
//     scanf("%f",&rate);
//     printf("enter the time:");
//     scanf("%f",&time);
//     float simple_interest = (principle * rate *time)/100;
//     printf("the simple intrest is %f",simple_interest);
//     return 0;
// };

// int main(){ //simple intrest
//     float principle,rate,time;
//     printf("enter the principle amount:");
//     scanf("%f",&principle);
//     printf("enter the rate:");
//     scanf("%f",&rate);
//     printf("enter the time:");
//     scanf("%f",&time);
//     float compound_interest = principle*(1 + rate/100)*time;
//     printf("the compound intrest is %f",compound_interest);
//     return 0;
// };

int main(){
    int fahrenheit;
    printf("enter the temperature in Fahrenheit:");
    scanf("%d",&fahrenheit);
    int celsius = (fahrenheit - 32) * 5/9;
    printf("the temperature in celsius is %d",celsius);
    return 0;
}