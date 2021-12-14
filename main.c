#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define DOS 2
#define ZERO 0

//Fibbonacci sus
int fibonacci(int n)
{
  if (n>2)
    return fibonacci(n-1) + fibonacci(n-2);
  else if (n==2)
    return 1;
  else if (n==1)       
    return 1;
  else if (n==0)
    return 0;
}

//Factorial
float facto (float x){
	if (x == 1){
		return 1;
	}
	else {
		return x * facto(x - 1);
	}
}

int main(){
	float x, xx, y, yy, res;
	int selection;
	printf("\033[1mHola y bienvenido\033[0m\nSeleccione la accion que quiera realizar:\n[1]Calcular la distacia de dos puntos\n[2]Calcular la pendiente de dos puntos\n[3]Calcular el punto medio de dos puntos\n[4]Calcular la velocidad de un objeto\n[5]Calcular el factorial de un numero\n[6]Sucesión Fibbonacci\nIngrese una opción:\t");
	scanf("%d", &selection);
	//Distancia
	if(selection == 1){
		printf("Ha seleccionado calcular la distancia de dos puntos\n"); //Aqui empieza el copy-paste
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
				aa = pow(ene, DOS) + pow(eme, DOS);
				res = sqrt(aa);
			printf("la distancia entre ambos puntos es:\t%f\n", res);
	//Pendiente
	}else if(selection == 2){
		printf("Ha seleccionado calcular la pendiente de dos puntos\n");
			printf("Inserte el valor de x1:\t");
				scanf("%f", &x);
			printf("inserte el valor de x2:\t");
				scanf("%f", &xx);
			printf("inserte el valor de y1:\t");
				scanf("%f", &y);
			printf("inserte el valor de y2:\t");
				scanf("%f", &yy);
			printf("La formula para sacar la pendiente de dos puntos es:\tm = (y2 - y1)/(x2 - x1).\n\033[1mSus\033[0mtituido es:\tm = (%f - %f)/(%f - %f)\n", yy, y, xx, x);
			float yl, xl;
			yl = yy - y;
			xl = xx - x;
			res = yl/xl;
			printf("Su respuesta es:\t%f\n", res);
	//Punto medio
	}else if(selection == 3){
		printf("Ha seleccionado calcular el punto medio de dos puntos\n");
			printf("Ingrese el valor de x1:\t");
				scanf("%f", &x);
			printf("Ingrese el valor de x2:\t");
				scanf("%f", &xx);
			printf("Ingrese el valor de y1\t");
				scanf("%f", &y);
			printf("Ingrese el valor de y2:\t");
				scanf("%f", &yy);
			printf("La formula para sacar el punto medio de dos puntos es:\nxm = (x1 + x2)/2\ty\t ym = (y1 + y2)/2\nSustituida es:\txm = (%f + %f)/2\ty\tym = (%f + %f)/2\n", x, xx, y, yy);
			float xxx, yyy;
			xxx = (x + xx) / DOS;
			yyy = (y + yy) / DOS;
			printf("El punto medio es:\t(%f,%f)\n", xxx, yyy);
	//Velocidad
	}else if(selection == 4){
			float dis, tem;
		printf("Ha seleccionado calcular la velocidad de un objeto\n");
			printf("Ingrese el la distancia (km):\t");
				scanf("%f", &dis);
			printf("Ingrese el tiempo que duró (horas):\t");
				scanf("%f", &tem);
			res = dis/tem;
			printf("%fkm/h\n", res);
	//Factorial
	}else if(selection == 5){
		printf("Ha seleccionado calcular el factorial de un numero\n");
			printf("Para calcular el factorial de un numero se debe de multiplicar el numero por todos los numeros que lo anteceden hasta el numero 1 por ejemplo, usando el numero 3:\n3! = 3 * 2 * 1\n");
			printf("Ingrese un valor:\t");
				float val, rec;
				scanf("%f", &val);
				rec = val;
			if (val > 7){
				printf("Escribiria toda la operacion a hacer pero la operacion es muy larga\n");
			}else{
				while (val >= 1){
					if (val == 1){
						printf(" %f\n", val);
						val--;
					}else {
						printf(" %f *", val);
						val--;
					}

				}
			}
			val = rec;
			printf("El factorial de %f es %f\n", val, facto(val));
	//Fibbonacci
	}else if (selection == 6){
		int val, num;
		printf("Ha seleccionado hacer la sucesion de fibonacci\ningrese cuantos digitos escribir:\t");
		scanf("%d", &val);
		printf("La sucesión es:\n");
		  for (num=0; num<val; num++){
      			printf("%d ", fibonacci(num));
    			}
	}else{
		printf("No insertaste una opcion valida\n");
	}
		printf("Gracias por usar\n");
	return 0;
}
