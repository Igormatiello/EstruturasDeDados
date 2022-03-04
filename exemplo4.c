#include <stdio.h>
#include <stdlib.h>



typedef struct aluno Aluno;

struct aluno
{



    char nome[30];
    int RA;
    float coeficiente;





};


int main()
{


    int i,n=3;



    Aluno alunos[n];




    for (i=0; i<n; i++)
    {

        setbuf(stdin,NULL);
        printf("Informe o nome do aluno: ");
        scanf("%[^\n]s",alunos[i].nome);


        printf("Informe o RA: ");
        scanf("%d",&alunos[i].RA);


        printf("Informe o coefieciente: \n");
        scanf("%f",&alunos[i].coeficiente);



    }




    printf("\nDados Informados\n");
    for (i=0; i<n; i++)
    {
        printf("\n\nNome: %s",alunos[i].nome);

        printf("\nRA: %d", alunos[i].RA);

        printf("\nCoeficiente: %f.4\n\n",alunos[i].coeficiente);



    }



return 0;



}
