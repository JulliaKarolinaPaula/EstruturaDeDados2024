/*3o Periodo ADS: JULLIA KAROLINA DE PAULA*/ 
/*2a Atividade - QUESTÃO 2*/

#include <stdio.h>
#include <ctype.h>

struct Funcionario {
     char nome[100], cargo[100];
     double salarioBase, beneficios, descontos, salarioLiquido, mediaSalarial;

     void ler(){
        printf("Informe o nome do funcionario: \n");
        scanf("%[^\n]%*c", nome);
        
        printf("Informe o cargo do funcionario: \n");
        scanf("%[^\n]%*c", cargo);

        printf("Informe o salario base do funcionario: \n");
        scanf("%lf%*c", &salarioBase);

        printf("Informe o valor do total de beneficios do funcionario: \n");
        scanf("%lf%*c", &beneficios);

        printf("Informe o valor do total de descontos do funcionario: \n");
        scanf("%lf%*c", &descontos);

        salarioLiquido = salarioBase + beneficios - descontos;
     }
     void imprimir(){
      printf("Nome: %s\n", nome);
      printf("Cargo: %s\n", cargo);
      printf("Salario Base: R$%.2lf\n", salarioBase);
      printf("Total de Beneficios: R$%.2lf\n", beneficios);
      printf("Total de descontos: R$%.2lf\n", descontos);
      printf("O Salario liquido e R$%.2lf\n", salarioLiquido);
      printf("\n");
     }
};
struct Loja {
      Funcionario funcionarios[10];
      int j = 0, func_cadast = 0;

      void ler(){
        char x = 'S';
        while(x == 'S'){
          funcionarios[j].ler();
          j++;
          func_cadast++;
          if(j == 10){
            break;
          }
          printf("Deseja cadastrar outro funcionario? S/N\n");
          scanf("%c%*c", &x);
          x = toupper(x);
          }
      }
      void imprimir(){
          printf("------------------------------------------\n");
          printf("Ha %d funcionarios(s) cadastrado(s).\n", func_cadast);
          printf("------------------------------------------\n");

          for(int i = 0;i<j;i++){
            funcionarios[i].imprimir();
          }
      }
      void salario_maior(){
            double salarMaior = 0;
            int funcMaior = 0;

            for(int i = 0;i < j;i++){
                  if(funcionarios[i].salarioLiquido  > salarMaior){
                        salarMaior = funcionarios[i].salarioLiquido;
                        funcMaior = i;
                  }
            }
            printf("O funcionario com o maior salario e ");
              funcionarios[funcMaior].imprimir();
      }
      void media(){
            double total_sal = 0, media_sal = 0;
            int total_func = 0; 

            for(int i = 0;i < j;i++){
                 total_sal += funcionarios[i].salarioLiquido; 
                 total_func++;
            }
            for(int i = 0;i < j;i++){
                  media_sal = total_sal/total_func;
            }

            printf("A media salarial dos funcionarios e de R$ ");
            printf("%.2lf\n", media_sal); 
      }
};
int main(){
      Loja a;

      char repeat = 'S';
      do{
            
            int e;
            printf("ESCOLHA A OPCAO DESEJADA:\n");
            printf("1: Cadastrar um funcionario.\n");
            printf("2: Visualizar lista de funcionarios cadastrados.\n");
            printf("3: Ver media salaria entre os funcionarios cadastrados.\n");
            printf("4: Ver o funcionario com o maior salario entre os cadastrados.\n");
            printf("5: Sair do programa.\n");

            printf("Opcao: ");
            scanf("%d%*c", &e);

            switch (e)
            {
            case 1:
            a.ler();
                  break;
            case 2:
            a.imprimir();
                  break;
            case 3:
            a.media();
                  break;
            case 4:
            a.salario_maior();
                  break;
            case 5:
            return 0;
            }

            printf("Voltar ao menu iniciar? S/N\n");
            scanf("%c%*c", &repeat);
            repeat = toupper(repeat);

      }while(repeat == 'S');
     
      return 0;
}
