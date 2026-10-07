Respostas capítulo 3
Questão 01. 
a) while (Pré-testado): A condição é avaliada antes de executar o bloco de código. Se a condição for falsa na primeira verificação, o bloco não é executado nenhuma vez (mínimo de 0 execuções).   
do-while (Pós-testado): O bloco de código é executado primeiro e a condição é avaliada ao final. Garantidamente, o bloco será executado no mínimo 1 vez, mesmo que a condição seja falsa. 

  
b)for: Ideal quando o número de iterações é conhecido previamente 
while: Ideal para iterações condicionais com número indeterminado de passos, onde o laço só deve rodar se uma condição inicial for válida 
do-while: Ideal para menus de opções e validação de entradas do usuário, onde o bloco precisa rodar pelo menos uma vez antes de testar a validade

c)Trata-se de um erro de lógica, o ponto e vírgula faz com que o laço tenha um corpo vazio. Se condicao for verdadeira, o programa entrará num laço infinito travado, executando continuamente a verificação sem alterar o estado das variáveis nem avançar para as linhas seguintes.


Questão 02. 
a) Ocorre um erro de compilação porque a variável soma foi declarada dentro do bloco interno do laço for. O escopo de soma está restrito àquele bloco. Ao tentar acessá-la fora do laço no printf, ela não existe para o compilador.  

 b)Como int soma = 0; está dentro do laço, a cada iteração a variável soma é destruída e recriada zerada. O valor acumulado das iterações anteriores é perdido, resultando apenas em i * i da iteração corrente.  


Questão 03.
a) 36	18	9	4	2	1

b)ch + 1: Exibe o caractere posterior na tabela ASCII'

Parênteses em (ch = getch()): O operador de comparação != tem precedência maior que o operador de atribuição =. Sem os parênteses, getch() != 'X' seria avaliado primeiro (retornando 0 ou 1), e esse valor lógico seria atribuído a ch.

c) Dentro do corpo do laço for (;;) , pode-se colocar uma condição (if) e executar a instrução break; ou return; para sair programaticamente sem encerrar o processo abruptamente.


Questão 04. 
a) Ação do break: Interrompe imediatamente o laço de repetição no qual está contido, saltando a execução para a primeira instrução após a estrutura do laço.   

b) Ação do continue: Interrompe a iteração corrente e salta as instruções restantes do bloco. No laço for, o controle vai diretamente para a expressão de incremento/atualização do cabeçalho.

c) Laços Aninhados: O comando break interrompe apenas o laço interno onde ele foi executado, retornando o controle ao laço externo.


Questão 05.
a) 5 iterações 

b) i = 0, j = 10 | soma = 10
i = 1, j = 9 | soma = 10
i = 2, j = 8 | soma = 10
i = 3, j = 7 | soma = 10
i = 4, j = 6 | soma = 10


Questão 06.
a) x = 6

b) x = 0: compara 0 < 5 (Verdadeiro). Incrementa x para 1.

x = 1: compara 1 < 5 (Verdadeiro). Incrementa x para 2.

x = 2: compara 2 < 5 (Verdadeiro). Incrementa x para 3.

x = 3: compara 3 < 5 (Verdadeiro). Incrementa x para 4.

x = 4: compara 4 < 5 (Verdadeiro). Incrementa x para 5.

x = 5: compara 5 < 5 (Falso). Ainda assim incrementa x para 6
