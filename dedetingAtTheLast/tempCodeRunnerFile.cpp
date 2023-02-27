#include <stdio.h>
#include <stdlib.h>
int main()
{

    char *ptr;
    int size = 5;

    //   printf("%d",size);

    ptr = (char *)calloc(size, sizeof(char));
    for (int i = 0; i < size; i++)
    {
        scanf("%c", (ptr + i));
    }

    for (int i = 0; i < size; i++)
    {
        printf("%c", *(ptr + i));
    }

    return 0;
}