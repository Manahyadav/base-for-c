#include <stdio.h>

int main()
{

    // Q1
    //  int i=3;
    //  int * ptr = &i;
    //  printf("%d",*ptr);

    // Q2
    //  int a = 23;
    //  int *ptr = &a;
    //  printf("%d\n",a);
    //  *ptr = 55;
    //  printf("%d\n",a);

    // Q3
    //  char *ptr;
    //  char name;
    //  ptr = &name;
    //  printf("enter the char :");
    //  scanf("%c", ptr);
    //  printf("char you entered %c",*ptr);

    // Q4
    void minmax(int *a, int *b, int *min, int *max) {
    if (*a < *b) {
        *min = *a;
        *max = *b;
    } else {
        *min = *b;
        *max = *a;
    }
}

int num1, num2;
    int min, max;

    // Test case 1
    num1 = 10;
    num2 = 20;
    minmax(&num1, &num2, &min, &max);
    printf("Test Case 1: num1 = %d, num2 = %d -> min = %d, max = %d\n", num1, num2, min, max);

    return 0;
}
