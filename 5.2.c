#include <stdio.h>

void swap();

int fact(int x);
int facti(int x);
int main()
{
    int x = 4;
    int y = 6;
    printf("x:%d ,y:%d\n", x, y);
    swap(x, y);
    printf("x:%d, y:%d\n", x, y);

    int result = fact(4);
    printf("the result of factorial is %d\n",result);

    int res = facti(5);
    printf("by recurrsion %d",res);
   
    return 0;
}

void swap(int first, int second)
{
    int temp = first;
    first = second;
    second = temp;
    printf("x : %d, y : %d\n", first, second);
}


int fact(int x){
    int result = 1;
    for (int i = 2; i <= x; i++)
    {
        result *= i;
    }
    return result;
}

int facti(int num){
    if (num ==0){
        return 1;
    }
    return num * facti(num - 1);
}
