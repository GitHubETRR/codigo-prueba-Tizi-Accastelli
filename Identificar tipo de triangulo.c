#include <stdio.h>
int main() {
    float lado1, lado2, lado3;
    printf("Ingresa el primer lado del triangulo:");
    scanf("%f", &lado1);
    printf("Ingresa el segundo lado del triangulo:");
    scanf("%f", &lado2);
    printf("Ingresa el tercer lado del triangulo:");
    scanf("%f", &lado3);
    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
        if (lado1 == lado2 && lado2 == lado3) {
            printf("El triangulo es equilatero.\n");
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("El triangulo es isosceles.\n");
        } else {
            printf("El triangulo es escaleno.\n");
        }
    } else {
        printf("Los lados no forman un triangulo.\n");
    }
    return 0;
}
