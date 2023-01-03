#include<stdio.h>

int main()
{
    int i,j;
    for(i=1;i<6;i++)
        {
            for(j=1;j<6;j++)
            {
                if((i==1)&&(j>5/2)||(i==3)||((i==5)&&(j<=5/2))||
                ((j==1)&&(i<=5/2))||(j==3)||((j==5)&&(i>5/2)))
                    printf("* ");

                else
                    printf("  ");

            }
            printf("\n");

        }
    return 0;
}
