#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Pick a number\n");
    int number;
    scanf("%d", &number);

    for(int i = 1; i <= number; i++)
    {
        if(i % 5 == 0 && i % 3 == 0)
        {
            printf("Fizz buzz\n");
        }
        else if(i % 3 == 0)
        {
            printf("Fizz\n");
        }
        else if(i % 5 == 0)
        {
            printf("Buzz\n");
        }
        else
        {
            printf("%d\n", i);
        }
    }

    return 0;

}
