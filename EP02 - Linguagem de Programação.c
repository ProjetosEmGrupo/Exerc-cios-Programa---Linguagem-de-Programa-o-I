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
| Programa	:    EP02.c - ABREVIAÇÃO DE NOMES                                       |
| Linguagem	:    ANSI C                                                             |
| Compilador	:    Pelles C (9.00.9)                                                  |
+---------------------------------------------------------------------------------------+
*/

#include <stdio.h>
#include <stdlib.h>

int tam(char nome[]){
	int i;
	for(i = 0; nome[i];i++);
	return i;
}
int abrevia(char nome[]){
	int i, l, n = 0, a, p;
	for(i = tam(nome) - 1; nome[i] != 32; i--) 
		n++;
	for (i = 0; nome[i]; i++){
		if(nome[i] >= 65 && nome[i] <= 90 && (i != 0) && i != (tam(nome) - (n))){	
			nome[i+1] = '.';			
			p=0;
			for (l = i+2; nome[l] != 32; l++){
				p++;
			}			
			for (a = i+2; nome[a]; a++){				
				nome[a] = nome[a+(p)];
			}
		}
	}
}

int main(){
	char nome[41];
	gets(nome);
	abrevia(nome);
	puts(nome);
	return 0;	
}
