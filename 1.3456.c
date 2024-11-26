#include<stdio.h>

// int main(){
//     char name[2];     // for enter your name
//     printf("Enter your name:");
//     scanf("%s",name);
//     printf("Welcome %s to KG coding",name);    
//     return 0;
// }

// int main(){    // to display two no,
//     int num1,num2;
//     printf("enter first no. :");
//     scanf("%i",&num1);
//     printf("enter second no. :");
//     scanf("%i",&num2);
//     printf("the first no. is %i and second is %i",num1,num2);
//     return 0;
// }
// int main(){
//     int myint; //to print sige
//     float myfloat;
//     double mydouble;
//     char mychar;
//     printf("lenth of int is %lu \n",sizeof(myint));
//     printf("lenth of float is %lu \n",sizeof(myfloat));
//     printf("lenth of double is %lu \n",sizeof(mydouble));
//     printf("lenth of char is %lu \n",sizeof(mychar));
//     return 0;
// }

int main(){
    char first_name[10]; //for first last and age print
    char last_name[10];
    int age;
    printf("Enter your first name :");
    scanf("%s",first_name);
    printf("Enter your last name :");
    scanf("%s",last_name);
    printf("Enter your age :");
    scanf("%d",&age);
    printf("Your name is %s %s and age is %d",first_name,last_name,age);
    return 0;
}