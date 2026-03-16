#include<stdio.h>
#include<string.h>
#define tf 2
typedef struct{
	char titulo[100],autor[100],genero[100];
	int ano,codEst,numP;
	char disp;
}livro;

void preenche(livro l[]){
	int i;
	for(i=0;i<tf;i++){
		printf("\nNome do livro: ");fflush(stdin);
		gets(l[i].titulo);
		printf("\nNome do autor: ");
		gets(l[i].autor);
		printf("\nAno de publicacao: ");
		scanf("%d",&l[i].ano);
		printf("\nGenero: ");fflush(stdin);
		gets(l[i].genero);
		printf("\nCodigo da estante: ");
		scanf("%d",&l[i].codEst);
		printf("\nNumero de pg: ");
		scanf("%d",&l[i].numP);
		printf("\nDisponibilidade (S/N): ");fflush(stdin);
		scanf("%c",&l[i].disp);
		
	}
}

void exibir(livro l[]){
	int i,est,achou=0;
	
	printf("\nDigite o codigo da estante para exibir os livros: ");
	scanf("%d",&est);
	
	for(i=0;i<tf;i++){
		
		if(est==l[i].codEst)
		{
			printf("\nCodigo da estante: %d",l[i].codEst);
			printf("\nNome do livro: %s",l[i].titulo);
			printf("\nNome do autor: %s",l[i].autor);
			printf("\nAno de publicacao: %d",l[i].ano);
			printf("\nGenero: %s",l[i].genero);
			printf("\nNumero de pg: %d",l[i].numP);
			printf("\nDisponibilidade (S/N): %c",l[i].disp);
			achou++;
		}
		else
		if(achou==0)
		  printf("\nEstante nao encontrada.");
	}
	
}

void media(livro l[]){
	int cont=0,i,med;
	for(i=0;i<tf;i++){
		cont+=l[i].numP;
	}
	printf("\nMedia numero de paginas dos livros cadastrados: %d",med=cont/tf);
}

main(){
	livro l[tf];
	
	preenche(l);
	exibir(l);
	media(l);
}
