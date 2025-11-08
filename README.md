# Calculadora em C

Projeto criado durante o curso de _Bases de programação_.

A proposta é desenvolver um projeto para implementar os algoritmos e as rotinas
(funções) em linguagem _C_ de uma loja virtual, especificamente uma
"calculadora" que vai calcular o preço total da compra, incluindo o preço do
frete.

OBSERVAÇÃO: O preço do frete varia de acordo com a região e o peso do produto de
acordo com a tabela a seguir:

| Região   | Preço do frete padrão | Preço do frete > 2kg |
| -------- | --------------------- | -------------------- |
| Sul      | R$ 30,00              | R$ 50,00             |
| Sudeste  | R$ 25,00              | R$ 45,00             |
| Norte    | R$ 35,00              | R$ 55,00             |
| Nordeste | R$ 40,00              | R$ 60,00             |

No final do processamento, após calcular o preço total da compra, a aplicação
deve apresentar o resumo da compra com as seguintes informações: código do
produto, nome do produto, peso do produto, preço do produto, local de entrega
([1] Região Sul; [2] Região Sudeste; [3] Região Norte; [4] Região Nordeste),
preço do frete, preço total da compra, data e hora da compra, e data prevista de
entrega (sempre deve ser uma data posterior a data da compra).
