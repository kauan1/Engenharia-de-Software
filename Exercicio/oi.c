#include<stdio.h>
//Este é um programa de calculadora divididas em varias funções e
//só sai do programa quando o usuário escolher a opção de saída

void som(float a, float b);
void sub(float a, float b);
void mul(float a, float b);
void div(float a, float b);

int main(){
    float x, y;
    int n;
    printf("Digite os valores:\n");
    scanf("%f %f",&x,&y);
    
    printf("Digite a opção desejada:\n");
    printf("0 - Soma\n");
    printf("1 - Subtração\n");
    printf("2 - Multiplicação\n");
    printf("3 - Divisão \n");
    printf("4 - Sair\n");
    scanf("%d",&n);
    
    switch
    case 0:
        
        break;
    case 1:
        
        break;
    case 2:
        
        break;
    case 3:
        break;
    case 4:
    
        break;
    }
    return 0;
}

void som (float a, float b){
printf ("Resultado = %f", a+b);
}

void sub(float a, float b){
    printf ("Result = %.2f", a-b);
}

void mul(float a, float b)
    {
    printf ("Resultado = %f", a*b);
    }
