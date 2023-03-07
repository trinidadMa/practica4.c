#include <stdio.h>
#include <math.h>

int main() {

printf("1) determinar si el número es par o impar\n");
printf("2) elevar un numero a una potencia\n");
printf("3) calcular la raiz cuadrada de un numero\n");
printf("4) terminar el programa\n");

int opcion;
scanf("%d",&opcion);
int n,np,potencia;
float operacion,nr,raizcuadrada;
switch(opcion){

case 1:
printf("\t\tdeterminar si el número es par o impar\n");
printf("ingrse un numero :\n");
scanf("%d",&n);
if (n % 2==0){
printf("el numero ingresado es par");
}else
printf("el numero ingresado no es par");
break;

case 2:
printf("elevar un numero a una potencia\n");
printf("ingrese el numero que desee elevar a una potencia :\n");
scanf("%d",&np);
printf("ingrese la potencia :\n");
scanf("%d",&potencia);
operacion=pow(np,potencia);
printf("el numero %d a la potencia %d es %.2f",np,potencia,operacion);
break;

case 3:
printf("\t\t Calcular la raiz cuadrada de un numero\n");
printf("Ingresa el numero que desea calcular su raiz cuadrada :\n");
scanf("%f",&nr);

raizcuadrada=sqrt(nr);
printf("\nLa raiz cuadrada de %.2f es %.2f",nr,raizcuadrada);
break;

case 4:
printf("fin del programa");
break;
default:
printf("la opcion que ingreso no existe,intente con una opcion del menu");
break;
}
}
