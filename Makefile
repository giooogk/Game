cc = g++
.DEFALT_GOAL = jg
jogador.o: jogador.cpp jogador.h
	$(cc) jogador.cpp -c
jogo.o: jogo.cpp jogo.h
	$(cc) jogo.cpp -c

jogo: procesador.cpp jogador.o jogo.o 
	$(cc) procesador.cpp  jogador.o jogo.o -o jg

clear: 
	rm *.o
	rm jg