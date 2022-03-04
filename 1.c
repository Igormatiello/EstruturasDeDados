//1.  Implemente um programa para registrar pedidos de um restaurante. O programa deve ler
//o nome do cliente, descrição do pedido, e valor total e armazenar em uma struct. Depois,
//imprima os dados armazenados.


#include <stdio.h>
#include <stdlib.h>

typedef struct pedido {
char nome[50];
char descricao[100];
float valor;


}Pedido;


int main()
{



printf("\nInforme o nome do cliente: ");
scanf("%[^\n]s",pedido.nome);


printf("\nInforme o a descricao do pedido: ");
scanf("%[^\n]s",pedido.descricao);



printf("\nInforme o valor total: ");
scanf("%f",pedido.valor);




printf("\nNome: %s".pedido.nome);

printf("\nDescricao: %s",pedido.descricao);

printf("\nValor: %.2f",pedido.valor);

}


return 0;



}
