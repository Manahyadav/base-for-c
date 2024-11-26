#include<stdio.h>

// int main(){
//     int num;
//     printf("enter no :");
//     scanf("%d",&num);
//     if(num>0){
//         printf("positive");
//     }
//     else if (num == 0)
//     {printf("zero");}
//     else{printf("negative");}
//     return 0;
// };

// int main(){
//     int num,num2;
//     printf("enter no :");
//     scanf("%d",&num);
//     num2 = num%2;
//     if(num2==0){printf("even");}
//     else{printf("odd");}
//     return 0;
// };

// int main(){
//     int n1,n2,n3;
//     printf("enter 3 no :");
//     scanf("%d %d %d",&n1,&n2,&n3);
//     if(n1 > n2 && n1 > n3){
//         printf("%d is biggest",n1);
//     }
//     if(n2 > n1 && n2 > n3){
//         printf("%d is biggest",n2);
//     }
//     else{
//         printf("%d is biggest",n3);
//     }
//     return 0;
// };

int main(){
    int year;
    printf("enter year:");
    scanf("%d",&year);
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            // If year is divisible by 400, then it's a leap year
            if (year % 400 == 0)
                printf("%d is a leap year.\n", year);
            else
                printf("%d is not a leap year.\n", year);
        } else {
            // If year is not divisible by 100 but divisible by 4, it's a leap year
            printf("%d is a leap year.\n", year);
        }
    } else {
        // If year is not divisible by 4, then it's not a leap year
        printf("%d is not a leap year.\n", year);
    }
    // if((year%4 == 0 && year % 100 == 0) && (year % 400 == 0)){
    //     printf("leap year");
    // }
    // else{
    //     printf("not leap year");
    // }
    return 0;
}