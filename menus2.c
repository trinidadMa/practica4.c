#include <stdio.h>
#include <math.h>

int main() {
printf("1) calcular el area de un triangulo\n");
printf("2) calcular el perimetro de un triangulo\n");
printf("3) conocer el tipo de triangulo que se forma\n");
printf("4) Terminar el programa\n");

int opcion;
scanf("%d",&opcion);
float base,altura,operacion,valora,valorb,valorc,perimetro,lado1,lado2,lado3;
switch(opcion){

case 1:
printf("calcular el area de un triangulo\n");
printf("ingrse la base del triangulo :\n");
scanf("%f",&base);
printf("Ingrese altura del triangulo");
scanf("%f",&altura);

operacion=base*altura/2;
printf("la area es %.2f",operacion);
break;
case 2:
printf("calcular el perimetro de un triangulo\n");
printf("ingrese valor de a :\n");
scanf("%f",&valora);
printf("ingrese el valor de b :\n");
scanf("%f",&valorb);
printf("ingrese el valor de c");
scanf("%f",&valorc);

perimetro=valora+valorb+valorc;
printf("el perimetro es %.2f",perimetro);
break;
case 3:
printf("saber el tipo de triangulo que se forma\n");
printf("\ninsertar lado 1:");
scanf("%f",&lado1);
printf("insertar lado 2:");
scanf("%f",&lado2);
printf("insertar lado 3:");
scanf("%f",&lado3);

if((lado1+lado2>lado3) && (lado1+lado3>lado2) && (lado2+lado3>lado1)){
if(lado1==lado2 && lado2==lado3 && lado1==lado3){
printf("\n=>es un triangulo equilatero<=\n");
}
else if(lado1==lado2 || lado1==lado3 || lado2==lado3){
printf("\n=>es un triangulo isoceles<=\n");
}else
printf("\n=>es un triangulo escaleno<=\n");
}
else{
printf("\n=>no es triangulo<=\n");
}
break;
case 4:
printf("fin del programa");
break;
default:
printf("la opcion que ingreso no existe,intentelo con una opcion del menu");
break;
}
}
