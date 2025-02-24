# Sistema de Controle de Transações de Compras

## Descrição

&emsp; Este projeto implementa um sistema para controle de transações de compras, utilizando a linguagem C. O programa permite que o usuário registre as transações de produtos, classificando-as como à vista ou à prazo, e calculando o valor total das compras de acordo com a forma de pagamento escolhida.

## Funcionalidades 

- O programa solicita ao usuário que informe o código do produto e o valor de cada transação. Dependendo do código do produto informado, a transação é classificada como pagamento à vista ou à prazo. O código do produto pode ser inserido como 'v' ou 'VV' para compras à vista, e 'p' ou 'P' para compras à prazo.

- A cada transação registrada, o sistema acumula os valores de pagamentos à vista e à prazo separadamente. O valor total das compras à vista e à prazo é calculado e exibido ao final, além do valor total geral de todas as compras.

- Além disso, o programa calcula o valor da primeira prestação das compras realizadas à prazo, assumindo que o pagamento será dividido em 3 parcelas.

## Estrutura do código
### Bibliotecas utilizadas
- <stdio.h>: Para operações básicas de entrada e saída de dados.
- <locale.h>: Para configurar o idioma do programa para o português brasileiro.

## Estrutura e variáveis
- O código utiliza um vetor para armazenar os valores das transações de produtos e variáveis para armazenar os totais das compras à vista e à prazo. Estruturas de repetição (for) e condicionais (if e else if) são usadas para processar os dados inseridos e realizar os cálculos.

## Como usar
1. Compile e execute o código.
   
2. Informe o código do produto ('v' ou 'VV' para compras à vista e 'p' ou 'P' para compras à prazo) e o valor da transação.
   
3. O programa continuará registrando as transações até que todas as 15 transações sejam inseridas.
   
4. Ao final, o sistema exibirá o valor total das compras à vista, o valor total das compras à prazo, o valor total geral de todas as compras e o valor da primeira prestação de compras à prazo.
 
