#include <stdio.h> // Biblioteca de comunicação com o usuário
#include <stdlib.h> // Biblioteca de alocação alocação de espaço em memória
#include <locale.h> // Biblioteca de alocações de texto por região
#include <string.h> // Biblioteca responsável por cuidar da string

int registro () //Função responsável por cadastrar os usuários no sistema
{
	//Início da criação de variáveis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//Final da criação de variáveis/string
	
	printf("Digite o CPF a ser cadastrado: "); //Coletando informações do usuário
	scanf("%s", cpf); //%s, refere se a string
	
	strcpy(arquivo, cpf); //Responsável por cópiar os valores das strings
	
	FILE *file; //Cria o arquivo
	file = fopen (arquivo, "w"); //Cria o arquivo
	fprintf(file, cpf); //Salvo o valor da variável
	fclose(file); //Encerro o arquivo
	
	file = fopen (arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s", nome);
	
	file = fopen (arquivo, "a");
	fprintf(file, nome);
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s", sobrenome);
	
	file = fopen (arquivo, "a");
	fprintf(file, sobrenome);
	fclose(file);
	
	file = fopen (arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s", cargo);
	
	file = fopen (arquivo, "a");
	fprintf(file, cargo);
	fclose(file);
	
	system("pause");
	
	
}

int consulta ()
{
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s", cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	{
		printf("Não foi possível abrir o arquivo");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas são as informações do usuário: ");
		printf("%s", conteudo);
	}
	
	system("pause");
}

int deletar()
{
	char cpf[40];
	printf("Digite o cpf a ser deletado: ");
	scanf("%s", cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	{
		printf("O usuário não se encontra no sistema!\n");
		system("pause");
	}
	
}

int main () 
{

    int opcao=0; //Definindo variáveis
	
	int x=1;
	
	for(x=1; x=1;)
{	
	system("cls"); //Responsável por limpar a tela
	
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
	
	printf("Alunos EBAC\n\n"); //Inicio do menu
	printf("Escolha as opções do menu:\n\n");
	printf("\t 1- Registrar Nomes\n" );
	printf("\t 2- Consultar Nomes\n");
	printf("\t 3- Deletar Nomes\n\n");
	printf("Opção: "); // Fim do menu
	
	
	scanf("%d", &opcao); // Armazenando a escolha do usuário
	
	system("cls");
	
	switch(opcao)
	{
		case 1:
	    registro(); //Chamada de funções
		break;
		
		case 2:
		consulta();
		break;
		
		case 3:
		deletar();
		break;
		
		default:
		printf("Opção indisponivel!\n");
		system("pause");
		break;
				
		
	}
	
	}
	
}
   





	

