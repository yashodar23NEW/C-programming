#include <stdio.h>
#include <stdlib.h>

int main()
{
   int height;
   printf("enter the height");
   scanf("%d",&height);
   if(height<135)
   {

       printf("the person is Dwarf.\n");
   }
   else if ((height >= 150.0) && (height < 165.0))
   {
       printf("the person is average heighted.\n");
   }
   else if((height >= 165.0) && (height <= 195.0))
   {

       printf("the person is taller.\n");
   }
   else
   {
      printf("Abnormal height.\n");

   }

    return 0;
}
