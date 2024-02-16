/*
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

A DESCRIÇÃO A SEGUIR FOI FEITA PELO CHATGPT COMO PARTE DE UM TESTE. APÓS VERIFICAR, TUDO ESTAVA DESCRITO CORRETAMENTE E DE FORMA PRECISA

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Este código cria um labirinto usando o algoritmo de busca em profundidade (depth-first search) e depois resolve o labirinto encontrando um caminho da entrada até a saída.

Aqui está um resumo do que o código faz:

1)Define variáveis e configura o tamanho da tela do labirinto.
2)Cria uma grade (grid) de células, onde cada célula representa uma parte do labirinto.
3)Inicializa a célula atual como a primeira célula da grade e marca a célula de saída.
4)No loop principal de desenho (draw), há duas fases: construção do labirinto (building) e resolução do labirinto.

A. Na fase de construção:
-Marca a célula atual como visitada e destaca-a.
-Verifica se há vizinhos não visitados e, se houver, move-se para um vizinho aleatório, remove a parede entre a célula atual e o vizinho, e visita o vizinho.
-Se não houver vizinhos não visitados, verifica se há células na pilha (stack) e, se houver, retrocede para a célula anterior.
-Se a célula atual for a primeira célula (entrada), muda para a fase de resolução e limpa as marcações de visita.

B. Na fase de resolução:
-Marca a célula atual como visitada e destaca-a.
-Verifica se a célula atual é a célula de saída e, se for, o labirinto está resolvido. Remove as marcações de visita.
-Destaca todas as células na pilha para mostrar o caminho percorrido desde a entrada até a saída.
-O programa para quando o labirinto é construído e resolvido.
-A função removeWalls remove as paredes entre duas células adjacentes, com base nas diferenças de índices (i, j) entre elas.

No geral, esse código cria um labirinto aleatório e encontra um caminho para resolvê-lo, usando o algoritmo de busca em profundidade.
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

A DESCRIÇÃO A SEGUIR FOI FEITA PELO CHATGPT COMO PARTE DE UM TESTE. APÓS VERIFICAR, TUDO ESTAVA DESCRITO CORRETAMENTE E DE FORMA PRECISA

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
A classe Cell define um objeto que representa uma célula individual no labirinto. A classe possui vários métodos e propriedades para manipular e exibir a célula. Aqui está uma descrição de cada parte relevante do código:

-O construtor constructor é responsável por inicializar as propriedades da célula, incluindo sua posição (i, j), as paredes que a cercam, se foi visitada, se é a saída e se está no caminho da solução.
-O método show() é responsável por exibir visualmente a célula, desenhando suas paredes e colorindo-a se estiver visitada, for a saída ou estiver no caminho da solução.
-O método index() retorna o índice de uma célula na grade com base em suas coordenadas (i, j).
-O método highlight() destaca visualmente a célula, preenchendo-a com uma cor específica.
-O método checkWalls() verifica se há vizinhos que podem ser explorados a partir da célula atual. Ele retorna um vizinho aleatório que não foi visitado e não possui parede bloqueando o movimento, ou retorna undefined se não houver vizinhos disponíveis.
-O método checkNeighbors() verifica se há vizinhos não visitados a partir da célula atual. Ele retorna um vizinho aleatório não visitado, ou retorna undefined se não houver vizinhos não visitados.
-Essa classe encapsula a lógica relacionada a cada célula individual no labirinto e fornece métodos para manipular e exibir as células durante a construção e a resolução do labirinto.

*/
