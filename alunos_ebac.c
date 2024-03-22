#include <stdio.h> // Biblioteca de comunica��o com o usu�rio
#include <stdlib.h> // Biblioteca de aloca��o aloca��o de espa�o em mem�ria
#include <locale.h> // Biblioteca de aloca��es de texto por regi�o
#include <string.h> // Biblioteca respons�vel por cuidar da string

int registro () //Fun��o respons�vel por cadastrar os usu�rios no sistema
{
	//In�cio da cria��o de vari�veis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//Final da cria��o de vari�veis/string
	
	printf("Digite o CPF a ser cadastrado: "); //Coletando informa��es do usu�rio
	scanf("%s", cpf); //%s, refere se a string
	
	strcpy(arquivo, cpf); //Respons�vel por c�piar os valores das strings
	
	FILE *file; //Cria o arquivo
	file = fopen (arquivo, "w"); //Cria o arquivo
	fprintf(file, cpf); //Salvo o valor da vari�vel
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
		printf("N�o foi poss�vel abrir o arquivo");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as informa��es do usu�rio: ");
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
		printf("O usu�rio n�o se encontra no sistema!\n");
		system("pause");
	}
	
}

int main () 
{

    int opcao=0; //Definindo vari�veis
	
	int x=1;
	
	for(x=1; x=1;)
{	
	system("cls"); //Respons�vel por limpar a tela
	
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
	
	printf("Alunos EBAC\n\n"); //Inicio do menu
	printf("Escolha as op��es do menu:\n\n");
	printf("\t 1- Registrar Nomes\n" );
	printf("\t 2- Consultar Nomes\n");
	printf("\t 3- Deletar Nomes\n\n");
	printf("Op��o: "); // Fim do menu
	
	
	scanf("%d", &opcao); // Armazenando a escolha do usu�rio
	
	system("cls");
	
	switch(opcao)
	{
		case 1:
	    registro(); //Chamada de fun��es
		break;
		
		case 2:
		consulta();
		break;
		
		case 3:
		deletar();
		break;
		
		default:
		printf("Op��o indisponivel!\n");
		system("pause");
		break;
				
		
	}
	
	}
	
}
   





	

