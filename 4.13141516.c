#include<stdio.h>

// int main(){
//     int num,check=0;
//     printf("enter a number:");
//     scanf("%d",&num);
//     do
//     {
//         printf("enter a same number:");
//         scanf("%d",&check);
//     } while (num!=check);
//     printf("number matched");
//     return 0;
// };

// int main(){
//     int number,sum=0;
//      do
//     {
//         printf("enter a number to add: ");
//         scanf("%d",&number);
//         sum+=number;
//     } while (number!=0);
//     printf("the sum of all numbers = %d",sum);
// };

// int main(){
//     int number,i,numbers=15;
//     printf("enter table:");
//     scanf("%d",&number);
//     for ( i = 1; i <= 10 ; i++ )
//     {
//         printf("%d x %d = %d\t",number,i,i*number);
//         printf("%d x %d = %d\n",numbers,i,i*numbers);
//     }
//  return 0;   
// };

// int main(){
//     int i,num,prime,flag=0;
//     printf("enter number :");
//     scanf("%d",&num);
//     prime=num/2;
//     for (i = 2; i <= prime; i++)
//     {
//         if (num%i==0)
//         {
//             printf("not prime");
//             flag=1;
//             break;
//         }
//     }
//     if(flag==0)
//     {
//         printf("prime");
//     }
// return 0;    
// };

int main(){
    int number,sum=0;
     do
    {
        printf("enter a number to add: ");
        scanf("%d",&number);
        if (number<0)
        {
            continue;
        }
        sum+=number;
    } 
    while (number!=0);
    printf("the sum of all numbers = %d",sum);
};

// int main(){
//     int num;
//     printf("the range :");
//     scanf("%d",&num);
//     for ( int i = 0; i < num; i++)
//     {
//         if (i%2 != 0)
//         {
//             continue;
//         }printf("%d\n",i);
//     }
// return 0;    
// }

// int main() {
//     int number,square;
//     while (1) {
//         printf("Enter an integer : ");
//         scanf("%d", &number);
//         if(number == -1)
//         {
//             break;
//         }square = number * number;
//         printf("The square of %d is %d\n", number, square);
//     }
//     printf("Goodbye!\n");
//     return 0;
// };
