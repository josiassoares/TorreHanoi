typedef struct{
    char nomeMonge[100];
    int pontos;
}TipoPonto;

struct elemento {
    TipoPonto Dados;
    struct elemento * anterior;
    struct elemento * proximo;
};
typedef struct elemento Elemento;

struct lista {
    Elemento *primeiro;
    Elemento *ultimo;
    int quantidade;
};

typedef struct lista Lista;

Lista *criaLista();
void  liberaLista(Lista *ListaPontos);
int  insereListaOrdenada(Lista * ListaPontos, TipoPonto DadosPontos);
void exibeRanking(Lista *ListaPontos);