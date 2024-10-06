#include <stdio.h>
#include <stdlib.h>
int main()
{
    float x, y, z;
    printf("Entrer la valeur du premier cote: ");
    scanf("%f", &x);
    while (x <= 0) {
        printf("Entrer la valeur du premier cote: ");
        scanf("%f", &x);
    }
    printf("Entrer la valeur du duxieme cote: ");
    scanf("%f", &y);
    while (y <= 0) {
        printf("Entrer la valeur du duxieme cote: ");
        scanf("%f", &y);
    }
    printf("Entrer la valeur du troisieme cote: ");
    scanf("%f", &z);
    while (z <= 0) {
        printf("Entrer la valeur du troisieme cote: ");
        scanf("%f", &z);
    }

    if (x == y && x == z) {
        printf("Le triangle x=%f, y=%f, z=%f est equilaterale", x, y, z);
    }
    if (x == y && x != z){
        printf("Le triangle x = % f, y = % f, z = % f est isocele", x, y, z);
    }
    if (x != y && y != z && x != z) {
        printf("Le triangle x = % f, y = % f, z = % f est quelconque", x, y, z);
    }
    
    return 0;
}