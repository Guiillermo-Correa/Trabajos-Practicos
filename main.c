#include <stdio.h>
#include <stdlib.h>
#include "../../TP_1_Cascara/funciones.h"

int main()
{

    char seguir='s';
    int opcion=0;
    float numeroUno;
    float numeroDos;



    while(seguir=='s')
    {

        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);


        switch(opcion)
        {
            case 1:
                printf("Ingrese el primer numero ");
                scanf("%f",&numeroUno);

                break;
            case 2:
                printf("Ingrese el segundo numero ");
                scanf("%f",&numeroDos);
                break;
            case 3:
                sumar(numeroUno,numeroDos);
                printf("La suma es: %f\n",sumar);

                break;
            case 4:
                restar(numeroUno,numeroDos);
                 printf("La resta es: %f\n ", Resta);

                break;
            case 5:
                dividir(numeroUno,numeroDos);
                printf("La division es: %f\n ", dividir);

                break;
            case 6:
                multiplicar(numeroUno, numeroDos);
                        printf("La multiplicaion es: %f\n ", multiplicar);

                break;
            case 7:
               factorial(numeroUno);
                printf("El factorial es: %f\n ", factorial);
                break;
            case 8:
                sumar(numeroUno,numeroDos);
                 printf("La suma es: %f\n ", sumar);


                restar(numeroUno,numeroDos);
                 printf("La resta es: %f\n ", restar);

                dividir(numeroUno,numeroDos);
                 printf("La division es: %f\n ", dividir);

                multiplicar(numeroUno,numeroDos);
                 printf("La multiplicaion es: %f\n ", multiplicar);

                factorial(numeroUno);
                 printf("El factorial  es: %f\n ", factorial);



                break;
            case 9:
                seguir = 'n';
                break;
        }

    }
    return 0;
}
