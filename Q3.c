#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1;
   printf("enter a number:");
   scanf("%d",&num1);
   if(num1>=0)
   {

       printf("%d is a positive number",num1);
   }
   else{
    printf("%d is a negative number",num1);
   }
    return 0;
}
