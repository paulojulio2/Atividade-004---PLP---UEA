#include <stdio.h>
#include <string.h>

int tamanhoTabela = 10;

/*Rotina que transforma uma string em um nÃºmero
que serÃ¡ usado depois na funÃ§Ã£o hash
*/
int stringParaInt(char *string) {
    int tamanho, primeira, segunda; //Inteiros que representam o tamanho,
                                    //o cÃ³digo da primeira letra da string
                                    //e o cÃ³digo da segunda letra.
    tamanho =  strlen(string);      //Mede o tamanho da string
    primeira = string[0];           //ObtÃ©m o cÃ³digo da primeira letra
    segunda = string[1];            //ObtÃ©m o cÃ³digo da segunda letra
    int resultado = (tamanho * primeira) + segunda; //FunÃ§Ã£o de transformaÃ§Ã£o
    return resultado;  //Retorna nÃºmero que representa a string
    }

/*A funÃ§Ã£o mais simples de hash;
Para uma tabela com n posiÃ§Ãµes (n == tamanhoTabela)
Toma-se o mÃ³dulo n do valor inteiro gerado na
funÃ§Ã£o "stringParaInt"
RetornarÃ¡ um nÃºmero entre 0 e 19.
*/
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

    printf("A chave para a tabela (de 0 a %d) Ã©: %d", tamanhoTabela-1, hash(stringParaInt(dado)));
    }

