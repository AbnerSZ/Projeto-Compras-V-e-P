#include <stdio.h>  //Biblioteca para incluir comandos/operações básicas de entrada e saída de dados
#include <locale.h>  //Biblioteca para incluir configurações padrões regionais

int main()  //Inicializar o programa com uso da função "main"
{
    setlocale(LC_ALL, "Portuguese");  //Comando para incluir a gramática BR no console e na programação

  //Declaração de variáveis
    int i;  //"i" para usar no laço de repetição "for"
    float tran[15];  //vetor "tran" para armazenar os valores das transações
    float pagamento_vista = 0, pagamento_prazo = 0;  //variáveis para calcular os pagamentos
    char x;  //"x" para armazenar o código (em caractere) do produto

  //Entrada de dados dos pagamentos à vista e à prazo
    for (i = 0; i < 15; i++){
        printf("\nInforme o código do produto: ");  //Mensagem para o usuário informar o código do produto
        scanf(" %c", &x);  //Armazenar o código na variável "x"

        printf("Informe o valor da transação desse produto: ");  //"printf" para o usuário informar o valor da transação do produto
        scanf("%f", &tran[i]);  //Armazenar o valor da transação no vetor "tran"

  //Cálculos dos pagamentos
        if (x == 'v' || x == 'VV'){  // "if" para criar uma condicional para o cálculo do valor à vista
            pagamento_vista = pagamento_vista + tran[i];  //Colocar o resultado do cálculo na variável "pagamento_vista"
            }

        else if (x == 'p' || x == 'P'){  //"Else" para criar uma outra condicional para o cálculo do valor à prazo
            pagamento_prazo = pagamento_prazo + tran[i];  //Colocar o resultado do cálculo na variável "pagamento_prazo"
            }
        }

  //Saída de dados
    printf("\nO valor total das compras à VISTA é de R$ %.2f\n", pagamento_vista);
    printf("\nO valor total das compras à PRAZO é de R$ %.2f\n", pagamento_prazo);
    printf("\nO valor total das compras efetuadas é de R$ %.2f\n", pagamento_vista + pagamento_prazo);
    printf("\nO valor da primeira prestação à PRAZO é de R$ %.2f\n", pagamento_prazo/3);

 return 0;  //"return 0" para finalização "correta" do programa
}
