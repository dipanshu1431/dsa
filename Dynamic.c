    //WAP in c to store in inte an array using dynamic memory locution 
#include <stdio.h>
#include<stdlib.h>
int main(){
    int *p;
    int size=6;
    p = (int *)calloc(size, sizeof(int));
    for (int i = 0; i < size; i++)
    {
        printf("Enter element");
        scanf("%d",(p+i));

    }
    for (int i = 0; i < size; i++)
    {
        printf("%d",*(p+i));
    }
    
    

    return 0;
}