#include<stdio.h>
#include<stdlib.h>
typedef struct funcionario{
char nome[50];
float salario;
int identificador;  //struct para pegar as informações dos funcionarios
char cargo[50];
}Funcionario;


void imprima(Funcionario *x, int quant){ // função para imprimir funcionarios, que utiliza o ponteiro para pegar as informações dos funcionarios e a variavel quant que representa a quantidade de funcionarios.
int c;
for(c=0;c<quant;c++){              // for que passa pela quantidade de funcionarios informado no int main.
    printf("nome: %s\n", x[c].nome);            //pega todas as informações passando por cada funcionario utilizando o contador.
    printf("salario: %f\n", x[c].salario);                  
    printf("identificacao: %d\n", x[c].identificador);
    printf("cargo:%s\n", x[c].cargo);
}
}
void maior(Funcionario *x, int quant){  //função para identificar o funcionário que tem o maior salario.
int c,j;
float maiors=0;// variável que recebe o maior salario foi inicializada com zero. 

for(c=0;c<quant;c++){
    if(maiors< x[c].salario){//como a variável maior foi inicializada com zero se o salário for maior que a variável maior essa variável vai receber o valor do salário   
        maiors=x[c].salario;
    j=c; //variável que guarda o número do funcionário com maior valor. 
    }

}

printf("maior salario:%f\n", maiors);  //printf que imprime o maior salário.
printf("cargo:%s\n", x[j].cargo);
}

void menor(Funcionario *x, int quanto){ //função para imprimir o menor salário.
int c,j;
float menors=x[0].salario;   //menor salário vai receber o primeiro salário para ser comparado aos outros informados pelos funcionários
for(c=0;c<quanto;c++){//for de commparação de salarior. 
    if(menors> x[c].salario){// se o primeiro salário informado for maior que o proximo salario então a variável menors recebe o salario menor.
        menors=x[c].salario;
      j=c;  // variável que guarda o número do funcionário.
    }
}

printf("menor salario:%f\n", menors);// printf para imprimir o menor salário.
printf("cargo:%s\n", x[j].cargo);
}
void trocar(Funcionario *x, int quant ){  //função de troca de salários.
int c, ident;
float novo;
  printf("informe a identificacao:\n");
 scanf("%d", &ident);// scanf que le a identificação do funcionario que deseja mudar o salário.
 printf("informe novo salario:\n");
 scanf("%f", &novo);// scanf que lê o novo salário.
     for(c=0;c<quant;c++){// for que passa por todos os funcionários.
  if (ident== x[c].identificador){ // se o identificador informado for igual a algum informado anteriormente o novo salário é colocado no lugar do salario antigo. 
   x[c].salario=novo;
   }
  }
 }

int main(void){

int quanf, c, tro=1;
printf("quantos funcionarios:");
scanf("%d", &quanf);
Funcionario *info=(Funcionario*) malloc(quanf*sizeof(Funcionario)); // alocação dinamica de variável do tipo funcionario para pegar as informações dos funcionarios.
if (info==NULL){
    printf("erro!");
    exit(1);
}   
for(c=0;c<quanf;c++){  // for que pega as informções de todos os funcionários.
    printf("digite nome:");
    scanf(" %[^\n]", info[c].nome);
    printf("digite salario:");
    scanf("%f", &info[c].salario);
    printf("digite identificador:");
    scanf("%d", &info[c].identificador);
    printf("digite cargo:");
    scanf(" %[^\n]", info[c].cargo);
}
imprima(info, quanf);
maior(info, quanf);             //chamada das funções.
menor(info, quanf);
do{
printf("deseja trocar o salario?\n");
printf("1-sim\n");
printf("2-nao\n");         // do utilizado para saber se o salário precisa ser trocado. 
scanf("%d", &tro);

if (tro== 1){   // se precisar se trocado o salário a função troca é usada e as outras funções sao repetidas.
trocar(info, quanf);
imprima(info, quanf);
maior(info, quanf);
menor(info, quanf);
}}while(tro!=2);// se não precisar trocar o salário o do é finalizado
free(info);
return 0;
}
