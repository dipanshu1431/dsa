#include <stdio.h>
int fibonaci(int n){
    if(n==0||n==1){
        return n;
    }else{
        return fibonaci(n-1)+fibonaci(n-2);
    }
}
int main(void)
{
    int num ;
    printf("Enter the number");
    scanf("%d",&num);
    for (int i = 0; i < num; i++)
    {
        printf("%d \n",fibonaci(i));

    }
    
    
    return 0;
    //WAP in c to store in inte an array using dynamic memory locution 

}

