#include <stdio.h>
#include <stdlib.h>

void verificaVetor(int vx, int vy, int ux, int uy, int wx, int wy){
    //verificar se é base vetorial
    if(vx == (vx*ux + vy*wx) && vy == (vx*uy + vy*wy)){
        //verificar se é linearmente independente
        if(ux == ux*wx && uy == uy*wy)
            printf("\nNao eh base vetorial\n");
        else printf("\nEh base vetorial\n");
    }else
        printf("\nNao eh base vetorial\n");

    //verificar se é Ortogonal
    //produto escalar entre u.w = 0 = ortogonal
    if(( ux*wx + uy*wy ) == 0)
        printf("Eh Ortogonal\n");
    else
        printf("Nao eh Ortogonal\n");

    /*verificar se é Ortonormal
    Todos os vetores precisam ser ortogonais entre si
    e todos os vetores são unitários, vamos verificar
    isso com uma propriedade do produto escalar que diz
    que o produto escalar de dois vetores unitários é 1
    ou seja, vetor unitário também*/

    if(( ux*wx + uy*wy ) == 0){
        if( ( ux*ux + uy*uy ) == 1 && ( wx*wx + wy*wy) == 1 )
            printf("Eh Ortonormal\n\n");
        else
            printf("Nao eh Ortonormal\n\n");
    }else
        printf("Nao eh Ortonormal\n\n");
}

int main(){
    int x=1,vx, vy, ux, uy, wx, wy, continuar;
    while(x==1){
        printf("Programinha pra dizer se eh base, se eh ortonormal e se eh ortogonal\n\n");
        printf("Digite as coordenadas da base\n\n");
        printf("Digite o Vx\n");
        scanf("%d",&vx);
        printf("Digite o Vy\n");
        scanf("%d",&vy);
        printf("\nDigite as coordenadas do vetor 1\n\n");
        printf("Digite o Ux\n");
        scanf("%d",&ux);
        printf("Digite o Uy\n");
        scanf("%d",&uy);
        printf("\nDigite as coordenadas do vetor 2\n\n");
        printf("Digite o Wx\n");
        scanf("%d",&wx);
        printf("Digite o Wy\n");
        scanf("%d",&wy);
        verificaVetor(vx,vy,ux,uy,wx,wy);
        printf("Deseja continuar executanto? 1-Sim, 0-Nao\n");
        scanf("%d",&continuar);
        if(continuar==0)
            break;
        printf("\n");
    }
}
