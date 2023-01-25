#include <stdio.h>
#include <string.h>

int tamanhoTabela = 10;


int stringParaInt(char *string) {
    int tamanho, primeira, segunda; 
                                 
    tamanho =  strlen(string);      
    primeira = string[0];           
    segunda = string[1];            
    int resultado = (tamanho * primeira) + segunda;
    return resultado;  //Retorna nÃºmero que representa a string
    }


int hash(int valor) {
    return valor % tamanhoTabela;  
    }


/*Rotina principal
Captura strings quaisquer e gera a chave correspondente para tabela hash.
*/
int main() {
    int i;
    char dado[50];

    printf("\nDefina o tamanho da tabela: ");
    scanf("%d", &tamanhoTabela);

    for (i=0; i<tamanhoTabela; i++) {
   
    printf("\nDigite uma palavra qualquer: ");
    gets(dado);

    printf("A chave para a tabela (de 0 a %d): %d", tamanhoTabela-1, hash(stringParaInt(dado)));
    }

