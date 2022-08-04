#include <stdio.h>

/*
    7! --> 7 * 6!
               6 * 5!
                   5 * 4!
                       4 * 3!
                           3 * 2!
                               2 * 1!
                                   1
*/

long factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{

    int num;
    long fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    fact = factorial(num);

    printf("Factorial of %d is %ld\n\n", num, fact);
    return 0;
}