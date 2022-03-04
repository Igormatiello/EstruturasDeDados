#include <stdio.h>
#include <stdlib.h>



typedef struct aluno Aluno;

struct aluno {



    char nome[30];
    int RA;
    float coeficiente;





};


int main()
{


   Aluno aluno_1,aluno_2;

   printf("Informe o nome do aluno: ");
   scanf("%[^\n]s",aluno_1.nome);


   printf("Informe o RA: ");
    scanf("%d",&aluno_1.RA);


     printf("Informe o coefieciente: ");
    scanf("%f",&aluno_1.coeficiente);

    printf("Nome: %s\n",aluno_1.nome);

    printf("RA: %d\n",aluno_1.RA);

    printf("Coeficiente: %.4f\n",aluno_1.coeficiente);



    Aluno aluno_3={"Maria", 456, 0.925};

    printf("\n\nNome do aluno 3: %s",aluno_3.nome);

    printf("\nRA: %d", aluno_3.RA);
    printf("\nCoeficiente: %f.4",aluno_3.coeficiente);



    aluno_2=aluno_3;

     printf("\n\nNome do aluno 2: %s",aluno_2.nome);

    printf("\nRA: %d", aluno_2.RA);
    printf("\nCoeficiente: %f.4",aluno_2.coeficiente);

}
