#include <stdio.h>
#include <stdlib.h>

char *echo1()
{
    char ptr[200]; // array of 200 bytes; ptr is the address of its first byte
    printf("Enter some text: ");
    gets(ptr);
    printf("YOU ENTERED: %s\n\n", ptr);
    return ptr; // never return an invalidated pointer; causes dangling pointer
}

void echo()
{
    char *ptr;
    ptr = malloc(200);
    printf("Enter some text: ");
    gets(ptr);
    printf("YOU ENTERED: %s\n\n", ptr);
    free(ptr); // do this to avoid memory leak

    strcpy(ptr, "this is wrong!");
}

int main()
{
    char choice;
    do
    {

        // echo();
        char *ptr = echo1();
        strcpy(ptr, "this is also wrong!"); // ptr here is a dangling pointer

        printf("Do you wish to try again? (y/n)");
        scanf("%c", &choice);

    } while (choice == 'y');
}