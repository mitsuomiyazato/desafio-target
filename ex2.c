#include <stdio.h> 

int main(){

    int a = 1, b = 1, valor, aux, contador = 0;

    scanf("%d", &valor);

    while(contador <= valor)
    {
        if(valor == b || valor == 0)
        {
            printf("\nO numero pertence a sequencia de fibonacci.");
            break;
        }
        else if(b <= valor)
        {
            if(contador == 0)
            {
            printf("0 %d %d ", a, b);
            }

            aux = a + b;
            a = b;
            b = aux;
            printf("%d ", b);
        }
        else
        {
            printf("\nO numero nao pertence a sequencia de fibonacci.");
            break;
        }
        contador++;
    }

    return 0;
}
