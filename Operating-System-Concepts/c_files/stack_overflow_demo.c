#include <stdio.h>

int pass = 0;

void foo()
{
    int num[5000]; // 20000 bytes
    printf("foo called %d times\n", ++pass);
    foo();
}

int main()
{
    foo();
}