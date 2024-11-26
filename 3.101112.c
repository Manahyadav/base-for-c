#include<stdio.h>

// int main(){
//     int number1;
//     printf("enter your no :");
//     scanf("%d",&number1);
//     (number1 > 80) ? printf("high") :(number1 <= 80 && number1 >=50) ? printf("moderate") :printf("low");
//     return 0;
// };

// int main(){
//     int month;
//     printf("enter no of month :");
//     scanf("%d",&month);
//     switch (month)
//     {
//     case 1: printf("January");
//         break;
//     case 2: printf("feburary");
//         break;
//     case 3: printf("march");
//         break;
//     case 4: printf("april");
//         break;
//     case 5: printf("may");
//         break;
//     case 6: printf("june");
//         break;
//     case 7: printf("july");
//         break;
//     case 8: printf("august");
//         break;
//     case 9: printf("septmber");
//         break;
//     case 10: printf("october");
//         break;
//     case 11: printf("november");
//         break;
//     case 12: printf("december");
//         break;
//     default:
//         break;
//     }
//     return 0;
// }


int main(){
    int num1,num2;
    int operation;
    printf("enter 2 no:");
    scanf("%d %d",&num1,&num2);
    printf("which operation to choice :\n 1 addition \n 2 substration \n 3 multiply \n 4 division");
    scanf("%d",&operation);
    switch (operation)
    {
    case 1: printf("%d",num1+num2);
        break;
    case 2: printf("%d",num1-num2);
        break;
    case 3: printf("%d",num1*num2);
        break;
    case 4: printf("%d",num1/num2);
        break;
    default:
        break;    
    }
return 0;
}