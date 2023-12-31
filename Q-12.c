#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,phy,chem,ca,total;
    char nm[20] ,div[10];
    float per;
    printf("enter roll number:");
    scanf("%d",&r);

    printf("enter your name:");
    scanf("%s",nm);
    printf("enter marks of physics,chemistry and computer application");
    scanf("%d %d %d",&phy,&chem,&ca);

    total=phy+chem+ca;
    per=total/3.0;
    if(per >=60)
    {

        strcpy(div, "First");
    }
    else if(per<60 && per>=48)
    {

        strcpy(div, "Second");
    }
    else if(per<48 && per>=36)
    {
        strcpy(div, "Pass");
    }
    else{
        strcpy(div, "Fail");
    }

    printf("\nRoll No : %d\nName of Student : %s\n", r, nm);
    printf("Marks in Physics : %d\nMarks in Chemistry : %d\nMarks in Computer Application : %d\n", phy, chem, ca);
    printf("Total Marks = %d\nPercentage = %5.2f\nDivision = %s\n", total, per, div);

    return 0;
}
