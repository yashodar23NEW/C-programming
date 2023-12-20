#include <stdio.h>
#include <stdlib.h>

int main()
{
   int age;
   printf("enter your age");
   scanf("%d",&age);
   if(age<18)
   {

       printf("Sorry, You are not eligible to caste your vote.\n");
   }
   else{
    printf("Congratulations!, You are  eligible to caste your vote.\n");
   }

    return 0;
}
