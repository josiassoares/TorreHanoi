#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<stdbool.h> 
#include<locale.h>
#include"fila_monges/FilaMonges.h"
#include"style/style.h"

int menu();

int main(){

    setlocale(LC_ALL, "ptb");

    Fila *FilaMonges = create();
    int opcao;

    do{
        opcao = menu();
        switch (opcao){
            case 1:
                enqueue(FilaMonges);
                break;
            case 2:
                playGame(FilaMonges);
                break;
            case 3:
                display(FilaMonges);
                break;
            default: break;
        }

    }while(opcao != 0);

    return 0;
}

int menu(){
	int opcao;

	system("cls");

	printf(NONE "\t*** MENU ***\n\n");
	printf("-> Informe a op��o desejada:\n");
	printf("\n 1 - Cadastrar Monge");
    printf("\n 2 - Iniciar Jogo");
    printf("\n 3 - Ranking");
	printf("\n 0 - Sair");
	printf("\n\n  ---> ");
	scanf("%d", &opcao);

	if(opcao >= 0 && opcao < 4){
        system("cls");
		return opcao;
	}
	else{
		return menu();
	}

}