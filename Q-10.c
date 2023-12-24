#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,p,c,t,mp;
    printf("Enter your maths marks");
    scanf("%d",&m);

    printf("Enter your physics marks");
    scanf("%d",&p);

    printf("Enter your Chemistry marks");
    scanf("%d",&c);

    if (m >= 65)
        if (p >= 55)
            if (c >= 50)
                if ((m + p + c) >= 190 || (m + p) >= 140)
                    printf("The candidate is eligible for admission.\n");
                else
                    printf("The candidate is not eligible.\n");
            else
                printf("The candidate is not eligible.\n");
        else
            printf("The candidate is not eligible.\n");
    else
        printf("The candidate is not eligible.\n");


   return 0;
}
