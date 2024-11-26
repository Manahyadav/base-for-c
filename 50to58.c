#include <stdio.h>
#include <time.h>

void greet();                         // Q1
int sum(int, int, int, int);          // Q2
int square(int);                      // Q3
void print_date();                    // Q4
float max(float, float);              // Q5
void increment(int);                  // Q6
int get_avg(int, int, int, int, int); // Q7
int fibonacci(int n);                      // Q8

int isPalindrome(int num, int temp);
int main()
{
    // greet();
    // int x = sum(1, 2, 3, 4);
    // printf("the sum of 4 is = %d\n", x);

    // printf("the square is %d\n", square(4));
    // print_date();
    // printf("%f\n", max(2.6, 5.4));
    // int incre = 5;
    // increment(incre);
    // printf("without function increment %d\n", incre);

    // printf("%d", get_avg(2, 3, 60, 5, 5));
    // int n;
    // printf("enter the number till to print in fibonacci series ");
    // scanf("%d", &n);
    //  printf("Fibonacci series up to %d terms:\n", n);
    // for (int i = 0; i < n; i++) {
    //     printf("%d ", fibonacci(i));
    // }



    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is a palindrome
    if (number == isPalindrome(number, 0))
        printf("%d is a palindrome.\n", number);
    else
        printf("%d is not a palindrome.\n", number);

    return 0;
};

// void greet()
// {
//     printf("Hello World\n");
// }

// int sum(int a, int b, int c, int d)
// {
//     int x = a + b + c + d;
//     return x;
// }

// int square(int a)
// {
//     int b = a * a;
//     return b;
// }

// void print_date()
// {
//     // Get the current time
//     time_t t = time(NULL);

//     // Convert to local time format
//     struct tm *current_time = localtime(&t);

//     // Print only the current date in YYYY-MM-DD format
//     printf("the date is = %d-%02d-%02d\n",
//            current_time->tm_year + 1900,
//            current_time->tm_mon + 1,
//            current_time->tm_mday);
// }

// float max(float a, float b)
// {
//     if (a > b)
//     {
//         return a;
//     }
//     else
//     {
//         return b;
//     }
// }

// void increment(int a)
// {
//     printf("in function increment %d\n", ++a);
// }

// int get_avg(int a, int b, int c, int d, int e)
// {
//     return (a + b + c + d + e) / 5;
// }

// int fibonacci(int n) {
//     if (n <= 1) {
//         return n;
//     }
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }

int isPalindrome(int num, int temp) {
    // Base case: if the number is reduced to 0, return the reversed number
    if (num == 0)
        return temp;

    // Recursive case: build the reversed number
    temp = isPalindrome(num / 10, temp * 10 + num % 10);

    // Compare the original number with the reversed number
    return temp;
}