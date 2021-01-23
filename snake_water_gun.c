#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int snakeWaterGun(char you, char comp)
{
    if (you == comp)
    {
        return 0;
    }

    if (you == 's' && comp == 'g')
    {
        return -1;
    }
    else if (you == 'g' && comp == 's')
    {
        return 1;
    }
    if (you == 'w' && comp == 's')
    {
        return -1;
    }
    else if (you == 's' && comp == 'w')
    {
        return 1;
    }
    if (you == 'g' && comp == 'w')
    {
        return -1;
    }
    else if (you == 'w' && comp == 'g')
    {
        return 1;
    }
}

int main()
{
    char you, comp;

    srand(time(0));
    int number = rand() % 100 + 1;
    if (number < 33)
    {
        comp = 's';
    }

    else if (number > 33 && number < 66)
    {
        comp = 'w';
    }

    else
    {
        comp = 'g';
    }

    printf("Enter G for gun S for snake and W for water\n");
    scanf("%s", &you);

    int result = snakeWaterGun(you, comp);
    printf("You chose %c and computer choose %c\n", you, comp);
    if (result == 0)
    {
        printf("DRAW!!\n");
    }
    else if (result == 1)
    {
        printf("YOU WIN\n");
    }
    else
    {
        printf("COMPUTER WON");
    }
    return 0;
}
