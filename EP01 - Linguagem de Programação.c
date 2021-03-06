/*
+---------------------------------------------------------------------------------------+
| Instituiçao   :    Faculdade de Técnologia de São Paulo                               |
| Departamento  :    Tecnologia da Informação                                           |
| Curso         :    Analise e Denvolvimento de Sistemas			        |
| Turma         :    Tarde                                                              |
| Disciplina	:    ILP-010                                                            |
| Aluno         :    Artur Caetano                                                      |
| Matricula     :                                                                       |
+---------------------------------------------------------------------------------------+
| Programa	:    EP01.c - CODIFICAÇÃO E DECODIFICAÇÃO DE MENSAGENS                  |
| Linguagem	:    ANSI C                                                             |
| Compilador	:    Pelles C (9.00.9)                                                  |
+---------------------------------------------------------------------------------------+
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 51

void codifica(char msg[], char cod[]){	
	int a, l = 0, i=0;
	while(msg[l] != '\0'){
		a = msg[l] + 0;		
		cod[i] = a / 10 + '0';
		cod[i+1] = a % 10 + '0';
		l++;
		i = i + 2;
	}

}

void decodifica(char cod[], char msg[]){
	int a, l = 0, i = 0;
	while(cod[l]){
		a = (cod[l] - '0') * 10 + (cod[l+1]-'0');
		msg[i] = a;
		i++;
		l = l + 2;
	}
}

int main(){
	char msg[TAM] = "", cod[(TAM*2)-1]= "";
	int i, a, l = 0;	
	printf("Digite uma Mensagem em MAIUSCULO: \n");
	gets(msg);
	codifica(msg, cod);
	printf("Sua Mensagem Codificada e: \n");
	puts(cod);
	memset(&cod, '\0', sizeof(char)*((TAM*2)-1));
	memset(&msg, '\0', sizeof(char)*(TAM));
	printf("Digite um Codigo de Mensagem: \n");
	gets(cod);
	decodifica(cod, msg);
	printf("A Mensagem do Seu Codigo e: \n");
	puts(msg);	
	return 0;
}



