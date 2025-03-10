#include <stdio.h>

int main() {
    // Variáveis
    char Estado01[50], Estado02[50];
    char CodCarta01[50], CodCarta02[50];
    char Cidade01[50], Cidade02[50];
    int Populacao01, Populacao02;
    float AreaEmKm01, AreaEmKm02;
    float PIB01, PIB02;
    int NumeroPontoTuristico01, NumeroPontoTuristico02;
    float Densidade01, Densidade02;
    float PIBperCapita01, PIBperCapita02;
    float Quociente; 

    // Cadastro Carta 01:

    printf("Digite o nome do Estado01: \n");
    scanf("%s", &Estado01);

    printf("Digite o Código da Carta01: \n");
    scanf("%s", &CodCarta01);

    printf("Digite Cidade01: \n");
    scanf("%s", &Cidade01);

    printf("Digite a Quantidade da População01: \n");
    scanf("%d", &Populacao01);

    printf("Digite a Área em Km²: \n");
    scanf("%f", &AreaEmKm01);

    printf("Digite o PIB da cidade 01: \n");
    scanf("%f", &PIB01);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &NumeroPontoTuristico01);

    // Visualização da Carta 1 Completa:
    printf("Estado01: %s \n", Estado01);
    printf("CodCarta01: %s \n", CodCarta01);
    printf("Cidade01: %s \n", Cidade01);
    printf("Populacao01: %d \n", Populacao01);
    printf("AreaEmKm01: %f \n", AreaEmKm01);
    printf("PIB01: %f\n", PIB01);
    Quociente = Populacao01 / AreaEmKm01; // Division als float
    printf("Densidade: %.2f\n", Quociente);
    Quociente = PIB01 / Populacao01; // Division als float
    printf("PIB per Capita: %.2f\n", Quociente);

    // Cadastro Carta 02:
    printf("Digite o nome do Estado02: \n");
    scanf("%s", &Estado02);

    printf("Digite o Código da Carta02: \n");
    scanf("%s", &CodCarta02);

    printf("Digite Cidade02: \n");
    scanf("%s", &Cidade02);

    printf("Digite a Quantidade da População02: \n");
    scanf("%d", &Populacao02);

    printf("Digite a Área em Km²: \n");
    scanf("%f", &AreaEmKm02);

    printf("Digite o PIB da cidade 02: \n");
    scanf("%f", &PIB02);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &NumeroPontoTuristico02);

    // Visualização da Carta 2 Completa:
    printf("Estado02: %s \n", Estado02);
    printf("CodCarta02: %s \n", CodCarta02);
    printf("Cidade02: %s \n", Cidade02);
    printf("Populacao02: %d \n", Populacao02);
    printf("AreaEmKm02: %f \n", AreaEmKm02);
    printf("PIB02: %f\n", PIB02);
    Quociente = Populacao02 / AreaEmKm02; // Division als float
    printf("Densidade: %.2f\n", Quociente);
    Quociente = PIB02 / Populacao02; // Division als float
    printf("PIB per Capita: %.2f\n", Quociente);

  

    // Calculando super poder das cartas 1 e 2

    float SuperPoder01 = (float) Populacao01 + AreaEmKm01 + PIB01 + PIBperCapita01 + NumeroPontoTuristico01;
    float SuperPoder02 = (float) Populacao02 + AreaEmKm02 + PIB02 + PIBperCapita02 + NumeroPontoTuristico02;

    // Calculando o inverso da densidade 

    float InversoDensidade01 = (Densidade01 > 0) * (1 / Densidade01);
    float InversoDensidade02 = (Densidade02 > 0) * (1 / Densidade02);

    // Comparação das Cartas
  
         printf("Comparação das cartas: \n");
         printf("Vencedor em populacao: Carta %d\n", (Populacao01> Populacao02) * 1 + (Populacao01 <= Populacao02) * 2);
         printf("Vencedor em area: Carta %d\n", (AreaEmKm01 > AreaEmKm02) * 1 + (AreaEmKm01 <= AreaEmKm02) * 2);
         printf("Vencedor em PIB: Carta %d\n", (PIB01 > PIB02) * 1 + (PIB01 <= PIB02) * 2);
         printf("Vencedor em pontos turisticos: Carta %d\n", (NumeroPontoTuristico01 > NumeroPontoTuristico02) * 1 + (NumeroPontoTuristico01 <= NumeroPontoTuristico02) * 2);
         printf("Vencedor em Densidade Populacional: Carta %d\n", (Densidade01 < Densidade01) * 1 + (Densidade01 >= Densidade02) * 2);
         printf("Vencedor em PIB per capta: Carta %d\n", (PIBperCapita01 > PIBperCapita02) * 1 + (PIBperCapita01 <= PIBperCapita02) * 2);
         printf("Vencedor em Super Poder: Carta %d\n", (SuperPoder01 > SuperPoder02) * 1 + (SuperPoder01 <= SuperPoder02) * 2);

    return 0;
}
