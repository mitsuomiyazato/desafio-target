#include <stdio.h>

int main(){

    int l, c;
    float matriz[5][3], total = 0;
    
    for(l = 0; l < 5; l++)
    {
        matriz[l][c] = l;
    }
    
    matriz[0][1] = 67836.43;
    matriz[1][1] = 36678.66;
    matriz[2][1] = 29229.88;
    matriz[3][1] = 27165.48;
    matriz[4][1] = 19849.53;
    
    for(l = 0; l < 5; l++)
    {
        total += matriz[l][1];
    }
    
    for(l = 0; l < 5; l++)
    {
        matriz[l][2] = (100 * matriz[l][1]) / total;
    }
    
    printf("Percentual de representação de cada estado para a fatura total: ");
    for(l = 0; l <5; l++)
    {
        switch(l)
        {
            case 0:
            printf("\nSP ~= %0.f", matriz[l][2]);
            break;
            
            
            case 1:
            printf("\nRJ ~= %0.f", matriz[l][2]);
            break;
            
            case 2:
            printf("\nMG ~= %0.f", matriz[l][2]);
            break;
            
            case 3:
            printf("\nES ~= %0.f", matriz[l][2]);
            break;
            
            case 4:
            printf("\nOUTROS ~= %0.f", matriz[l][2]);
            break;
        }
    }
}