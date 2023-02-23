// questão 1:
//     int x, y, *p;
//     y = 0;
//     p = &y;
//     x = *p;         resposta: 4
//     x = 4;
//     (*p)++;
//     --x;
//     (*p) += x;
//questão 2:
//nt main(void) {
//int x, *p;
//x = 100;
//p = x;
//printf(“Valor de p = %p\tValor de *p = %d”, p, *p);
//}
//a)adivertência
//b)porque falta o & no x
//c)não
//d)
//nt main(void) {
//int x, *p;
//x = 100;
//p = &x;
//printf(“Valor de p = %p\tValor de *p = %d”, p, *p);
//}
//questão 3:
//a=11
//b= 20
//c=10
//d=50
#include<stdio.h> 
#include<stdlib.h> 
#include<math.h> 
void calcula_hexagono (float l, float * area, float * perimetro){ //função para calcular.
float s, p; 
 
p= pow(l,2); // calculo da exponenciação
s= sqrt (3); // calculo da raiz
*area= (3*p*s)/2; //calculo da área
*perimetro=l*6; //calculo do perímetro
}  
 
int main(){ 
float l; 
float *area=(float*)malloc(sizeof(float)); // alocação
if (area == NULL) 
{ 
    printf("ERRO!"); 
    exit(1);  
}
 
float *perimetro=(float*)malloc(sizeof(float)); 
if (perimetro == NULL) 
{ 
    printf("ERRO!"); 
    exit(1); 
}
 
printf("digite o valor de l:"); 
scanf("%f", &l); 
calcula_hexagono(l,area,perimetro); // chamada da função
printf("area:%f\n", *area); 
printf("perimetro:%f", *perimetro); 
free(area); 
free(perimetro); 
return 0; 
}
