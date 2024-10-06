#include <stdio.h>
#include <math.h>
int main()
{
    float c, a, b, ang, angc;
    printf("Entrer la dimension de l'un des cotes connus: ");
    scanf("%f", &a);
    while (a <= 0) {
        printf("Entrer la dimension de l'un des cotes connus: ");
        scanf("%f", &a);
    }
    printf("Entrer la dimension de l'autre  cotes connus: ");
    scanf("%f", &b);
    while (b <= 0) {
        printf("Entrer la dimension de l'autre  cotes connus: ");
        scanf("%f", &b);
    }
    printf("Entrer la valeur de l'angle existant entre les deux cotes connus: ");
    scanf("%f", &ang);
    while (ang <= 0) {
        printf("Entrer la valeur de l'angle existant entre les deux cotes connus en degre: ");
        scanf("%f", &ang);
    }
        angc = ang * 3.14 / 180;
        c = sqrt(a * a + b * b - 2 * a * b * cos(angc));
        printf("La dimension du cote manquant est %f", c);
    
    return 0;
}