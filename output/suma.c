
//aunmentar el salario de una empresa en 10%

#include <stdio.h>

int main () {
    char nombre [40];
    float aumentoSalario;
    int salario;

    printf("insrte su nombre \n");
    gets(nombre);

    printf("su nombre es %s \n, nombre");
    printf("insetre su salario \n");
    scanf("%i", &salario);
    
 aumentoSalario=(salario*.1)+salario;
 printf("felicitaciones %s su salario aunmento en: %f.2\n",nombre, aumentoSalario);



    



 
 

  
    
    return 0;

}