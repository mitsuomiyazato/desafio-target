#include <stdio.h>

int main(){

    float dia[30], maior = 0, menor = 0, media = 0;
    int aux = 0, totalD = 0;

	dia[0] = 22174.1664;
    dia[1] = 24537.6698;
    dia[2] = 26139.6134;
	dia[3] = 0.0;
	dia[4] = 0.0;
    dia[5] = 26742.6612;
    dia[6] = 0.0;
    dia[7] = 42889.2258;
    dia[8] = 46251.174;
    dia[9] = 11191.4722;
    dia[10] = 0.0;
	dia[11] = 0.0;
	dia[12] = 3847.4823;
	dia[13] = 373.7838;
	dia[14] = 2659.7563;
	dia[15] = 48924.2448;
	dia[16] = 18419.2614;
	dia[17] = 0.0;
    dia[18] = 0.0;
    dia[19] = 35240.1826;
    dia[20] = 43829.1667;
    dia[21] = 18235.6852;
    dia[22] = 4355.0662;
    dia[23] = 13327.1025;
    dia[24] = 0.0;
    dia[25] = 0.0;
    dia[26] = 25681.8318;
    dia[27] = 1718.1221;
    dia[28] = 13220.495;
    dia[29] = 8414.61;
    
    for(int i = 0; i<30; i++)
    {
        if(i == 0)
        {
            maior = dia[i];
            menor = dia[i];
        }
        if(dia[i] == 0)
        {
            aux++;
        }
        
        if(dia[i] > maior)
        {
            maior = dia[i];
        }
        
        if((dia[i] < menor) && (dia[i] != 0))
        {
            menor = dia[i];

        }
        
        media += dia[i];
    }
    
    media = media / (30 - aux);
    printf("Maior valor de faturamento do mes: %f", maior);
    printf("\nMenor valor de faturamento do mes: %f", menor);
    printf("\nMedia de faturamento do mes: %f", media);
    
    printf("\nO numero de dias no mes que tiveram faturamento diario superior à media mensal foram: ");
    for(int i = 0; i < 30; i++)
    {
        if(dia[i] > media)
        {
            totalD++;
        }
    }
    printf("%d.", totalD);
    return 0;
}