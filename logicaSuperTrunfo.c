#include <stdio.h>

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  char Estado1[20], Estado2[20], Codigo1[4], Codigo2[4], Cidade1[20], Cidade2[20];
  int Tour1, Tour2, escolha;
  unsigned long int Populacao1, Populacao2;
  double Dens1, Dens2, Area1, Area2, PIB1, PIB2, PPC1, PPC2, SP1, SP2;

// COLETANDO INFORMAÇÕES DA CARTA 1:
printf("---------------SUPER TRUNFO!----------------\n");
printf("Infome o Estado 1:\n");
scanf("%19s", Estado1);
printf("Infome o Codigo da Carta 1:\n");
scanf("%3s", Codigo1);
printf("Infome a Cidade 1:\n");
scanf("%19s", Cidade1);
printf("Infome a Populacao da cidade 1:\n");
scanf("%lu", &Populacao1);  
printf("Infome a Quantidade de Pontos Turisticos da cidade 1:\n");
scanf("%d", &Tour1);
printf("Infome o PIB da cidade 1:\n");
scanf("%lf", &PIB1);
printf("Infome a Area da cidade 1 (km2):\n");
scanf("%lf", &Area1);
Dens1 = Populacao1 / Area1;
PPC1 = PIB1 / Populacao1;
SP1 = Populacao1 + Tour1 + PIB1 + Area1 + PPC1 + (1.0 / Dens1);
printf("------------------------------------------\n");

// COLETANDO INFORMAÇÕES DA CARTA 2:
printf("Infome o Estado 2:\n");
scanf("%19s", Estado2);
printf("Infome o Codigo da Carta 2:\n");
scanf("%3s", Codigo2);
printf("Infome a Cidade 2:\n");
scanf("%19s", Cidade2);
printf("Infome a Populacao da cidade 2:\n");
scanf("%lu", &Populacao2);  
printf("Infome a Quantidade de Pontos Turisticos da cidade 2:\n");
scanf("%d", &Tour2);
printf("Infome o PIB da cidade 2:\n");
scanf("%lf", &PIB2);
printf("Infome a Area da cidade 2 (km2):\n");
scanf("%lf", &Area2);
Dens2 = Populacao2 / Area2;
PPC2 = PIB2 / Populacao2;
SP2 = Populacao2 + Tour2 + PIB2 + Area2 + PPC2 + (1.0 / Dens2);

printf("***************************************\n");


  // Área para exibição dos dados da cidade

  // EXIBINDO INFORMAÇÕES DA CARTA 1:
  printf("A Carta 01 possui as seguintes caracteristicas:\n");
  printf("Estado: %s\n"
        "Codigo: %3s\n"
        "Cidade: %s\n"
        "Populacao: %lu\n"
        "Pontos Turisticos: %d\n"
        "PIB Total: %.3f\n"
        "PIB per capta da Cidade: %.3f\n"
        "Area da Cidade (km2): %.3f\n"
        "Densidade Demografica da Cidade(Pessoa(as) por km2): %.2f\n",
        Estado1, Codigo1, Cidade1, Populacao1, Tour1, PIB1, PPC1, Area1, Dens1);
  printf("-------------------------------------\n");

 // EXIBINDO INFORMAÇÕES DA CARTA 2:
  printf("A Carta 02 possui as seguintes caracteristicas:\n");
  printf("Estado: %s\n"
        "Codigo: %3s\n"
        "Cidade: %s\n"
        "Populacao: %lu\n"
        "Pontos Turisticos: %d\n"
        "PIB Total: %.3f\n"
        "PIB per capta da Cidade: %.3f\n"
        "Area da Cidade (km2): %.3f\n"
        "Densidade Demografica da Cidade(Pessoa(as) por km2): %.2f\n",
        Estado2, Codigo2, Cidade2, Populacao2, Tour2, PIB2, PPC2, Area2, Dens2);
  printf("***************************************\n");      

 // COMPARANDO AS CARTAS

// MENU DE OPÇÕES PARA COMPARAÇÃO
  printf("\nEscolha o atributo a ser comparado:\n");
  printf("1 - Populacao\n");
  printf("2 - Area\n");
  printf("3 - Pontos Turisticos\n");
  printf("4 - PIB Total\n");
  printf("5 - Densidade Demografica\n");
  scanf("%d", &escolha);

  printf("\n----------RESULTADO-------\n");

  switch (escolha) {
    case 1:
      if (Populacao1 > Populacao2) printf("Populacao:\nCarta 01 - %s venceu!\nCarta 01 - %lu x Carta 02 - %lu\n", Cidade1, Populacao1, Populacao2);
      else if (Populacao2 > Populacao1) printf("Populacao:\nCarta 02 - %s venceu!\nCarta 01 - %lu x Carta 02 - %lu\n", Cidade2, Populacao1, Populacao2);
      else printf("Populacao:\nEmpate!\nCarta 01 - %lu x Carta 02 - %lu\n", Populacao1, Populacao2);
      break;

    case 2:
      if (Area1 > Area2) printf("Area:\nCarta 01 - %s venceu!\nCarta 01 - %.3f x Carta 02 - %.3f\n", Cidade1, Area1, Area2);
      else if (Area2 > Area1) printf("Area:\nCarta 02 - %s venceu!\nCarta 01 - %.3f x Carta 02 - %.3f\n", Cidade2, Area1, Area2);
      else printf("Area:\nEmpate!\nCarta 01 - %.3f x Carta 02 - %.3f\n", Area1, Area2);
      break;

    case 3:
      if (Tour1 > Tour2) printf("Pontos Turisticos:\nCarta 01 - %s venceu!\nCarta 01 - %d x Carta 02 - %d\n", Cidade1, Tour1, Tour2);
      else if (Tour2 > Tour1) printf("Pontos Turisticos:\nCarta 02 - %s venceu!\nCarta 01 - %d x Carta 02 - %d\n", Cidade2, Tour1, Tour2);
      else printf("Pontos Turisticos:\nEmpate!\nCarta 01 - %d x Carta 02 - %d\n", Tour1, Tour2);
      break;

    case 4:
      if (PIB1 > PIB2) printf("PIB Total:\nCarta 01 - %s venceu!\nCarta 01 - %.3f x Carta 02 - %.3f\n", Cidade1, PIB1, PIB2);
      else if (PIB2 > PIB1) printf("PIB Total:\nCarta 02 - %s venceu!\nCarta 01 - %.3f x Carta 02 - %.3f\n", Cidade2, PIB1, PIB2);
      else printf("PIB Total:\nEmpate!\nCarta 01 - %.3f x Carta 02 - %.3f\n", PIB1, PIB2);
      break;

    case 5:
      if (Dens1 < Dens2) printf("Densidade Demografica:\nCarta 01 - %s venceu!\nCarta 01 - %.2f x Carta 02 - %.2f\n", Cidade1, Dens1, Dens2); // menor é melhor
      else if (Dens2 < Dens1) printf("Densidade Demografica:\nCarta 02 - %s venceu!\nCarta 01 - %.2f x Carta 02 - %.2f\n", Cidade2, Dens1, Dens2);
      else printf("Densidade Demografica:\nEmpate!\nCarta 01 - %.2f x Carta 02 - %.2f\n", Dens1, Dens2);
      break;

    default:
      printf("Opção inválida!\n");
      break;
  }

}