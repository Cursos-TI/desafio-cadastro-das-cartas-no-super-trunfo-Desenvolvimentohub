#include <stdio.h>

int main(){

 // declaração de variáveis - CARTA01 –
 //Estrutura dos dados: char Estado01 = "Bahia" - 
 //char codigo01 [20] = "B01" - //char cidade01 [20] = "Salvador" 
 // int populacao01 = 6748000  // float area01 = 120025  // float PIB01 =  300.50 
 // int turisticos01 = 25;

    printf("Desafio super trunfo\n");
    printf("\n");
    printf("carta01\n");
    
    //declaração de variaveis

    char Estado01 [15];
    char codigo01 [10];
    char cidade01 [20];
    int populacao01;
    float area01;
    float PIB01;
    int turisticos01;

    printf("Digite codigo:   ");
    scanf("%s", & codigo01);
    printf("Codigo: %s\n", codigo01);

    printf("Digite estado:   ");
    scanf("%s", & Estado01);
    printf("Estado: %s\n", Estado01);

    printf("Digite a cidade:   ");
    scanf("%s", & cidade01);
    printf("Cidade: %s\n", cidade01);

    printf("Digite a populacao:   ");
    scanf(" %d", & populacao01);
    printf("Populacao: %d \n", populacao01);
    
    printf("Digite a Area:   ");
    scanf(" %f", & area01);
    printf("Area(km²): %f \n", area01);

    printf("Digite o PIB:    ");
    scanf("%f", & PIB01);
    printf("PIB(bilhoes): %f \n",PIB01);

    printf("Digite nº pontos turisticos:    ");
    scanf("%d", & turisticos01); 
    printf("Pontos_turisticos: %d \n", turisticos01);
    printf("\n");
    printf("Carta01 cadastrada com sucesso: \n");
    printf("\n");

// declaração de variáveis - CARTA02 
// char Estado02 [20]= "Ceara";  //  char codigo02 [20]= "C01";//    char cidade02 [50] = "Fortaleza";
//int populacao02 = 12325000;  //  float area02 = 152111 //  float PIB02 = 699.28;
//int turisticos02 = 30;

char Estado02 [15];
    char codigo02 [20];
    char cidade02 [20];
    int populacao02;
    float area02;
    float PIB02;
    int turisticos02;

    printf("Digite codigo:   ");
    scanf("%s", & codigo02);
    printf("Codigo: %s\n", codigo02);

    printf("Digite estado:   ");
    scanf("%s", & Estado02);
    printf("Estado: %s\n", Estado02);

    printf("Digite a cidade:   ");
    scanf("%s", & cidade02);
    printf("Cidade: %s\n", cidade02);

    printf("Digite a populacao:   ");
    scanf(" %d", & populacao02);
    printf("Populacao: %d \n", populacao02);
    
    printf("Digite a Area:   ");
    scanf(" %f", & area02);
    printf("Area(km²): %f \n", area02);

    printf("Digite o PIB:    ");
    scanf("%f", & PIB02);
    printf("PIB(bilhoes): %f \n",PIB02);

    printf("Digite nº pontos turisticos:    ");
    scanf("%d", & turisticos02); 
    printf("Pontos_turisticos: %d \n", turisticos02);

    printf("Carta02 cadastrada com sucesso: \n");




    return 0;

}

    

