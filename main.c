#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	float x, xx, y, yy, res;
	printf("inserte el valor de x1:\t");
	scanf("%f", &x);
	printf("inserte el valor de x2:\t");
	scanf("%f", &xx);
	printf("inserte el valor de y1:\t");
	scanf("%f", &y);
	printf("inserte el valor de y2:\t");
	scanf("%f", &yy);
	printf("La formula es: dab =  √(x2 - x1)² + (y2 - y1)²\nsustituida es:\t\033[1m√(%f - %f)² + (%f - %f)²\033[0m\n", xx, x, yy, y);
	float ene = xx - x, eme = yy - y, aa; // esto es un desmadre ayuda
	aa = pow(ene, 2) + pow(eme, 2);
	res = sqrt(aa);
	printf("la distancia entre ambos puntos es:\t%f\n", res);
	return 0;
}
