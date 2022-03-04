#include <stdio.h>
#include <stdlib.h>



typedef struct aluno Aluno;

struct aluno
{



    char nome[30];
    int RA;
    float coeficiente;





};



void imprimeDados(Aluno aluno){

  printf("\n\nNome: %s",aluno.nome);

        printf("\nRA: %d", aluno.RA);

        printf("\nCoeficiente: %f.4\n\n",aluno.coeficiente);



}


Aluno cadastraAluno(int i){


Aluno a;
 setbuf(stdin,NULL);
        printf("Informe o nome do aluno %d: ",i+1);
        scanf("%[^\n]s",a.nome);


        printf("Informe o RA: ");
        scanf("%d",&a.RA);


        printf("Informe o coefieciente: \n");
        scanf("%f",&a.coeficiente);

return a;

}


int main()
{


    int i,n=3;



    Aluno alunos[n];




    for (i=0; i<n; i++)
    {


        setbuf(stdin,NULL);
      alunos[i]=cadastraAluno(i);
printf("\n%d\n",i);

    }




    printf("\nDados Informados\n");
    for (i=0; i<n; i++)
    {
       imprimeDados(alunos[i]);



    }



return 0;



}
