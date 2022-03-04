#include <stdio.h>
#include <stdlib.h>

typedef struct ponto {
int x;
int y;


}Ponto;


typedef struct triangulo {


Ponto pontos[3];


}Triangulo;


int main()
{

Triangulo t;

t.pontos[0].x=0;
t.pontos[0].x=0;
t.pontos[1].x=5;
t.pontos[1].x=0;
t.pontos[2].x=1;
t.pontos[2].x=5;


for (int i=0; i<3; i++){



    printf("x: %d, y: %d\n",t.pontos[i].x,t.pontos[i].y);

}


return 0;



}
