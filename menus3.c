#include <stdio.h>
int main ()
{
int valor, palo, menu;

printf ("ingrese el valor de la carta :\n");
scanf ("%d", &valor);
printf ("ingrese el palo de la carta :\n");
printf ("\n1) =>trebol\n2) =>picas\n3) =>corazon\n4) =>diamante\n:");
scanf ("%d", &palo);

printf ("menu");
printf ("\n1) indicar si la carta pertenece a una baraja\n");
printf ("2) indicar el valor de la carta de la forma\n");
printf ("3) indicar el palo de la carta\n");
printf ("4) terminar el programa\n");
scanf ("%d", &menu);

switch (menu)
{

case 1:
printf ("indica si la carta pertenece a una baraja\n");
if (valor >= 1 && valor <= 13)
{
printf ("la carta pertenece a la baraja");
}
else
printf ("la carta no pertenece a la baraja");
break;
case 2:
printf ("Indicar el valor de la carta de la forma\n");
if (valor == 2 || valor == 3 || valor == 4 || valor == 5 || valor == 6
|| valor == 7 || valor == 8 || valor == 9 || valor == 10)
printf ("el valor de la carta es => %d", valor);
else if (valor == 1)
printf ("el valor de la carta es => A");
else
{
if (valor == 13)
printf ("el valor de la carta es => K");
else if (valor == 12)
printf ("el valor de la carta es => Q");
else if (valor == 11)
printf ("el valor de la carta es => J");
else
printf ("valor de la carta no existente");
}
break;
case 3:
printf ("indicar el palo de la carta\n");
if (palo == 1)
printf ("el palo de la carta es trebol\n");
else if (palo == 2)
printf ("el palo de la carta es picas\n");
else if (palo == 3)
printf ("el palo de la carta es corazon\n");
else if (palo == 4)
printf ("el palo de las cartas es diamante");
else
printf ("el palo no existe");
break;
case 4:
printf ("fin del programa");
break;
default:
printf
("\n la opcion no existe,intentelo con una opcion del menu");
break;
}
return 0;
}
