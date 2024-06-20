#include <stdio.h>
#include "consulta.h"
#include "C:\\Users\\izabe\\Desktop\\Cria_arq_prod\\produtos.h"

void consulta_produto(int codigo_produto)
{
    FILE *fp;
    char nomearq[60] = "C:\\Users\\izabe\\Desktop\\Cria_arq_prod\\Produtos.dat";
    Produto produto;
    int flag = 0;

    fp = fopen(nomearq, "rb");

    if (!fp) {
        printf("FILE ERROR!!! Arquivo nao encontrado\n");
        return;
    }

    printf("\nCodigo\t\tNome\t\tPreco\n");

    while (fread(&produto, sizeof(Produto), 1, fp)) {
        if(produto.codigo_produto == codigo_produto)
        {
            printf("%d\t\t%s\t\t%.2f\n\n", produto.codigo_produto, produto.nome_produto, produto.preco_produto);
            flag = 1;
        }
    }

    if (!flag) printf("\nProduto de codigo %d nao encontrado!\n\n", codigo_produto);

    fclose(fp);
}
