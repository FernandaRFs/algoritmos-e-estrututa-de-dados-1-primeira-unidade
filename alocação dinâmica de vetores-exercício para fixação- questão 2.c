#include<stdio.h>
#include<stdlib.h>

int main(){
int  nalu,c,i,n, cont=1;
float certo=0, pas=0;
printf("digite numero de alunos:");
scanf("%d", &nalu);  // scanf pra receber o número de alunos.
printf("digite o numero de questoes:");
scanf(" %d", &n);// scanf para receber o número de questões.
char *gabarito= (char*)malloc(n*sizeof(char));// alocação para as respostas da prova.
if(gabarito==NULL){
    printf("erro");
    exit(1);
}
char *resposta=(char*)malloc(n*sizeof(char));//alocação para as respostas dos alunos.
if(resposta==NULL){
    printf("erro");
    exit(1);
}
float *nota=(float*)malloc(nalu*sizeof(float)); //alocação para a nota.
if(nota==NULL){
    printf("erro");
    exit(1);
}
printf("digite as respostas do gabarito:");
for (c=0;c<n;c++){
scanf(" %s", &gabarito[c]);  //for para receber as respostas da prova.
}
for(i=0;i<nalu;i++){
printf("digite reapostas do aluno %d:", cont); //for para receber as respostas dos alunos.
cont=cont+1; //variável para ser usada no printf no número do aluno.
 for(c=0;c<n;c++){
    scanf(" %s", &resposta[c]);    //for para receber as respostas dos alunos.
    if(resposta[c]==gabarito[c]){
certo=certo+1;//if para saber quantas questões o aluno acertou.
    }
 }nota[i]= (certo*10)/n; //conta para guardar a nota do aluno na variael *nota.
 certo=0;// certo recebe 0 para ser usada no próximo aluno.
}
for(c=0;c<nalu;c++){
    if (nota[c]>=6){  //for para saber a quantidade de alunos que passaram.
        pas=pas+1;
    }
}cont=1;//cont é inicializado para ser usado no próximo printf.
for (c=0;c<nalu;c++){
    printf("nota do aluno %d: %f\n", cont, nota[c]);
    cont=cont+1;
}
printf("porcentagem de alunos aprovados:%f\n", (100*pas)/nalu);
}
