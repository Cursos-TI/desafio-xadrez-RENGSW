#include <stdio.h>

// Desafio de Xadrez - MateCheck - Nível Mestre
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Função: mover_torre
void mover_torre(int sentido, int passos){

    if (passos > 0){
        switch (sentido)
        {
            case 1:
                printf("Cima\n");
                break;
            case 2:
                printf("Baixo\n");
                break;
            case 3:
                printf("Esquerda\n");
                break;
            case 4:
                printf("Direita\n");
                break;
        }
        mover_torre(sentido, passos - 1);
    }
}

// Função: mover_bispo
void mover_bispo(int sentido, int passos){

    if (passos > 0){

        switch (sentido)
        {
            case 1: // Cima e esquerda
                for(int v = 1; v <= passos; v++){ 
                    int h = 1;
                    while (h < 2){ 
                        printf("Cima\n");
                        h++;
                    }
                    printf("Esquerda\n");
                }
            break;
            
            case 2: // Cima e direita
                for(int v = 1; v <= passos; v++){
                    int h = 1;
                    while (h < 2){
                        printf("Cima\n");
                        h++;
                    }
                    printf("Direita\n");
                }
            break;

            case 3: // Baixo e esquerda
                for(int v = 1; v <= passos; v++){
                    int h = 1;
                    while (h < 2){
                        printf("Baixo\n");
                        h++;
                    }
                    printf("Esquerda\n");
                }
            break;

            case 4: // Baixo e direita
                for(int v = 1; v <= passos; v++){
                    int h = 1;
                    while (h < 2){
                        printf("Baixo\n");
                        h++;
                    }
                    printf("Direita\n");
                }
            break;
        }
    }
}

// Função: mover_rainha
void mover_rainha(int sentido, int passos){

    if (passos > 0){

        switch (sentido)
        {
            case 1: printf("Cima\n"); break;
            case 2: printf("Baixo\n"); break;
            case 3: printf("Esquerda\n"); break;
            case 4: printf("Direita\n"); break;
            case 5: printf("Cima, esquerda\n"); break;
            case 6: printf("Cima, direita\n"); break;
            case 7: printf("Baixo, esquerda\n"); break;
            case 8: printf("Baixo, direita\n"); break;
        }

        mover_rainha(sentido, passos - 1);
    }
}

// Função principal
int main() {

    int peca, casas, sentido;

    printf("====== XADREZ =====\n\n");
    printf("1 - Torre\n");
    printf("2 - Bispo\n");
    printf("3 - Rainha\n");
    printf("4 - Cavalo\n\n");

    printf("Escolha qual peça deseja mover: \n");
    scanf("%d", &peca);
    printf("\n");

    switch (peca)
    {
        // TORRE 
        case 1:
           printf("==== TORRE ====\n") ;
           printf("1 - Cima\n2 - Baixo\n3 - Esquerda\n4 - Direita\n");
           printf("Escolha: ");
           scanf("%d", &sentido);
           printf("\n");
           
           if (sentido > 0 && sentido < 5){
                printf("Quantas casas deseja andar? \n");
                scanf("%d", &casas);
                printf("===============\n");
                mover_torre(sentido, casas);
                printf("===============\n"); 
           }else{
                printf("Direção inválida!\n");
           } 
        break;
        
        // BISPO 
        case 2:
           printf("==== BISPO ====\n");
           printf("1 - Diagonal cima/esquerda\n");
           printf("2 - Diagonal cima/direita\n");
           printf("3 - Diagonal baixo/esquerda\n");
           printf("4 - Diagonal baixo/direita\n");
           printf("Escolha: ");
           scanf("%d", &sentido);
           printf("\n");
                      
           if (sentido > 0 && sentido < 5){
                printf("Quantas casas deseja andar? \n");
                scanf("%d", &casas);
                printf("===============\n");
                mover_bispo(sentido, casas);
                printf("===============\n");  
           }else{
                printf("Direção inválida!\n");
           } 
        break;
        
        // RAINHA 
        case 3:
           printf("==== RAINHA ====\n");
           printf("1 - Cima\n2 - Baixo\n3 - Esquerda\n4 - Direita\n");
           printf("5 - Cima/esquerda\n6 - Cima/direita\n");
           printf("7 - Baixo/esquerda\n8 - Baixo/direita\n");
           printf("Escolha: ");
           scanf("%d", &sentido);
           printf("\n");
                      
           if (sentido > 0 && sentido < 9){
                printf("Quantas casas deseja andar? \n");
                scanf("%d", &casas);
                printf("===============\n");
                mover_rainha(sentido, casas);
                printf("===============\n");  
           }else{
                printf("Direção inválida!\n");
           } 
        break;

        // CAVALO
        case 4:
           printf("==== CAVALO ====\n") ;
           printf("1 - Cima, Esquerda\n2 - Cima, Direita\n3 - Baixo, Esquerda\n4 - Baixo, Direita\n");
           printf("5 - Esquerda, Cima\n6 - Esquerda, Baixo\n7 - Direita, Cima\n8 - Direita, Baixo\n");
           printf("Escolha: ");
           scanf("%d", &sentido);
           printf("\n");
                      
           if (sentido > 0 && sentido < 9){
                switch (sentido)
                {
                    int mov1, mov2;

                    case 1:
                        for(mov1 = 1; mov1 <= 1; mov1++){
                            for(mov2 = 1; mov2 <= 2; mov2++)
                                printf("Cima\n");
                            printf("Esquerda\n");
                        }
                    break;

                    case 2:
                        for(mov1 = 1; mov1 <= 1; mov1++){
                            for(mov2 = 1; mov2 <= 2; mov2++)
                                printf("Cima\n");
                            printf("Direita\n");
                        }
                    break;

                    case 3:
                        mov1 = 1; mov2 = 1;
                        while (mov1 <= 1){
                            while (mov2 <=2){
                                printf("Baixo\n");
                                mov2++;
                            }
                            printf("Esquerda\n");
                            mov1++;
                        }
                    break;

                    case 4:
                        mov1 = 1; mov2 = 1;
                        while (mov1 <=1){
                            while (mov2 <=2){
                                printf("Baixo\n");
                                mov2++;
                            }
                            printf("Direita\n");
                            mov1++;
                        }
                    break;

                    case 5:
                        mov1 = 1; mov2 = 1;
                        do{
                            do{
                                printf("Esquerda\n");
                                mov2++;
                            }while (mov2 <=2);
                            printf("Cima\n");
                            mov1++;
                        }while (mov1 <=1);
                    break;

                    case 6:
                        mov1 = 1; mov2 = 1;
                        do{
                            do{
                                printf("Esquerda\n");
                                mov2++;
                            }while (mov2 <=2);
                            printf("Baixo\n");
                            mov1++;
                        }while (mov1 <=1);
                    break;

                    case 7:
                        mov1 = 1; mov2 = 1;
                        for(mov1 = 1; mov1 == 1; mov1++){
                            while (mov2 <= 2){
                                printf("Direita\n");
                                mov2++;
                            }
                            printf("Cima\n");
                        }
                    break;

                    case 8:
                        mov1 = 1; mov2 = 1;
                        for(mov1 = 1; mov1 == 1; mov1++){
                            do{
                                printf("Direita\n");
                                mov2++;
                            }while (mov2 <= 2);
                            printf("Baixo\n");
                        }
                    break;

                    default:
                        printf("Direção inválida!\n");
                    break;
                }
           }else{
                printf("Direção inválida!\n");
           } 
        break;

        default:
            printf("Escolha de peça inválida!\n");
        break;
    }
    
    return 0;
}