
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    int k = 0;
    int flag = 1;

    printf("Whoohoo! It's a me, Mario! How tall of a pyramid would you like me to jump off of?\n");

    while(flag)
    {
        scanf("%d",&height);
        if(height < 1 || height > 23)
        {
            printf("Whoohoo!  Try again!\n");
            flag = 1;
        }
        else
        {
            flag = 0;
            printf("Yap, here we go!\n");
        }
    }

    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < height - 1 - k; j++)
            printf(" ");
        for(int j = 0; j < i + 2; j++)
            printf("#");
        printf("\n");
        k++;
    }
    return 0;
}
