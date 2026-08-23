/* Este é um programa em C 
* Que solicita o nome do usuário 
* E guarda o valor digitado na variável 'nome'
*/

#include <stdio.h> /* Importa a biblioteca padrão de entradas e saídas*/
#include <windows.h> /* Importa a biblioteca do windows para utilizar acento, por exemplo.*/

int main () /* Função main*/ 
{ 
 
    SetConsoleCP(CP_UTF8); /*Define a entrada do usuário, o que digita, para utilizar os acentos.*/
    SetConsoleOutputCP(CP_UTF8); /*Define a saída correta, o que vai sair no printf*/
    char nome[20]; /*Variável de caracteres e o 20 quer dizer que suporta 20 caracteres*/

    printf("Digite seu nome: "); /*Função para saída de informações no terminal*/
    scanf("%s", nome); /*Serve para receber e guardar informações digitadas pelo usuário, não precisa do & porque o char já guarda no endereço correto*/
    printf("Olá, %s!", nome); /*Função para saída de informações no terminal*/

    return 0; /*Final da função main*/
}