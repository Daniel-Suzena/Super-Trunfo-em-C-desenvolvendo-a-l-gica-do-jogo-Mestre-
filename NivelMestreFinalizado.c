#include<stdio.h>
int main(){

    //Explicando o jogo para o usuário
    printf("***Bem-vindo ao jogo de comparação de estados!***\n");
    printf("Neste jogo, você irá comparar dois estados com base em alguns atributos.\n");
    printf("Você irá fornecer informações sobre dois estados, como população, área, PIB, número de pontos turísticos, densidade populacional e PIB per capita.\n");
    printf("Em seguida, você escolherá dois atributos para comparação e o programa determinará qual dos estados é superior em cada atributo.\n");
    printf("Vamos começar!\n\n");

    //Variáveis da carta 1
    char estado1[50],nomedoestado1[50],codigo1[50];
    unsigned int populacao1;
    float area1,pib1,densidadepopulacional1,pibpercapita1;
    int numerodepontosturisticos1,atributo1;

    //Variáveis da carta 2
    char estado2[50],nomedoestado2[50],codigo2[50];
    unsigned int populacao2;
    float area2,pib2,densidadepopulacional2,pibpercapita2;
    int numerodepontosturisticos2,atributo2;


    //Recebendo os dados da carta 1

    printf("Cadastro da Carta 1\n");

    printf("Digite o estado(EX : A) : ");
    scanf(" %[^\n]",estado1);

    printf("Digite o nome do estado :");
    scanf(" %[^\n]",nomedoestado1);

    printf("Digite o código do da cidade(EX : A01) : ");
    scanf(" %[^\n]",codigo1);

    printf("Digite a população : ");
    scanf("%u",&populacao1);

    printf("Digite a Área em Km² : ");
    scanf("%f",&area1);

    printf("Digite o PIB : ");
    scanf("%f",&pib1);

    printf("Digite o número de pontos turísticos : ");
    scanf("%i",&numerodepontosturisticos1);
    
    densidadepopulacional1 = populacao1/area1;
    pibpercapita1 = pib1/populacao1;

    //Recebendo os dados da carta 2

    printf("Cadastro da Carta 2\n");

    printf("Digite o estado(EX : A) : ");
    scanf(" %[^\n]",estado2);

    printf("Digite o nome do estado :");
    scanf(" %[^\n]",nomedoestado2);

    printf("Digite o código do da cidade(EX : A01) : ");
    scanf(" %[^\n]",codigo2);

    printf("Digite a população : ");
    scanf("%u",&populacao2);

    printf("Digite a Área em Km² : ");
    scanf("%f",&area2);

    printf("Digite o PIB : ");
    scanf("%f",&pib2);

    printf("Digite o número de pontos turísticos : ");
    scanf("%i",&numerodepontosturisticos2);
    
    densidadepopulacional2 = populacao2/area2;
    pibpercapita2 = pib2/populacao2;

    //Menu interarivo
    //Primeiro Atributo
    printf("Escolha o primeiro atributo para comparação : \n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - Pib Per Capita\n");
    printf("Digite a opção (1-6): ");
    scanf("%i",&atributo1);
    
    //Segundo Atributo
    printf("Escolha o segundo atributo para comparação : \n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - Pib Per Capita\n");
    printf("Digite a opção (1-6): ");
    scanf("%i",&atributo2);

   if(atributo2 == atributo1){
        printf("Você não pode escolher o mesmo atributo, selecione outro atributo\n");}
        

        switch (atributo1)
        {
        case 1:
            if(populacao1 > populacao2){printf("População do estado : %s(%u) venceu!\n",nomedoestado1,populacao1);}
            else if(populacao1 < populacao2){printf("População do estado : %s(%lu) venceu!\n",nomedoestado2,populacao2);}
            else{printf("A população empatou!\n");}
            break;

        case 2:
            if(area1 > area2){printf("Área em Km² do estado : %s(%.2f) venceu!\n",nomedoestado1,area1);}
            else if(area1 < area2){printf("Área em Km² do estado : %s(%.2f) venceu!\n",nomedoestado2,area2);}
            else{printf("Área em Km² empatou!\n");}
            break;
        
        case 3:
            if(pib1 > pib2){printf("PIB do estado : %s(%.2f) venceu!\n",nomedoestado1,pib1);}
            else if(pib1 < pib2){printf("População do estado : %s(%.2f) venceu!\n",nomedoestado2,pib2);}
            else{printf("PIB empatou!\n");}
            break;

        case 4:
            if(numerodepontosturisticos1 > numerodepontosturisticos2){printf("Número de pontos turísticos do estado : %s(%i) venceu!\n",nomedoestado1,numerodepontosturisticos1);}
            else if(numerodepontosturisticos1 < numerodepontosturisticos2){printf("População do estado : %s(%i) venceu!\n",nomedoestado2,numerodepontosturisticos2);}
            else{printf("Número de pontos turísticos empatou!\n");}
            break;

        case 5:
            if(densidadepopulacional1 < densidadepopulacional2){printf("Densidade Demográfica do estado : %s(%.2f) venceu!\n",nomedoestado1,densidadepopulacional1);}
            else if(densidadepopulacional1 > densidadepopulacional2){printf("Densidade Demográfica do estado : %s(%.2f) venceu!\n",nomedoestado2,densidadepopulacional2);}
            else{printf("A Densidade Demográfica empatou!\n");}
            break;

        case 6:
            if(pibpercapita1 > pibpercapita2){printf("Densidade Demográfica do estado : %s(%.2f) venceu!\n",nomedoestado1,pibpercapita1);}
            else if(pibpercapita1 < pibpercapita2){printf("Densidade Demográfica do estado : %s(%.2f) venceu!\n",nomedoestado2,pibpercapita2);}
            else{printf("Pib Per Capita empatou!\n");}
            break;

        default:{printf("Digito Inválido!\n");}
            break;
        }

        switch (atributo2)
        {
        case 1:
            if(populacao1 > populacao2){printf("População do estado : %s(%u) venceu!\n",nomedoestado1,populacao1);}
            else if(populacao1 < populacao2){printf("População do estado : %s(%lu) venceu!\n",nomedoestado2,populacao2);}
            else{printf("A população empatou!\n");}
            break;

        case 2:
            if(area1 > area2){printf("Área em Km² do estado : %s(%.2f) venceu!\n",nomedoestado1,area1);}
            else if(area1 < area2){printf("Área em Km² do estado : %s(%.2f) venceu!\n",nomedoestado2,area2);}
            else{printf("Área em Km² empatou!\n");}
            break;
        
        case 3:
            if(pib1 > pib2){printf("PIB do estado : %s(%.2f) venceu!\n",nomedoestado1,pib1);}
            else if(pib1 < pib2){printf("População do estado : %s(%.2f) venceu!\n",nomedoestado2,pib2);}
            else{printf("PIB empatou!\n");}
            break;

        case 4:
            if(numerodepontosturisticos1 > numerodepontosturisticos2){printf("Número de pontos turísticos do estado : %s(%i) venceu!\n",nomedoestado1,numerodepontosturisticos1);}
            else if(numerodepontosturisticos1 < numerodepontosturisticos2){printf("População do estado : %s(%i) venceu!\n",nomedoestado2,numerodepontosturisticos2);}
            else{printf("Número de pontos turísticos empatou!\n");}
            break;

        case 5:
            if(densidadepopulacional1 < densidadepopulacional2){printf("Densidade Demográfica do estado : %s(%.2f) venceu!\n",nomedoestado1,densidadepopulacional1);}
            else if(densidadepopulacional1 > densidadepopulacional2){printf("Densidade Demográfica do estado : %s(%.2f) venceu!\n",nomedoestado2,densidadepopulacional2);}
            else{printf("A Densidade Demográfica empatou!\n");}
            break;

        case 6:
            if(pibpercapita1 > pibpercapita2){printf("Pib Per Capita do estado : %s(%.2f) venceu!\n",nomedoestado1,pibpercapita1);}
            else if(pibpercapita1 < pibpercapita2){printf("Pib Per Capita do estado : %s(%.2f) venceu!\n",nomedoestado2,pibpercapita2);}
            else{printf("Pib Per Capita empatou!\n");}
            break;

        default:{printf("Digito Inválido!\n");}
            break;
        }
return 0;
}