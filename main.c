#include <stdio.h>
#include <string.h>

#define TAM 3

typedef struct{
	char nome[100];
	char curso[100];
	int idade;
	float nota;
}info;

int main(){
	info A[20];
	int i;
	for(i = 0; i < TAM; i++){
		printf("Qual o seu nome?");
		fgets(A[i].nome, 100, stdin);
		printf("Qual a sua idade?");
		scanf("%d", &A[i].idade);
		fflush(stdin);
		printf("Qual o seu curso?");
		fgets(A[i].curso, 100, stdin);
		printf("Qual a sua nota no curso?");
		scanf("%f", &A[i].nota);
		fflush(stdin);	
		
		printf("\n\n");
	}
	
	char *velho;
	int maiorIdade = A[0].idade;
	
	printf("Alunos com mais de 22 anos\n");
	
	for(i = 0; i < TAM; i ++){
		if(A[i].idade > 22){
			printf("%s\n", A[i].nome);
		}
		
		if(A[i].idade >	maiorIdade){
			velho = A[i].nome;
		}
	}
	
	printf("O mais velho e %s\n", velho);
	
	float maiorNota = A[0].nota;
	printf("Alunos aprovados,reprovados e o melhor da turma\n");
	for(i = 0; i < TAM; i++){
		if(A[i].nota>=7){
			printf("Aprovado: %s\n", A[i].nome);
		}else{
			printf("N�o aprovado: %s\n", A[i].nome);
		}
		
		if(A[i].nota> maiorNota){
			printf("O aluno com maior nota foi %s\n", A[i].nome);
		}
				
	}
		
}
