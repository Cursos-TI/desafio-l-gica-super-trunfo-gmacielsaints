#include <stdio.h>

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  char Estado1[20], Estado2[20], Codigo1[4], Codigo2[4], Cidade1[20], Cidade2[20];
  int Tour1, Tour2;
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

 printf("QUAL CARTA VENCEU??\n");

 //EXIBINDO VENCEDOR NA CATEGORIA POPULACAO
 if (Populacao1 > Populacao2)
 printf("Populacao: Carta 01 venceu!\n");
 else if (Populacao2 > Populacao1)
 printf("Populacao: Carta 02 venceu!\n");
 else 
 printf("Populacao: Empate!\n");
 printf("Carta 01: %u pontos X Carta 02: %u pontos\n", Populacao1, Populacao2);
 printf("__________________________________________\n");

 //EXIBINDO VENCEDOR NA CATEGORIA AREA
 if (Area1 > Area2)
 printf("Area da Cidade: Carta 01 venceu!\n");
 else if (Area2 > Area1)
 printf("Area da Cidade: Carta 02 venceu!\n");
 else 
 printf("Area da Cidade: Empate!\n");
 printf("Carta 01: %.3f pontos X Carta 02: %.3f pontos\n", Area1, Area2);
 printf("__________________________________________\n");

 //EXIBINDO VENCEDOR NA CATEGORIA PONTOS TURISTICOS
 if (Tour1 > Tour2)
 printf("Pontos Turisticos: Carta 01 venceu!\n");
 else if (Tour2 > Tour1)
 printf("Pontos Turisticos: Carta 02 venceu!\n");
 else
 printf("Pontos Turisticos: Empate!\n");
 printf("Carta 01: %d pontos X Carta 02: %d pontos\n", Tour1, Tour2);
 printf("__________________________________________\n");

 //EXIBINDO VENCEDOR NA CATEGORIA DENSIDADE DEMOGRAFICA
 if (Dens1 < Dens2)
 printf("Densidade Demografica: Carta 01 venceu!\n");
 else if (Dens2 < Dens1)
 printf("Densidade Demografica: Carta 02 venceu!\n");
 else
 printf("Densidade Demografica: Empate!\n");
 printf("Carta 01: %.2f pontos X Carta 02: %.2f pontos\n", Dens1, Dens2);
 printf("__________________________________________\n");

 //EXIBINDO VENCEDOR NA CATEGORIA PIB PER CAPTA
 if (PPC1 > PPC2)
 printf("PIB per Capta: Carta 01 venceu!\n");
 else if (PPC2 > PPC1)
 printf("PIB per Capta: Carta 02 venceu!\n");
 else
 printf("PIB per Capta: Empate!\n");
 printf("Carta 01: %lf pontos X Carta 02: %lf pontos\n", PPC1, PPC2);
 printf("__________________________________________\n");

 //EXIBINDO VENCEDOR NA CATEGORIA SUPER PODER
 if (SP1 > SP2)
 printf("Super Poder: Carta 01 venceu!\n");
 else if (SP2 > SP1)
 printf("Super Poder: Carta 02 venceu!\n");
 else
 printf("Super Poder: Empate!\n");
 printf("Carta 01: %.2f pontos X Carta 02: %.2f pontos\n", SP1, SP2);
 printf("__________________________________________\n");

return 0;
}