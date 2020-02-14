#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n=0;
    int cant=0 ;
    float prom=0 ;
    float suma=0;

    while (n!=-99)
    {
        printf("ingresar nota");
        scanf ("%f",&n);
        if(n!=-99)
        {
            suma=suma+n ;

            cant=cant+1 ;
        }

    }
    prom=suma/cant;
    printf("promedio: %f",prom);
    return 0;
}
