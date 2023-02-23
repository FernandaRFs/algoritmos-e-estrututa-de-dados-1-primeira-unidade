#include<stdio.h>
#include<stdlib.h>

typedef struct aluno{
int mat;
char nome[81];           //struct de informações de alunos
float nota[3]; 
float media;
}Aluno;

typedef struct turma{
char id;
int vagas;               //struct de informações sobre a turma
Aluno alunos[3];
}Turma;

void criar_turma(Turma *tur, int quantt){ //função para a criação da turma
if (quantt<3){                        //(explicação de quantt na linha 112) quando quantt ficar com o valor 2 atinge o número maximo de turmas.
printf("digite o id:\n");
scanf(" %[^\n]s", &tur[quantt].id);}   //o scanf vai escrever o id da turma na variável tur.id de tipo Turma, acessando o lugar certo usando o número quantt do vetor. 
else{printf("maximo de turmas!\n");}
}


void matricular_aluno(Turma *tur){ //função para matricular alunos
    int c,j, vaga=0,cont=0;
    char id2;
   if(tur->vagas<3){     //tur->vagas foi inicializada no main com zero.
      printf("matriculando aluno...\n");
    printf("digite o id da turma:\n");
    scanf(" %c", &id2);// id2 é uma variavel pra comparar com o id da turma para ter certeza que esse id existe e para colocar as informações no lugar certo.
for(c=0;c<3;c++){  // um for para entrar na turma certa.
    if(id2==tur[c].id){ // if que só vai ser usado se existir um id correspondente.
vaga=tur[c].vagas;  //vaga é uma variável criada para receber o número de vagas
   for(j=vaga;j<=vaga;j++){// for para acessar as vagas restantes para matricula. como vaga vai receber sempre 1 (linha 41) então nunca será acessada a mesma variável 
    printf("digite nome do aluno:");
    scanf(" %[^\n]", tur[c].alunos[j].nome);// scanf que acessa a posição do aluno para ser colocado o nome.
    printf("digite o numero da matricula:");
    scanf(" %d", &tur[c].alunos[j].mat);// scanf que acessa a posição do aluno para ser colocada a matrícula
    printf("aluno matriculado!\n");
    tur[c].vagas=tur[c].vagas+1;  // as vagas das turmas vão sempre receber mais 1.
    cont=cont+1;// contador para saber se o if foi inicializado, se não significa que o id não existe.
    }
}
}if(cont==0){
    printf("id nao existe\n");
    cont=0;            // cont sempre recebe 0 para ser usado novamente.
}}else{printf("maximo de alunos!\n");}  // caso o número de vagas máxima seja utilizada esse else é iniciado.  
}
void lancar_notas(Turma *tur, int quantt){  // função para lançar notas.
int c,j,i, cont=0;
char id2;
printf("lancando notas...\n");
printf("digite id da turma:\n");
scanf(" %c", &id2); // explicação na linha 31. 
for(c=0; c<quantt; c++){ // for para acessar a turma. 
if(id2==tur[c].id){  //if de comparação de id para ver se existe. 
    for(j=0;j<tur[c].vagas;j++){ // for para acessar o aluno. 
        printf("matricula: %d    nome: %s\n ", tur[c].alunos[j].mat, tur[c].alunos[j].nome);// printf que mostra a matrícula e o nome do aluno. 
       for(i=0;i<3;i++){  // for para acessar as notas.
        printf("digite nota:");
        scanf(" %f", &tur[c].alunos[j].nota[i]); //scanf que le as notas.
        tur[c].alunos[j].media= tur[c].alunos[j].media + tur[c].alunos[j].nota[i];} // as notas vão ser sempre somadas 
    }cont=cont+1; // variável pra saber se o if foi inicializado.
}
}if(cont==0){
    printf("id nao existe\n");// se o if não for inicializado o else é inicializado.
    cont=0; // cont recebe 0 para ser usada novamente.
}
}
void imprimir_aluno(Turma *tur, int quantt){ // função de imprimir aluno.
int c,j,cont=0;
char id2;
printf("imprimindo alunos...\n");
printf("digite id da turma:\n");
scanf(" %c", &id2);// explicação na linha 31.
for(c=0; c<quantt; c++){// for que passa pelas turmas existentes.
if(id2==tur[c].id){ // if pra saber se o id existe. 
    for(j=0;j<tur[c].vagas;j++){// for pra passar ppor todos os alunos.
        printf("matricula: %d    nome: %s\n ", tur[c].alunos[j].mat, tur[c].alunos[j].nome);
        printf("media: %f\n", tur[c].alunos[j].media/3);// printf que mostra a media. a soma que esta guardada na media vai ser dividida por 3 que é o número de notas. 
    }cont=cont+1;
}
}if(cont==0){
    printf("id não existe\n"); //explicação da linha 64 até a 68.
    cont=0;
}
}

int main(){
int n, c,i,j, quantt=0;
Turma *tur=(Turma*)calloc(3,sizeof(Turma));  // alocação de um ponteiro para acessar a struct turma. 
if(tur==NULL){
    printf("erro");
    exit(1);
}
for(c=0;c<3;c++){
    tur[c].vagas=0;
    for(j=0;j<3;j++){                   // for utilizado para zerar as variaveis de vagas, variaveis de média e nota
       tur[c].alunos[j].media=0;
        for(i=0;i<3;i++){
            tur[c].alunos[j].nota[i] = 0;
            
        }
    }
}
do{
printf("MENU:\n1-Criar turma\n2-Listar turmas\n3-Matricular aluno\n4-Lancar notas\n5-Listar alunos\n6-Sair\n");
scanf(" %d", &n);
if (n==1){ // if para acessar o menu.
criar_turma(tur, quantt);  // chamada da função da linha 17
quantt=quantt+1; // variavel utilizada para saber a quantidade de turmas cadastradas
}

if(n==2){
printf("listando turmas...\n");
 for(c=0;c<quantt;c++){
    printf("%c: existem %d vagas\n", tur[c].id, 3-tur[c].vagas);// pra saber a quantidade de vagas restantes eu subtrai o máximo pela quantidade de vagas ocupadas.
 }
 }
 
 
 if(n==3){
matricular_aluno(tur); // chamada da função da linha 25.
}

if(n==4){
lancar_notas(tur, quantt); //chamada da função da linha 50.
}
if(n==5){
    imprimir_aluno(tur,quantt); // chamada da função da linha 71.
}
}while(n!=6);
printf("obrigado por usar esse programa");
free(tur);
return 0;
}
