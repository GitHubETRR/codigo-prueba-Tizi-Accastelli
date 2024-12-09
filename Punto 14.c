#include <stdio.h>

int main()
{
    float angx, anga, angb;
    printf("Bienvenidos al programa para calcular el tercer angulo interno de un triangulo \n");
    printf("ahora ingrese los angulos a y b para calcular el restante \n");
    scanf("%f %f", &anga, &angb);
    angx=180-(anga+angb);
    printf("su angulo restante es de %f", angx);
    return 0;
}
