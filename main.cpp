/*
    1. Crie um programa capaz de ler os dados de uma matriz quadrada de inteiros.
    Ao final da leitura o programa deverá imprimir o número da linha que contém o menor dentre todos os números lidos.
*/

#include <iostream>
#include <string.h>

#define lin 3 //Numero de linhas
#define col 3 //Numero de colunas

using namespace std;

int mat[lin][col];

int achaLinhaMenor(void);

int main()
{
    scanf("%d %d %d", &mat[0][0], &mat[0][1], &mat[0][2]);
    scanf("%d %d %d", &mat[1][0], &mat[1][1], &mat[1][2]);
    scanf("%d %d %d", &mat[2][0], &mat[2][1], &mat[2][2]);

    cout << "Linha do menor: " << achaLinhaMenor() << endl;

    return 0;
}


int achaLinhaMenor(void){
    int linhaMenor = 0,
        menor = mat[0][0];

    for(int i=0; i<lin; i++){
        for(int j=0; j<col; j++){
            if(menor > mat[i][j]){
                menor = mat[i][j];
                linhaMenor = i;
            }
        }
    }
    return linhaMenor+1;
}
