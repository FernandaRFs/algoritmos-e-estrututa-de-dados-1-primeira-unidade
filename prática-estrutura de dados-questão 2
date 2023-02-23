#include<stdio.h>
#include<stdlib.h>
 typedef struct pessoa{
char nome[50];
int documento;   //struct pra guardar as informações das pessoas
int idade;
 }Pessoa;
 
       void preencher(Pessoa *x, int n){  // função para preencher as informações
        int c, cont=1;
        for(c=0;c<n;c++){ //for que usa a variável n(número de pessoas informados na função main) para passar pelo número de pessoas fornecido
            printf("digite o nome da pessoa %d:", cont);
            scanf(" %[^\n]s", x[c].nome);//c corresponde au número do contador que vai passar por todas as pessoas.
            printf("digite o documento da pessoa %d:", cont);
            scanf(" %d", &x[c].documento);
            printf("digite a idade da pessoa %d:", cont);
            scanf(" %d", &x[c].idade);
            cont=cont+1;// variável que vai ser usado no printf da linha 12 pra dizer o número da pessoa.
        }

       }

       void imprimir(Pessoa *x, int n){ //função de imprimir as informações
        int c;
        for(c=0;c<n;c++){
            printf("nome: %s   documento: %d    idade: %d\n", x[c].nome, x[c].documento, x[c].idade);
        }
       }

       void maior(Pessoa *x, int n){ //função para saber a pessoa com maior idade.
        int c, mair=0, j=0;
        for(c=0;c<n;c++){
            if(mair<x[c].idade){
                mair=x[c].idade;  //for que passa por todas as idades e guarda aqui a maior.
                j=c;//variável que guarda o número da pessoa com maior salário para imprimir no próximo printf.
            }
        }
         printf("pessoa com a maior idade: %s    idade: %d\n", x[j].nome, mair);
       }

       void menor(Pessoa *x, int n){// função para saber a pessoa com menor idade.
        int c,menor=x[0].idade, j=0;  //variável menor inicializada com a primeira idade para comparação.
        for(c=0;c<n;c++){
            if(menor>x[c].idade){
                j=j+1;
                menor=x[c].idade;// a menor idade vai ser guardada aqui utilizando a mesma logica da maior.
            }
        }
        printf("pessoa com a maior idade: %s    idade: %d\n", x[j].nome, menor);

       }
       void trocar_idade(Pessoa *x, int n){//função de troca de idades.
        int c, doc;
        printf("digite documento da pessoa que deseja mudar a idade:");
        scanf(" %d", &doc);
        for(c=0;c<n;c++){
            if(doc==x[c].documento){// o documento digitado será comparado ao documento fornecido anteriormente para saber qual a idade deve ser trocada.
                printf("digite nova idade:");
                scanf(" %d", &x[c].idade);//nova idade digitada para sibstituir a idade antiga
            }
        }

       }
    


 int main(){
int n, tro=0;
    printf("quantas pessoas quer cadastrar:"); 
    scanf(" %d", &n);// lê a quantidade de pessoas para pegar as informações.
Pessoa *gente=(Pessoa*)malloc(n*sizeof(Pessoa));// alocação do ponteiro.
if(gente==NULL){
    printf("erro");
    exit(1);
}
 preencher(gente, n);
 imprimir(gente, n);  
 maior(gente, n);         //chamada das funções
 menor(gente, n);
do// do para trocar a idade.
{
   printf("deseja trocar a idade?\n");
   printf("1-sim\n");
   printf("2-nao\n");
   scanf(" %d", &tro);
   if(tro==1){    //if para que se for digitado '1' a idade seja trocada e as outras coisas sejam atualizadas.
   trocar_idade(gente, n);
   imprimir(gente, n);  
   maior(gente, n);  
   menor(gente, n);}
}while (tro!=2);

free(gente);
return 0;
 }
