/* Programa calculadora */
/* calculadora.c */

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <time.h>

#define TAM_NOME 50


	
int codigo_produto;
char nome_produto[TAM_NOME];
float peso_produto;
float preco_produto;
int codigo_local_entrega;
float preco_frete;
float preco_total;


char opcao;	

int main (void){

	setlocale(LC_ALL, "Portuguese");

	printf("\n**** Calculadora *****\n\n");

	printf("1. Inserir novo registro\n");
	printf("2. Listar registros\n");
	printf("3. Sair\n");
	printf("Informe sua opção: ");
		
	do
	{
		
		opcao = getchar();
		switch(opcao){
			case '1':
				printf("\nInforme o código do produto: ");
				scanf("%d", &codigo_produto);
				
				printf("Informe o nome do produto: ");
				scanf("%s", &nome_produto);
				
				printf("Informe o peso do produto: ");
				scanf("%.2f", &peso_produto);
		
				printf("Informe o preço do produto: ");
				scanf("%.2f", &preco_produto);
		
				printf("Informe o código do local de entrega do produto : \n");
				printf("1 - Região Sul\n");
				printf("2 - Região Sudeste\n");
				printf("3 - Região Norte\n");
				printf("4 - Região Nordeste\n");
				scanf("%d", &codigo_local_entrega);
				switch(codigo_local_entrega){
					case '1':
						if (peso_produto > 2){
							preco_frete == 50.00;
						}else{
							preco_frete == 30.00;
						}
						break;
					case '2':
						if (peso_produto > 2){
							preco_frete == 45.00;
						}else{
							preco_frete == 25.00;
						}
						break;
					case '3':
						if (peso_produto > 2){
							preco_frete == 55.00;
						}else{
							preco_frete == 35.00;
						}
						break;
					case '4':
						if (peso_produto > 2){
							preco_frete == 60.00;
						}else{
							preco_frete == 40.00;
						}
						break;
					default:
						printf("Opção inválida");
						break;
				}
				printf("Preço calculado do frete = %.2f\n", preco_frete);
				break;
			case '2':
				printf("Função em construção.");
				break;
			case '3':				
				printf("\nPrograma finalizado.");
				opcao = 3;			
		}
	}while (opcao=='1' && opcao=='2');

}
