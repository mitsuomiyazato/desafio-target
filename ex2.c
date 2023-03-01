#include <stdio.h>

int main()
{
    int qtd, val1 = 1, val2 = 1, aux, flag = 0, pos, num;
    
    printf("Digite a quantidade de números desejados da sequência de Fibonacci: ");
    scanf("%d", &qtd);
    
    printf("Digite o número que deseja saber se pertence à sequência de Fibonacci: ");
    scanf("%d", &num);
    
    printf("0 1 1 ");
    for(int contador = 3; contador < qtd; contador++)
    {
        aux = val1 + val2;
        val1 = val2;
        val2 = aux;
        if(num == val2)
        {
            flag = 1;
        }
        printf("%d ", val2);
    }
    
    if((flag == 1) || (num == 1) || (num == 0))
    {
        printf("\nO numero digitado pertence a sequencia de Fibonacci");
    }
    else
    {
        printf("\nO numero digitado NAO pertence a sequencia de Fibonacci");
    }
    
    return 0;
}
