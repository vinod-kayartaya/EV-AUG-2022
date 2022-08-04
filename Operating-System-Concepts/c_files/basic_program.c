#include <stdio.h>

int bar()
{
    char name[50] = "Vinod";
    printf("Inside bar(), name is %s and sizeof(name) is %lu\n\n", name, sizeof(name));
    return 0;
}

int foo()
{
    double x = 1.2;
    printf("Inside foo(), x is %lf, and sizeof(x) is %lu\n\n", x, sizeof(x));
    bar();
    return 0;
}

int main()
{
    int num = 120;
    printf("Inside main(), num is %d and sizeof(num) is %lu\n\n", num, sizeof(num));
    foo();
    return 0;
}