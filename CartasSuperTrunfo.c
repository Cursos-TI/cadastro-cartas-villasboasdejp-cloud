#include <stdio.h>

int main(){

    char nomestado1, nomestado2;
    char codigo1, codigo2;
    char cidade1, cidade2;
    unsigned long int pessoas1, pessoas2;
    float area1, area2;
    float pib1, pib2;
    int p1, p2;
    float densidade1, densidade2;
    float capita1, capita2;
    float poder1, poder2;



//Cartas 1
    printf("carta 1: 1\n");

    printf("Estado: ");
    scanf("%s",&nomestado1);

    printf("Código da Carta:" );
    scanf("%s",&codigo1);

    printf("Nome da Cidade:" );
    scanf("%s",&cidade1);

    printf("População:" );
    scanf("%d",&pessoas1);

    printf("Área:" );
    scanf("%f",&area1);

    printf("PIB:" );
    scanf("%f",&pib1);

    printf("Pontos Turísticos:" );
    scanf("%d",&p1);

    printf("Densidade populacional:%.2f\n",(float) pessoas1 / area1);
        densidade1 = (float)pessoas1 / area1;

    printf("PIB per capita:%.2f\n",(float) pib1 / pessoas1);
        capita1 = (float)pib1 / pessoas1;

        poder1 = (float)pessoas1 + area1 + pib1 + p1 + (1.0/densidade1) + capita1;

    printf("Super Poder:%.2f\n",poder1);

// cartas 2
    printf("Carta 2: 2\n");
    
    printf("Estado:" );
    scanf("%s",&nomestado2);

    printf("Código da Carta:" );
    scanf("%s",&codigo2);

    printf("Nome da Cidade:" );
    scanf("%s",&cidade2);

    printf("População:" );
    scanf("%d",&pessoas2);

    printf("Área:" );
    scanf("%f",&area2);

    printf("PIB:" );
    scanf("%f",&pib2);

    printf("Pontos Turísticos:" );
    scanf("%d",&p2);

    printf("Densidade populacional:%.2f\n",(float) pessoas2 / area2);
        densidade2 = (float)pessoas2 / area2;

    printf("PIB per capita:%.2f\n", (float) pib2 / pessoas2);
        capita2 = (float)pib2 / pessoas2;

        poder2 = (float)pessoas2 + area2 + pib2 + p2 + (1.0/densidade2) + capita2;

    printf("Super Poder:%.2f\n",poder2);

 //Comparação de populaçao
printf("População: Carta%d venceu\n",( pessoas1 > pessoas2) ?1:2);

//Comparação Área
printf("Área: Carta%d venceu\n",(area1 > area2)?1:2);

//Comparação PIB
printf("PIB: Carta%d venceu\n",(pib1 > pib2) ?1:2);

//Comparação Pontos Turisticos
printf("Pontos Turísticos: Carta%d venceu\n",(p1 > p2) ?1:2);

//Comparação de Densidade
printf("Densidade: Carta%d venceu\n",(densidade1 < densidade2)?1:2);

//Comparação PIB per Capita
printf("PIB per capita: Carta%d venceu\n",(capita1 > capita2) ?1:2);

//Super Poder
printf("Super Poder: Carta%d venceu\n",(poder1 > poder2)?1:2);


return 0;
}