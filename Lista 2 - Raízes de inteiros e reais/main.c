#include <stdio.h>
#include <stdlib.h>

//c)
int raizInteiro(int x){
    if (x == 0 || x == 1)
       return x;
    int i = 1, result = 1;
    while (result < x){
       if (result == x)
          return result;
       i++;
       result = i*i;
    }
    return i-1;
}

//d)
//Implementação da raiz quadrada de um real por meio do método de Newton-Raphson
float raizReal(float n){
   //Uso n como uma aproximação inicial
  float x = n;
  float y = 1;
  float e = 0.000001; //erro permitido no cálculo, 10^-6
  while(x - y > e)
  {
    x = (x + y)/2;
    y = n/x;
  }
  return x;
}

int main()
{
    //a)Calcular todos os bits do valor 53 como float
    // 01000010010101000000000000000000

    //b)Calcular todos os bits do valor 69 como float
    // 01000010100010100000000000000000

    //c)Crie uma função que calcule, por si só, a raiz quadrada inteira de um número inteiro
    //d)Crie uma função que calcule, por si só, a raiz quadrada [real] de um número [real]

    int x = 1, opcao, numi;
    float numf;
    while(x==1){
        printf("Escolha que modo quer obter a raiz quadrada\n\n");
        printf("1 - Por numero inteiro\n");
        printf("2 - Por numero real\n");
        printf("0 - Sair\n\n");
        printf("Digite a opcao:\n");
        scanf("%d",&opcao);

        switch(opcao){
            case 1:
                printf("\nDigite o numero que queira calcular a raiz quadrada inteira:\n");
                scanf("%d",&numi);
                printf("O resultado eh: %d\n\n", raizInteiro(numi));
                break;
            case 2:
                printf("\nDigite o numero que queira calcular a raiz quadrada real:\n");
                scanf("%f",&numf);
                printf("O resultado eh: %f\n\n", raizReal(numf));
                break;
        }
    }
}
