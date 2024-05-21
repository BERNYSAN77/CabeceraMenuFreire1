/*
el numero perfecto es aquel cuyos factores suman igual que dicho numero incluyendo el 1 pero excluyendo ese número
entero como factor. Por ejemplo, 6 es un número perfecto porque 6 = 1+2+3
fórmula del tiempo de oscilación t = 2*PI* raiz cuadrada(longitud/aceleración gravitacional)

*/
#include <stdio.h>
#include "lecturas.h"
#include "operaciones.h"


int main(void) {
int op;
 do{
 printf("\n*******Menú*****\n");
 printf("1.-Número perfecto\n");
 printf("2.-Hipotenusa\n");
 printf("3. Tiempo de oscilación\n");
 printf("4. Salir\n");


 op = leerEnteroPositivo("\nseleccione una opción: ");
 switch(op){
 case 1:{

 int num1;


 num1 = leerEnteroPositivo("\ningrese un número: ");
 numeroPerfecto(num1);

 }break;

 case 2:{
 float lado1, lado2;


 lado1 = leerFlotantePositivo("\ningrese el lado1: ");


 lado2 = leerFlotantePositivo("\ningrese el lado2: ");
printf("La hipotenusa del triángulo con lado 1 %.2f y lado es %.2f es %.2f",lado1,lado2,hipotenusa(lado1,lado2));
 }break;
 case 3:{
 float longitud, tiempo;


 longitud = leerFlotantePositivo("\ningrese la longitud: ");

 tiempo = tiempoPendulo(longitud);
 printf("El tiempo de oscilación para un longitud de %.2f es %.2f",longitud,tiempo);

 }break;


 }

 }while(op !=4);
return 0;
}
