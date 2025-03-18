#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("***Desafio Super Trunfo*** \n");
    srand(time(0));

        // Carta 1
        char estado1[3] = "A"; 
        char codigo1[4] = "A01";
        char cidade1[50] = "São Paulo";
        unsigned long int populacao1 = 6928;
        float area1 = 1521.11;
        float PIB1 = 123250.00;
        int pontosTuristicos1 = 50;
        float densidadePopulacional1;
        float PIBperCapta1;
        int escolhaJogador1;
        int escolhaJogador2;
        float valorJogador1;
        float valorJogador2;
        char *atributo1jogador;
        char *atributo2jogador;
        float resultado1;

        densidadePopulacional1 = populacao1 / area1;
        PIBperCapta1 = PIB1 / populacao1;

        // Carta 2
        char estado2[3] = "B"; 
        char codigo2[4] = "B02"; 
        char cidade2[50] = "Rio de Janeiro";
        unsigned long int populacao2 = 3000;
        float area2 = 1200.25;
        float PIB2 = 67480.50;
        int pontosTuristicos2 = 30;
        float densidadePopulacional2;
        float PIBperCapta2;
        int escolhaComputador1;
        int escolhaComputador2;
        float valorComputador1;
        float valorComputador2;
        char *atributo1Computador;
        char *atributo2Computador;
        float resultado2;


        PIBperCapta2 = PIB2 / populacao2;
        densidadePopulacional2 = populacao2 / area2;

        //Escolha aleatória
        escolhaComputador1 = rand() % 5 + 1;
        escolhaComputador2 = rand() % 5 + 1;

        // Primeira escolha
        printf("Escolha um atributo: \n");
        printf("1. População: %u \n", populacao1);
        printf("2. Área: %.2f km \n", area1);
        printf("3. PIB: %.2f bilhões de reais \n", PIB1);
        printf("4. Pontos turísticos: %d \n", pontosTuristicos1);
        printf("5. Densidade Populacional: %.2f hab/km \n", densidadePopulacional1);
        printf("Escolha: ");
        scanf("%d", &escolhaJogador1);

        // Segunda escolha
        printf("Escolha mais um atributo: \n");
        printf("1. População: %u \n", populacao1);
        printf("2. Área: %.2f km \n", area1);
        printf("3. PIB: %.2f bilhões de reais \n", PIB1);
        printf("4. Pontos turísticos: %d \n", pontosTuristicos1);
        printf("5. Densidade Populacional: %.2f hab/km \n", densidadePopulacional1);
        printf("Escolha: ");
        scanf("%d", &escolhaJogador2);

        if (escolhaJogador1 == escolhaJogador2)
        {
           printf("Atributo já escolhido \n");
           return 0;
        } else
        {
            switch (escolhaJogador1) 
            {
                case 1:
                    valorJogador1 = populacao1;
                    atributo1jogador = "População";
                    break;

                case 2:
                    valorJogador1 = area1;
                    atributo1jogador = "Área";
                    break;

                case 3:
                    valorJogador1 = PIB1;
                    atributo1jogador = "PIB";
                    break;

                case 4:
                    valorJogador1 = pontosTuristicos1;
                    atributo1jogador = "Pontos turísticos";
                    break;

                case 5:
                    valorJogador1 = densidadePopulacional1;
                    atributo1jogador = "Densidade Populacional";
                    break;

                default:
                    printf("Opção inválida\n");
            }

            switch (escolhaJogador2) 
            {
                case 1:
                    valorJogador2 = populacao1;
                    atributo2jogador = "População";
                    break;

                case 2:
                    valorJogador2 = area1;
                    atributo2jogador = "Área";
                    break;

                case 3:
                    valorJogador2 = PIB1;
                    atributo2jogador = "PIB";
                    break;

                case 4:
                    valorJogador2 = pontosTuristicos1;
                    atributo2jogador = "Pontos turísticos";
                    break;

                case 5:
                    valorJogador2 = densidadePopulacional1;
                    atributo2jogador = "Densidade Populacional";
                    break;

                default:
                    printf("Opção inválida\n");
                break;
            }
        }

        

        switch (escolhaComputador1) 
        {
            case 1:
                valorComputador1 = populacao2;
                atributo1Computador = "População";
                break;

            case 2:
                valorComputador1 = area2;
                atributo1Computador = "Área";
                break;

            case 3:
                valorComputador1 = PIB2;
                atributo1Computador = "PIB";
                break;

            case 4:
                valorComputador1 = pontosTuristicos2;
                atributo1Computador = "Pontos turísticos";
                break;

            case 5:
                valorComputador1 = densidadePopulacional2;
                atributo1Computador = "Densidade Populacional";
                break;

            default:

            break;
        }

        switch (escolhaComputador2) 
        {
            case 1:
                valorComputador2 = populacao2;
                atributo2Computador = "População";
                break;
            case 2:
                valorComputador2 = area2;
                atributo2Computador = "Área";
                break;
            case 3:
                valorComputador2 = PIB2;
                atributo2Computador = "PIB";
                break;
            case 4:
                valorComputador2 = pontosTuristicos2;
                atributo2Computador = "Pontos turísticos";
                break;
            case 5:
                valorComputador2 = densidadePopulacional2;
                atributo2Computador = "Densidade Populacional";
                break;

            default:

            break;
        }

        //Escolhas jogador
        printf("Cidade: %s \n", cidade1);
        printf("%s: %.2f \n", atributo1jogador, valorJogador1);
        printf("%s: %.2f \n", atributo2jogador, valorJogador2);

        //Escolhas computador
        printf("Cidade: %s \n", cidade2);
        printf("%s: %.2f \n", atributo1Computador, valorComputador1);
        printf("%s: %.2f \n", atributo2Computador, valorComputador2);

        //Soma atributos jogador
        resultado1 = valorJogador1 + valorJogador2;
        //Soma atributos computador
        resultado2 = valorComputador1 + valorComputador2;

        printf("Pontuação do jogador: %.2f \n", resultado1);
        printf("Pontuação do computador: %.2f \n", resultado2);


        // Resultados
        if (resultado1 > resultado2)
        {
            printf("Parabéns, você venceu!!!");
        } else if (resultado1 < resultado2)
        {
            printf("Você perdeu");
        } else
        {
            printf("Empate");
        }
        

        return 0;
}