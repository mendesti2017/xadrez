#include <stdio.h>

/*
    OS CODIGOS QUE ESTÃO ACIMA DA FUNÇÃO PRINCIPAL ESTAO IMPLEMENTANDO 
    O  DESAFIO DO NIVEL MESTRE:
    AS FUNÇÕES MOVERTORRE,  MOVERBISPO E MOVERRAINHA UTILIZAM RECURSIVIDADE
    A FUNÇÃO DO MOVERCAVALO TAMBÉM É CHAMADA PELA FUNÇÃO PRINCIPAL E UTILIZA LOOPS ANINHADOS
*/

void moverTorrer(int x) {
    if (x > 0) {
        printf("Direita\n"); 
        moverTorrer(x - 1);
    }
}

void moverBispo(int i){
    if (i > 0) {
        printf("Cima, Direita\n");
        moverBispo(i - 1);
    }
}

void moverRainha(int j){
    if (j > 0) {
        printf("Esquerda\n");
        moverRainha(j - 1);
    }
}

void moverCavalo(movCavalo) {
    while (movCavalo--)
         {
            for(int i = 0; i < 2;  i++)
            {
                 printf("Cima\n");
            }

            printf("Direita\n");
    }

}


int main() {

    int movCavalo = 1; // Está variável é para controle do movimento do Cavalo, usando While

    printf("**********************************************************************************************\n\n");
    printf("PROGRAMA EM C QUE SIMULA O MOVIMENTO DE TRES PECAS: TORRE, BISPO E RAINHA.\n\n");
    printf("**********************************************************************************************\n");

    printf("A PECA  TORRE E MOVIDA 5 CASAS PARA DIREITA: \n");
    moverTorrer(5);
    printf("\n");

    printf("A PECA BISPO E MOVIDA 5 CASAS NA DIAGONAL: \n");
    moverBispo(5);
    printf("\n");

    printf("A PECA RAINHA E MOVIDA 8 CASAS PARA ESQUERDA: \n");
    moverRainha(8);
    printf("\n");

    printf("A PECA CAVALO E MOVIDA 2 CASAS PARA CIMA E 1 CASA PARA DIREITA: \n");
    moverCavalo(movCavalo);
    printf("\n");



    /* 
        AS LINHAS DE CÓDIGOS ABAIXO SÃO REFERENTES AOS DESAFIOS DO NIVEL  NOVATO E NIVEL AVENTUREIRO

        int j = 0; //Esta variável é para controle do movimento do Bispo, usando While

        int x = 0; //Está variável é para controle do movimento da Rainha, usando do...While 

        int movCavalo = 1; // Está variável é para controle do movimento do Cavalo, usando While
        
        //A ESTRUTURA FOR - MOVE A PEÇA TORRE 5 CASA PARA DIREITA.

        printf("A PECA  TORRE E MOVIDA 5 CASAS PARA DIREITA: \n");

        for (int  i = 0; i < 5; i++)
         {
            printf("Direita\n");
         }

        printf("\n\n");
    
    
        //A ESTRUTURA WHILE - MOVE A PEÇA BISPO 5 CASA NA DIAGONAL.
        
        printf("A PECA BISPO E MOVIDA 5 CASAS NA DIAGONAL: \n");

        while (j < 5)
        {
            printf("Cima, Direita\n");

             j++;
        }
    
        printf("\n\n");

    
        //A ESTRUTURA DO WHILE - MOVE A PEÇA RAINHA 8 CASA PARA ESQUERDA.

        printf("A PECA RAINHA E MOVIDA 8 CASAS PARA ESQUERDA: \n");

        do
        {
            printf("Esquerda\n");

            x++;

        } while (x < 8);
    
         printf("\n\n");
    
    
        // A ESTRUTURA FOR E  WHILE - MOVE A PEÇA CAVALO EM L 2 CASA PARA BAIXO E 1 CASA PARA ESQUERDA.

            
        printf("A PECA CAVALO E MOVIDA 2 CASAS PARA BAIXO E 1 CASA PARA ESQUERDA: \n");

        while (movCavalo--)
         {
            for(int i = 0; i < 2;  i++)
            {
                 printf("Baixo\n");
            }

            printf("Esquerda\n");
    }
    */

    




    return 0;
}