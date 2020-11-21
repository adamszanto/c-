#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Tartaly festese\n");

    double magas;
    double atmero;

    printf("Milyen magas?\n");
    scanf("%lf", &magas);
    printf("Mennyi az atmeroje?\n");
    scanf("%lf", &atmero);

    double sugar = atmero/2;
    double doboz = (2*sugar*sugar*3.1416 + magas*2*sugar*3.1416) / 2;

    printf("%f doboz festek kell.\n", doboz);

    return 0;
}
