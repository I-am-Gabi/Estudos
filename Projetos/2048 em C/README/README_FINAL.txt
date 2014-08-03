ALUNOS: 
- Roberto Anrafell Araujo Dantas - 2014027940
- Henrique Maraschin Granja - 2014047254

Roberto Anrafell Araujo Dantas - 2014027940
-----------------------------------
	Desde o início do desenvolvimento do jogo, a fim de evitar problemas de organização e problemas maiores na divisão de arquivos, defini os arquivos .c e .h e dividi para que as funções já ficassem em seu lugar de maneira organizada.
	Após essa etapa de definições de organizações fiz o menu inicial do jogo e a estrutura gráfica do jogo (HUB com pontuações, traçados para separar e organizar espaços, imprimir a matriz na tela etc), essas estruturas com os recursos da biblioteca padrão: stdio.h (printf,scanf);
	Porém, no final do desenvolvimento do jogo, Decidi alterar essa estrutura gráfica que antes estava em stdio.h (printf,scanf etc) para ferramentas da biblioteca "ncurses".
	 Tive conhecimento da biblioteca ncurses com o professor André Mauricio, pois no inicio do desenvolvimento eu estava buscando formas de imprimir colorido no terminal, e então Prof. André comentou sobre essa biblioteca e que além de poder imprimir colorido também seria possível mover o cursor do terminal etc. E então resolvi pesquisar e aprender como utilizá-la.
	 De fato, essa biblioteca trouxe bastantes benefícios para o jogo 2048, nela foi possível capturar tecla sem precisar de enter, foi possível utilizar cores no terminal, criar tela do jogo de forma estática, isto é, em vez de imprimir de forma contínua em toda a matriz e estrutura como é feito no prinft, é possível imprimir e alterar apenas os valores.
	Além disso, fiz funções para salvar o estado da matriz atual, jogada anterior e salvar score. Os arquivos são salvos em extensões ".2048". O conteúdo desses arquivos estão impressos em valor hexadecimal e com uma criptografia simples (multiplicar, subtrair etc) para que dificultar a possibilidade do usuário abrir no "gedit" ou editor de texto e alterar os valores no arquivo e com isso trapacear no jogo.
	Com isso, implementei as funções de voltar a jogada, resetar o jogo e sair do jogo para que o usuário final pudesse ter um controle maior do jogo.

RESUMO:
--> Implementação do ncurses;
--> Menu principal do jogo;
--> HUB/ESTRUTURA do jogo (ncurses);
--> Salvar e ler estado da matriz em arquivos para retornar o jogo anterior, voltar movimento, scores;
--> Implementação de arquivos .c e .h:
	-> 2048.c em 2048.h
	-> comandar_mat.c em comandar_mat.h
	-> imprime_mat.c em imprime_mat.h
	-> move_mat.c em move_mat.h
	-> preenche_mat.c em preenche_mat.h
--> Função para somar as pares cima e baixo.
--> Função para matriz ir para cima.
--> Funções de imprimir na tela (MATRIZ, HUB DO JOGO, MENUS);
--> Função para preencher matriz valor aleatório;
--> Função de verificação se é possível continuar jogo (gameover); em conjunto com função de se há espaços vazios de Henrique Maraschin.
--> Função de verificação se venceu o jogo (2048) utilizando em conjunto com função de varredura de Henrique Maraschin.
--> Comandos de resetar jogo, voltar movimento e sair do jogo;
--> Função para receber comando e controlar matriz e ferramentas do jogo;
--> Função de salvar o Score máximo do jogo;



Henrique Maraschin Granja - 2014047254
-----------------------------------
	Desde o princípio do desenvolvimento do jogo, estabeleci uma meta pessoal que era de sair desse projeto com uma maior base de programação em linguagem C. Portanto, me dediquei à pesquisa de formas diferentes de se realizar uma mesma tarefa, como caso da função "Girar a matriz", a qual consiste em uma função que possibilita através do movimento giratório do duplo vetor(matriz), estabelacer a direção que ela deve tomar, de acordo com a quantidade de chamadas dessa função.
	Após tal processo, desenvolvi uma outra função para movimentar a matriz para os sentidos , baixo, esquerda, direita, de acordo com a função de "girar a matriz", com a intenção de diminuir a quantidade de sub-rotinas para para tais movimentações, proporcionando assim um melhor processamento e uma economia nas linhas de código da aplicação.
	Ao decorrer do processo do desenvolvimento, foi necessario, para estabelecer o "Fim de jogo", uma outra função a qual determinasse se haveria alguma casa da matriz, vazia, com isso elaborei a função de verificação do espaço vazio na matriz,a qual inicia um processo de varredura, "casa por casa", da matriz, verificando alguma "casa", vazia.
	Para estabelecer uma melhor interação entre o jogador e a aplicação, elaborei um pequeno texto explicando as instruções e objetivos do jogo com a possibilidade de acesso pelo menu principal.
	A função de score máximo, foi dividida entre mim(Henrique Maraschin) e Roberto Dantas, os quais tivemos uma igualitaria responsabilidade no desenvolvimento desta função.	
	Como cada "invenção", por tras há um criador, nada melhor que criar um sucinto texto dando créditos aos criadores e aos professores pela bela iniciativa de implantar o objetivo do desenvolvimento do jogo, possibilitando utilizar a imaginação para resultar em uma inovação pessoal de cada aluno.
	Porem, durante o processo de desenvolvimento, foram encontradas algumas dificuldades por mim, como a implantação do Typedef struct{}
e da elaboração de uma forma de salvar o Score maximo por nome, criando multiplos arquivos .txt com o nome de cada jogador. Devido à essa dificuldade, não foi possível obter êxito no desenvolvimento dessa função do jogo.

Resumo:
--> Implementação do ncurses nas telas de  crédito e instruções do jogo;
--> Função para ir para esquerda,direita,baixo em conjunto com função de ir para cima de Roberto Dantas.
--> Função de girar a matriz;
--> Função de verificação de espaço vazio na matriz;
--> Tela de créditos do jogo.
--> Tela de instruções do jogo.
--> Função de salvar o Score máximo do jogo;

O QUE FARIAMOS DE DIFERENTE SE REFIZESSEMOS O JOGO :
----------------------------------------------------
Nós iriamos utilizar uma interface gŕafica mais avançada como Allegro. Além disso,  colocariamos um ranking de pontuações por usuário, pois foi o que tivemos dificuldades em fazer.


OBSERVAÇÕES:

	HÁ UM EASTER EGG (segredo oculto) NO JOGO.
	
	Os elementos vazio da matriz são preenchidos com asterisco *, Então, Se no menu inicial do jogo 
	digitar asterisco * vai para uma tela de jogo com a matriz toda preenchida em 1024 
	e assim com qualquer movimento, vence o jogo.
