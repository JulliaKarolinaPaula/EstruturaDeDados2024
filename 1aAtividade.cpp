//3º Período ADS - Jullia Karolina e Andreia Carvalho

#include <stdio.h>
#include <ctype.h>

  struct Livro{
    char titulo[100], autor[100];
    int paginas;

      void ler(){
        printf("Digite o titulo do livro: \n");
        scanf("%[^\n]%*c", titulo);
        
        printf("Digite o nome do autor do livro: \n");
        scanf("%[^\n]%*c", autor);
        
        printf("Digite o numero de paginas do livro: \n");
        scanf("%d%*c", &paginas);
      }
      void imprimir(){
        printf("Titulo: %s\n", titulo);
        printf("Autor: %s\n", autor);
        printf("Total de paginas: %d\n", paginas);
        printf("\n");
      }
  };

  struct Biblioteca{
    Livro livros[10];
    int j = 0, book_cad=0;;

    void ler(){
      char x = 'S';
      while(x == 'S'){
        livros[j].ler();
        j++;
        book_cad++;
        if(j == 10){
          break;
        } 
        printf("Deseja cadastrar outro livro? S/N\n");
        scanf("%c%*c", &x);
        x = toupper(x); 
      }
    }
    void imprimir(){
      printf("------------------------------------------\n");
      printf("Ha %d livro(s) cadastrado(s).\n", book_cad);
      printf("------------------------------------------\n");
      for(int i = 0;i<j;i++){
        livros[i].imprimir();
      }
    }
    void maior(){
      int numPag = 0;
      int livroMaior = 0;
      for(int i = 0;i<j;i++){
        if(livros[i].paginas > numPag){
          numPag = livros[i].paginas;
          livroMaior = i;
        }
      }
      printf("O livro com maior numero de paginas e ");
      livros[livroMaior].imprimir(); 
    }
  };
    
  int main(){
    Biblioteca a;
    a.ler();
    a.imprimir();
    a.maior();

    return 0;
  }
