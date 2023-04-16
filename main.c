#include <stdio.h>

int main(void) {
  int opcion
  do{
  printf("Presione 1 para facturación\n");
  printf("Presione 2 para imprimir la factura\n");
  printf("Presione 3 para salir\n");
  scanf("%d",&opcion);
    switch(opcion){
      case 1:printf("El proceso de facturación\n");
      case 2:printf("Impresion de factura\n");
      case 3:printf("Usted salio\n");
      
      
  }while(opciones!=3);

    
    
  return 0;
}