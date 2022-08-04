#include <stdio.h>
#include <stdlib.h>

int main()
{

    char *name;
    int i;
    int memory_required = 100;
    name = malloc(memory_required);
    name[0] = 65;
    name[1] = 66;
    name[2] = 67;

    printf("size of name is %lu\n", sizeof(name));
    printf("name is *%s*\n", name);

    for (i = 0; i < 15; i++)
    {
        printf("%d, ", name[i]);
    }
    printf("\n\n");
    free(name);
    return 0;
}