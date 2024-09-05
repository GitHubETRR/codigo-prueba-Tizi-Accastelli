#include <stdio.h>

int main()
{
    int años, dias;
    printf("Bienvenido al programa el cual pregunta tu edad actual y calcula tus dias vividos \n");
    printf("ingrese su edad actual, asi calculare sus dias vividos \n");
    scanf("%d", &años);
    dias=años*365;
    printf("sus dias son %d", dias);
    return 0;
}
