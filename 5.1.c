#include<stdio.h>

void count_to_100();
int sum(int,int);

int main(){
    count_to_100();
    int add=sum(5,6);
    printf("%d",add);
return 0;
};

void count_to_100(){
    for(int i=1;i<=100;i++){
        printf("%d\n",i);
    }
}

int sum(int first,int second){
    int add = first + second;
    return add;
}