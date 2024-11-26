#include<stdio.h>

// int main(){
//     int table=1,num;
//     printf("enter table:");
//     scanf("%d",&num);
//     while(table<=10){
//         printf("%d x %d = %d\n",num,table,table *num);
//         table++;
//     }
// return 0;
// }    

// int main() {
//     int N, i = 1, total_sum = 0;
//     printf("Enter a positive integer N: ");
//     scanf("%d", &N);
//     while (i <= N) {
//         if (i % 2 != 0) {
//             total_sum += i;
//         }
//         i++;
//     }
//     printf("Sum of odd numbers from 1 to %d is: %d\n", N, total_sum);
//     return 0;
// }

// int main(){
//     int i=1,num,total=1;
//     printf("enter number :");
//     scanf("%d",&num);
//     while (i<=num)
//     {
//         total=total*i;
//         i++;
//     }
//     printf("factorial of %d is = %d",num,total);
//     return 0;
// }

// int main(){
//     int number,digit,sum=0;
//     printf("enter the digit :");
//     scanf("%d",&number);
//     int value = number;
//     while (number>0)
//     {
//         digit = number%10;
//         sum+=digit;
//         number/=10;
//         }
//     printf("sum of %d is %d",value,sum);
//     return 0;
// }

// int main(){ //Lcm
//     int num1,num2,max;
//     printf("enter number 1st :");
//     scanf("%d",&num1);
//     printf("enter number 2nd :");
//     scanf("%d",&num2);
//     max =(num1>num2) ? num1 :num2 ;
//     while(1){
//         if ((max % num1 ==0) && (max % num2 ==0))
//         {
//             printf("the lcm of %d and %d = %d",num1,num2,max);
//             break;
//         }
//         ++max;
//     } 
//     return 0;
// }

// int main(){ //hcf
//     int num1,num2,max,i=1;
//     printf("enter number 1st :");
//     scanf("%d",&num1);
//     printf("enter number 2nd :");
//     scanf("%d",&num2);
//     //max =(num1>num2) ? num1 :num2 ;
//     while(i<=num1 && i <= num2){
//         if (num1%i ==0 && num2%i ==0)
//         {
//             max = i;
//         }
//         ++i;
//     }
//         printf("hcf of %d and %d = %d",num1,num2,max);
//     return 0;
// }

// int main(){    //prime
// int n,i,m=0,flag=0;    
// printf("Enter the number to check prime:");    
// scanf("%d",&n);    
// m=n/2;    
// for(i=2;i<=m;i++)    
// {    
// if(n%i==0)    
// {    
// printf("Number is not prime");    
// flag=1;    
// break;    
// }    
// }    
// if(flag==0)    
// printf("Number is prime");     
// return 0;  
//  }    

int main(){ //reverse
    int number,remainder=0;
    printf("enter no :");
    scanf("%d",&number);
    int copy = number;
while (number!=0)
    {
    int i=number%10;
    remainder = remainder*10+i;
    number=number/10;
    }
    printf("the reverese of %d = %d",copy,remainder);
return 0;    
}