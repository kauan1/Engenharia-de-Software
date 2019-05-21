#include<stdio.h>
//Este é um programa de calculadora divididas em varias funções e
//só sai do programa quando o usuário escolher a opção de saída

void som(float a, float b);
void sub(float a, float b);
void mul(float a, float b);
void div(float a, float b);

int main(){
    float x, y;
    printf("Digite os valores:\n");
    scanf("%f %f",&x,&y);
    
    
    
    
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
