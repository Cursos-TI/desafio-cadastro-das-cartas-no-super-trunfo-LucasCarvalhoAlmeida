#include <stdio.h>

int main(){

int numero = 5, resultado;

resultado = numero % 2;

printf("A variável é: %d\n" ,resultado);

if (resultado == 0)
{
    printf("O numero é par\n"); 
} else{
    printf("O número é ímpar\n");
}


}