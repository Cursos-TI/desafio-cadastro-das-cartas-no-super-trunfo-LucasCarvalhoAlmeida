#include <stdio.h>

int main(){

float temperatura;

temperatura = 50.0;

   printf("temperatura: %2.f \n" ,temperatura);

if (temperatura > 20.0)
{
    printf("\nEstá calor\n");

} else{
    printf("\nEstá frio\n");

}


return 0;

}