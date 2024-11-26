#include<stdio.h>

int main(){
    int i = 12;
    int *j = &i;
    int **k = &j;
    printf("%p\n",j);
    printf("%p\n",k);
    printf("value of i = %d\n",*(&i));
    printf("value of i = %d\n",*j);
    printf("value of i = %p",*k);

    return 0;
};