#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("value  for x and y:") ;
    scanf("%d %d",&x,&y);
    if(x<0 && y<0)
    {
        printf("The coordinate point (%d, %d) lies in the Third quadrant.\n",x,y);
    }
    else if(x<0 && y>0)
    {
        printf("The coordinate point (%d, %d) lies in the Second quadrant.\n",x,y);
    }
    else if(x> 0&& y<0)
    {

        printf("The coordinate point (%d, %d) lies in the Fourth quadrant.\n",x,y);
    }
    else if(x>0 && y>0)
    {
        printf("The coordinate point (%d, %d) lies in the First quadrant.\n",x,y);
    }
    else if(x==0 && y==0)
    {

        printf("The coordinate point (%d, %d) lies in the Origin.\n",x,y);
    }

    return 0;
}
