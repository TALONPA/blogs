#include <stdio.h>
#include <math.h>
int main()
{
	int f;
	float l, t, pr, sr, r, pc, sc, c1, c2, c3, st, pt, pt2;
	printf("Tapez 1-rectangle 2-cercle -triangle");
	scanf("%d", &f);
		if (f == 1) {
			printf("Entrer la  1ere dimension du rectangle: ");
			scanf("%f", &l);
			while (l <= 0) {
				printf("Entrer la 2eme dimension  du rectangle: ");
				scanf("%f", &l);
			}
			printf("Entrer la  premiere dimension  du rectangle: ");
			scanf("%f", &t);
			while (t <= 0) {
				printf("Entrer la deuxieme dimension  du rectangle: ");
				scanf("%f", &t);
			}
			pr = 2 * l + 2 * t;
			sr = l * t;
			printf("Le perimetre de ce rectangle est %f et sa surface est %f ", pr, sr);
		}else if (f == 2) {
			printf("Enter la dimension du rayon de ce cercle: ");
			scanf("%f", &r);
			while (r <= 0) {
				printf("Enter la dimension du rayon de ce cercle: ");
				scanf("%f", &r);
			}
			pc = 2 * 3.14 * r;
			sc = 3.14 * r * r;
			printf("Le perimetre de ce cercle est %f et sa surface est %f ", pc, sc);
		}else if (f == 3) {
			printf("Enter la dimension du 1er cote de ce triangle: ");
			scanf("%f", &c1);
			while (c1 <= 0) {
				printf("Enter la dimension du 1er cote de ce triangle : ");
				scanf("%f", &c1);
			}
			printf("Enter la dimension du 2eme cote de ce triangle: ");
			scanf("%f", &c2);
			while (c1 <= 0) {
				printf("Enter la dimension du 2eme cote de ce triangle : ");
				scanf("%f", &c2);
			}
			printf("Enter la dimension du 3eme cote de ce triangle: ");
			scanf("%f", &c3);
			while (c3 <= 0) {
				printf("Enter la dimension du 3eme cote de ce triangle : ");
				scanf("%f", &c3);
			}
			pt = c1 + c2 + c3;
			printf("Le perimetre de ce triangle est %f", pt);
			pt2 = pt / 2;
			st = sqrt(pt2 * (pt2 - c1) * (pt2 - c2) * (pt2 - c3));
			printf("La surface de triangle est %f", st);
		}else {
			printf("Veuillez essayer avec un nombre entre 1 et 3");
		}
	return 0;
}