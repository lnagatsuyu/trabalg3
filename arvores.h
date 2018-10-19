#include <stdio.h>
#include <stdlib.h>

struct noB{
	struct noB *esq, *dir;
	int chave;
}

struct noA{
	struct noA *esq, *pai, *dir;
	struct noB *chave;
}


