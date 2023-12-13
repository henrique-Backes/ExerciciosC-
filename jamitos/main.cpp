/*
    2. Escreva um programa que leia 3 notas de um aluno e a média das notas dos exercícios realizados por ele.
    Calcular a média de aproveitamento, usando a fórmula: MA = (N1 + N2*2 + N3*3 + ME)/7.
    A partir da média, informar o conceito de acordo com a tabela:
        maior ou igual a 9	                A
        maior ou igual a 7.5 e menor que 9	B
        maior ou igual a 6 e menor que 7.5	C
        maior ou igual a 4 e menor que 6	D
        menor que 4	                        E
*/
#include <iostream>

using namespace std;

float calcMedia(float nota1, float nota2, float nota3, float exercicio);
char calcConseito(float nota);

int main()
{
    float nota1,
          nota2,
          nota3,
          notaExercicio,
          media;
    cout << "Nota 1: ";
    cin >> nota1;
    cout << "Nota 2: ";
    cin >> nota2;
    cout << "Nota 3: ";
    cin >> nota3;
    cout << "Media Exercicios: ";
    cin >> notaExercicio;

    media = calcMedia(nota1, nota2, nota3, notaExercicio);

    cout << "Sua media eh: " << media << endl << "Seu conseito eh: " << calcConseito(media);

    return 0;
}


float calcMedia(float nota1, float nota2, float nota3, float exercicio){
    return ((nota1 + (nota2*2) + (nota3*3) + exercicio)/7);//(N1 + N2*2 + N3*3 + ME)/7
}

char calcConseito(float nota){
    if(nota >= 9.0){
        return 'A';
    }else if (nota >= 7.5){
        return 'B';
    }else if(nota >= 6.0){
        return 'C';
    }else if(nota >= 4.0){
        return 'D';
    }else
        return 'E';
}
