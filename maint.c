#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 60

typedef struct disciplinas{ //Materia do aluno
	char disciplina[50];
}materia;

typedef struct aluno{ //Informacoes do aluno
	char rgm[8];
	materia mat;
	struct aluno * prox;
}alu;

typedef struct list{ //Lista de alunos
	alu vetor[MAX];
	int n;
}lis;

lis criar(){ //Cria a lista
	lis lista;
	lista.n = -1;
	return lista;
}

int cheioRG(lis * p){ //Verifica se a lista esta cheia
	return (p -> n == MAX - 1);
}

int addRGM(char rg[8], lis * p){ //Adicionar RGM
	(p -> n)++;
	int x = p -> n;
	
	strcpy((*p).vetor[x].rgm, rg);
	
	return 1;
}

int main(int argc, char *argv[]) {
	int men, ad;
	char RG[8];
	
	lis List = criar();
	
	while(men != 5){
		printf("\t\t\t\t\t\tLista de Alunos\n");
		printf("\tDigite\n\t1 para vizualiar a lista\n\t2 para adicionar um RGM a lista\n\t3 para procurar por um RGM\n\t4 para adicionar disciplina(s) a algum RGM\n\t5 para encerrar\n\n\t");
		scanf("%d", &men);
		system("cls");
		switch(men){
			case 1:{
				printf("\t\t\t\t\t\tLista de Alunos\n");
				break;
			}
			case 2:{
				printf("\t\t\t\t\t\tLista de Alunos\n");
				if(cheioRG(&List) == 0){
					printf("\tDigite o RGM: ");
					scanf("%s", RG);
					
					ad = addRGM(RG, &List);
					
					if(ad == 1){
						printf("\nRGM adicionado");
					}
					system("pause");
					system("cls");
				}else{
					printf("Lista cheia\n\n");
					system("pause");
					system("cls");
				}	
				
				break;
			}
			case 3:{
				printf("\t\t\t\t\t\tLista de Alunos\n");
				break;
			}
			case 4:{
				printf("\t\t\t\t\t\tLista de Alunos\n");
				break;
			}
			case 5:{
				men = 5;
				break;
			}
		}
	}
	
	return 0;
}