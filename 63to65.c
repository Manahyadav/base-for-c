#include<stdio.h>
#include <limits.h>

// Q63
// int main(){
// long long distance;
// printf("enter the km :");
// scanf("%lld",&distance);
// long miles = distance * 0.62137;
// printf("the km %lld is %ld in miles",distance,miles);
//     return 0;
// }


//Q64
// int main(){
//     long long num,sum = 1;
//     printf("enter the no. you want factorial :");
//     scanf("%lld",&num);
//     for(int i = 1; i <= num;i++){
//         sum = i*sum;
//     }
//     printf("%lld",sum);
//     return 0;
// }

//Q65
int main(){
    unsigned int sign = 2147483648;
    printf("%d\n",sign);
    int next = 2147483647;
    printf("%d\n",next);
    return 0;
}




// int main() {
//     // Initialize an unsigned int to its maximum possible value
//     unsigned int u_max = UINT_MAX;
//     // Initialize an int to a negative number
//     int i_negative = -1;

//     // Print the initial values
//     printf("Initial unsigned int value: %u\n", u_max);
//     printf("Initial int value: %d\n", i_negative);

//     // Add 1 to both
//     u_max += 1;
//     i_negative += 1;

//     // Print the results after addition
//     printf("Unsigned int after adding 1: %u\n", u_max);
//     printf("Int after adding 1: %d\n", i_negative);

//     return 0;
// }
