#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c,d;
   float x1,x2;
   printf("enter values for a,b,c:");
   scanf("%d %d %d",&a,&b,&c);
   d=b*b-4*a*c;
   if(d==0)
   {
       printf("Both roots are equal.\n");
      x1=-b/(2.0*a);
      x2=x1;
      printf("First  Root Root 1 = %f\n", x1);
      printf("First  Root Root 2 = %f\n", x2);

   }
   else if(d>0)
   {
        printf("Both roots are real and different.\n");
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("First  Root Root 1 = %f\n", x1);
        printf("First  Root Root2 = %f\n", x2) ;


   }
   else{
      printf("Roots are imaginary;\nNo Solution. \n");
   }


    return 0;
}
