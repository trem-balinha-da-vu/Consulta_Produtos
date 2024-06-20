#include <stdio.h>
#include <stdlib.h>
#include "consulta.h"

/*
"Consulta_Produtos" � um programa que solicita ao usu�rio que digite um c�digo de produto e,
ap�s consulta ao arquivo, mostra na tela o  nome do produto e o seu pre�o de venda,
encerrando quando o usu�rio informa um c�digo de produto igual a -1.
**/

int main()
{
    int cont = 1;
    int codigo;

    titulo("CONSULTA DE PRODUTOS");
    while(cont != -1)
    {
        printf("Informe o codigo a ser consultado: "); scanf("%d", &codigo); consulta_produto(codigo);
        printf("Deseja consultar um novo produto? (digite -1 para sair, 1 para continuar)"); scanf("%d" , &cont);
    }

    return 0;
}
