#include<stdio.h>
#define PI 3.14159
// int main(){
//     int side;
//     printf("enter the lenght of square :");
//     scanf("%d",&side);
//     printf("the area of square is %d",side*side);
//     return 0;
// };

// int main(){
//     float radius;
//     printf("enter the radius of circle :");
//     scanf("%f",&radius);
//     printf("the circumference of circle is %f",2*PI*radius);
// return 0;    
// }

// int main(){
//     float radius;
//     printf("enter the radius of circle :");
//     scanf("%f",&radius);
//     printf("the area of circle is %f",PI*radius*radius);
// return 0;    
// }

int main(){
    int int1,int2,int3;
    printf("x =");
    scanf("%d ",&int1);
    printf("\n");
    printf("y =");
    scanf("%d ",&int2);
    int3 = int1;
    int1 = int2;
    int2 = int3;
    printf("the x = %d  and y = %d",int1,int2);    
    return 0;
}