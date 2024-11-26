#include<stdio.h>

// int main(){   //fubinacci series
//     int x=0,y=1,z=0;
//     int n;
//     printf("enter no:");
//     scanf("%d",&n);
//     while(z<=n)
//     {
//         printf("%d\t",z);
//         x=y;
//         y=z;
//         z=x+y;   
//     }  
//     return 0;
// };

// int main(){    //armstrong
//     int arm,num,originalnum,total=0;
//     printf("enter no:");
//     scanf("%d",&num);
//     originalnum=num;
//     while (originalnum!=0)
//     {
//         arm=originalnum%10;
//         total += arm * arm * arm;
//         originalnum/=10;
//     }
//     if (num==total)
//     {
//         printf("arm");
//     }
//     else{
//     printf("not arm");
//     }
// return 0;
// };

// int main(){    //palindrome
//     int num,remainder,reversed=0,original;
//     printf("enter a number:");
//     scanf("%d",&num);
//     original=num;
//     while (num!=0)
//     {
//         remainder=num%10;
//         reversed = reversed*10 + remainder;
//         num/=10;
//     }
//     if (original==reversed)
//     {
//         printf("palindrom");
//     }
//     else{printf("not palindrom");}
// return 0;    
// };

int main(){
    int i,j,row;
    printf("enter row no:");
    scanf("%d",&row);
    for (i = 1; i<=row; i++)
    {
        for ( j = 1; j <=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
return 0;
}

// int main(){
//     int i,j,row;
//     printf("enter row no:");
//     scanf("%d",&row);
//     for ( i = row; i>=1; --i)
//     {
//         for ( j = 1; j <=i; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
// return 0;
// };

// int main(){
//     int i,j,rows;
//     printf("enter row no:");
//     scanf("%d",&rows);
//     for (i = 0; i < rows; i++) {   
//         // loop for printing leading whitespaces 
//         for (j = 0; j < 2 * (rows - i) - 1; j++) { 
//             printf(" "); 
//         }  
//         // loop for printing * character 
//         for (int k = 0; k <= i; k++) { 
//             printf("* "); 
//         } 
//         printf("\n"); 
//     } 
//     return 0; 
// };