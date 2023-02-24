#include<stdio.h>
#include<stdlib.h>

int main(){
int n,c,p=1,qf=0,qm=0,qf1=0,qm1=0;
float por, por1;
printf("numero de pessoas entrevistadas:");
scanf("%d", &n);// scanf que lê o numero de entrevistados.
int *sexo=(int*)malloc(n*sizeof(int));// alocação usando a quantidade de entrevistados para guardar o sexo. 
if (sexo==NULL){
    printf("erro");
    exit(1);
}
int *opniao=(int*)malloc(n*sizeof(int));// alocação para guarda as opniões.
if (opniao==NULL){
    printf("erro");
    exit(1);
}
   printf("sexo:\n");
   printf("1-feminino\n");
   printf("2-masculino\n");// printfs que informam como responder.
   printf("opniao:\n");
   printf("1-gostou\n");
   printf("2-nao gostou\n");
   for(c=0;c<n;c++){   // for que passa pelo número de intrevistados.
printf("sexo da %d pessoa:", p);
scanf("%d", &sexo[c]);
printf("opniao da %d pessoa:", p);
scanf("%d", &opniao[c]);
if(sexo[c]==1){
    qf1=qf1+1;   //variável que guarda a quantidade de pessoas do sexo feminino.
}if(sexo[c]==2){
    qm1=qm1+1; //variável que guarda a quantidade de pessoas do sexo masculino.
}

if(sexo[c]==1 && opniao[c]==1){
    qf=qf+1;  // variável que guarda a quantidade de mulheres que disseram que gostou.
}
if(sexo[c]==2 && opniao[c]==2){
    qm=qm+1;  // variável de homens que disseram que não gostou.
}
p=p+1;// variável usada no printf pra informar o número da pessoa.
   }
   por=(qf*100)/qf1;// porcentagem de mulheres que gostaram.
   por1=(qm*100)/qm1;// porcentagem de homens que não gostaram.
printf("quantidade de mulheres que gostaram:%f\n", por);
printf("quantidade de homens nao gostaram:%f", por1);
free(sexo);
free(opniao);
return 0;
}
