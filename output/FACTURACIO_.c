#include <stdio.h>

int main() {
    
    char nombre[100];
    char cedula[15];
    int cantidades[5];
    float precios[] = {150.0, 55.0, 180.0, 70.0, 120.0};
    float subtotal = 0, total = 0;
    
    
    printf(".............WELCOME TO RADIATOR SPRINGS...........\n");
    printf("..................Factura de Compra................\n");
   
    
    
    printf("Nombre del comprador:\n ");
    scanf("%s", nombre);
    printf("Número de cédula:\n ");
    scanf("%s", cedula);
    
    printf ("Le ofrecemos la mejor calidad en:\n");
    
    printf("1.Llantas (Precio: $150)\n");
    printf("2.Kit Pastillas de freno (Precio: $55)\n");
    printf("3.Kit de embrague (Precio: $180)\n");
    printf("4.Faro (Precio: $70)\n");
    printf("5.Radiador (Precio: $120)\n");
    
    printf(".....Digite el numero de cada producto que desea:..... \n");
    
    
    for (int i = 0; i < 5; i++) {
        printf("Cantidad de unidades de Producto %d (%s): ", i + 1, i + 1 == 1 ? "Llantas" : (i + 1 == 2 ? "Kit Pastillas de freno" : (i + 1 == 3 ? "Kit de embrague" : (i + 1 == 4 ? "Faro" : "Radiador"))));
        scanf("%d", &cantidades[i]);
        subtotal += cantidades[i] * precios[i];
    }
    
 
    if (subtotal <= 100) {
        total = subtotal;
    } else if (subtotal <= 500) {
        total = subtotal * 0.95; 
    } else if (subtotal <= 1000) {
        total = subtotal * 0.93; 
    } else {
        total = subtotal * 0.90; 
    }
    
    printf("..................Factura de Compra................\n");
    
    printf("\nFactura para: %s (Cédula: %s)\n", nombre, cedula);
    printf("Descripción                 Cantidad  Precio  Valor\n");
    printf("---------------------------------------------------------\n");
    
    for (int i = 0; i < 5; i++) {
        printf("Producto %d (%s)       %8d   $%.2f   $%.2f\n", i + 1, i + 1 == 1 ? "Llantas" : (i + 1 == 2 ? "Pastfreno" : (i + 1 == 3 ? "Kitembrague" : (i + 1 == 4 ? "Faro" : "Radiador"))), cantidades[i], precios[i], cantidades[i] * precios[i]);
    }
    
    printf("---------------------------------------------------------\n");
    printf("Subtotal:                                      $%.2f\n", subtotal);
    printf("Total con descuento:                           $%.2f\n", total);
    
    return 0;
}