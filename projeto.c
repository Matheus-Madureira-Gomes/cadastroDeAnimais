#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	char animal[30];
	int quant, preco, consumo, diario, mensal, comida;
	
	
	printf("Bem vindo(a) ao programa de cadastro do Zoológico de Guarulhos!)\n");
	printf("Qual animal você deseja cadastrar no zoológico ? \n");
	gets(animal);
	printf("Quantos deles serão cadastrados ? \n");
	scanf("%d",&quant);
	printf("Qual o preço estimado por kilo da comida de um(a) %s  em reais \n",animal);
	scanf("%d",&preco);
	printf("Por fim, quantos kilos desta comida o(a) %s consome por dia \n",animal);
	scanf("%d",&consumo);
	
	diario = preco * consumo * quant;
	mensal = diario * 30;
	comida = consumo * quant * 30; 
	
	printf("O custo diário será de aproximadamente : %d \n", diario);
	printf("O custo mensal será de : %d \n", mensal);
	printf("O consumo de comida mensal em kg é de : %d ",comida);
	
	
		
	return 0;
}