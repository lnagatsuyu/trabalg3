#include <stdio.h>
#include <stdlib.h>

struct noB{				//struct arvore B
	struct noB *esq, *dir;
	int chave;
}

struct noA{				//struct arvore A
	struct noA *esq, *pai, *dir;
	struct noB *chave;
}


