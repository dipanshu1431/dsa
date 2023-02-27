// Online C++ compiler to run C++ program online
#include <stdio.h>
#include<math.h>

int main()
{

// to find largest and smallest number in an 1d array.



    int rows, coef = 1, space, i, j;
    printf("\nEnter the number of rows :");
    scanf("%D", &rows);
    printf("\n");

    for (i = 0; i < rows; i++)
    {
        for (space = 1; space <= rows - i; space++)
            printf("");
   

        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;

            printf("%4d", coef);
        }
        printf("\n\n");
    }

    return 0;
}
