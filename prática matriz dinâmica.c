
#include<stdio.h> 
#include<stdlib.h> 
   
  int main(){ 
int linha, coluna,c,j; 
int terra=0; 
   
  scanf(" %d %d", &linha, &coluna); //leitura da quantidade de linhas e colunas. 
  if(linha<1 || coluna>1000){ 
    printf("erro"); 
  }else{ 
   
  char **mat= (char**)malloc(linha*sizeof(char)); //alocação das linhas da matriz. 
  if(mat==NULL){ 
    printf("erro"); 
    exit(1); 
  } 
  for(c=0;c<linha;c++){ 
    mat[c]=(char*)malloc(coluna*sizeof(char)); //alocação das colunas da matriz. 
    if(mat[c]==NULL){ 
      printf("erro"); 
      exit(1); 
    } 
  } 
  for(c=0;c<linha;c++){ //for pra ser digitada as linhas com agua e terra. 
    for(j=0;j<coluna;j++){ 
    scanf(" %c", &mat[c][j]); 
  }} 
  for(c=0;c<linha;c++){ 
    for(j=0;j<coluna;j++){ 
      if(mat[c] [j]== '#'){ //se tiver um # então o if vai ser inicializado e terra vai ganhar mais um, dando a quantidade de # digitados. 
        terra=terra+1; 
      } 
    } 
  } 
  printf("%d terras",terra); // no fim do programa terra vai ter a quantidade de # digitados. 
  for (c=0;c<linha;c++){ 
    free(mat[c]); 
  } 
  free(mat);} 
  return 0; 
}
