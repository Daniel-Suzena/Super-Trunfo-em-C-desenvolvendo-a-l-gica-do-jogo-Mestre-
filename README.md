# Super-Trunfo-em-C-desenvolvendo-a-l-gica-do-jogo-Mestre-Desafio Mestre Super Trunfo em C
Neste projeto, desenvolvi o jogo Super Trunfo em linguagem C como parte do desafio proposto nas aulas. O objetivo do jogo é comparar dois estados brasileiros com base em diferentes atributos, como população, área, PIB, número de pontos turísticos, densidade demográfica e PIB per capita.

Lógica do Jogo
O jogo permite que o usuário cadastre informações de dois estados e, em seguida, escolha dois atributos para comparar entre os estados. O programa calcula a densidade populacional e o PIB per capita automaticamente a partir dos dados de população e PIB fornecidos, e com isso, permite a comparação de diferentes aspectos dos estados.

Como funciona:
O usuário insere os dados de dois estados, incluindo:

Nome do estado
Código da cidade
População
Área (em Km²)
PIB
Número de pontos turísticos
O programa então calcula dois valores derivados:

Densidade populacional: População / Área
PIB per capita: PIB / População
O usuário escolhe dois atributos para comparar entre os dois estados. As opções incluem:

População
Área
PIB
Número de pontos turísticos
Densidade demográfica
PIB per capita
O programa, em seguida, determina qual dos dois estados "vence" em cada atributo escolhido, informando qual estado tem o valor maior para o atributo selecionado.

Se os atributos escolhidos forem iguais, o programa informa que houve um empate.

Estrutura do Programa
Entrada de Dados: O programa recebe as informações de dois estados, incluindo dados como nome, população, área, PIB e pontos turísticos.

Cálculos: O cálculo da densidade populacional e PIB per capita é feito automaticamente com base nos dados fornecidos.

Menu de Comparação: O usuário escolhe dois atributos para comparar. O programa então analisa esses atributos e determina qual estado se sai melhor em cada comparação.

Exibição de Resultados: O programa exibe o estado vencedor para cada atributo selecionado, ou informa que houve empate, caso os estados tenham os mesmos valores para o atributo escolhido.

Seguindo as Instruções das Aulas
Durante o desenvolvimento deste projeto, segui as instruções fornecidas nas aulas para criar uma solução simples, mas eficaz, usando a linguagem C. A estrutura básica de entrada de dados foi implementada com a função scanf e o programa utiliza estruturas de controle, como o switch, para realizar as comparações dos atributos.

Além disso, o programa foi projetado de forma a ser intuitivo para o usuário, com instruções claras para inserção dos dados e um menu interativo para a escolha dos atributos.

Considerações Finais
Este projeto não apenas me ajudou a entender a aplicação de lógica condicional em C, mas também permitiu que eu praticasse o uso de variáveis de diferentes tipos e a criação de uma interação fluída com o usuário. Foi um ótimo exercício para desenvolver habilidades de programação e também uma maneira divertida de aprender conceitos como controle de fluxo e manipulação de dados.