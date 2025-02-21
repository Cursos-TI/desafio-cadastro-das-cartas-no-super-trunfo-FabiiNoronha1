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

    // Cadastro Carta 01:
    printf("Digite o nome do Estado01: \n");
    scanf("%s", Estado01);

    printf("Digite o Código da Carta01: \n");
    scanf("%s", CodCarta01);

    printf("Digite Cidade01: \n");
    scanf("%s", Cidade01);

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
    printf("NumeroPontoTuristico01: %d \n", NumeroPontoTuristico01);

    // Cadastro Carta 02:
    printf("Digite o nome do Estado02: \n");
    scanf("%s", Estado02);

    printf("Digite o Código da Carta02: \n");
    scanf("%s", CodCarta02);

    printf("Digite Cidade02: \n");
    scanf("%s", Cidade02);

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
    printf("NumeroPontoTuristico02: %d \n", NumeroPontoTuristico02);

    return 0;
}

              

    