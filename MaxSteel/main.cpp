/*
3. Fa�a o programa que apresenta a seguinte sa�da,
perguntando ao usu�rio o n�mero m�ximo (no exemplo, 9).
Este n�mero deve ser sempre �mpar.

1 2 3 4 5 6 7 8 9
  2 3 4 5 6 7 8
    3 4 5 6 7
      4 5 6
        5
*/

#include <iostream>

using namespace std;

int main()
{
    bool impar = false;
    int numMax;

    do{
        cout << "Digite o munero maximo: ";
        cin >> numMax;

        if(numMax%2 == 1)
            impar = false;
        else
            impar = true;
    }while(impar);

    int vet[numMax+1];

    for(int i = 0; i <= numMax; i++){
        vet[i] = i+1;
    }

    for(int i = 0; i < numMax; i++){
        int lim = i*2;

        for(int j=0; j < lim; j++)
            cout << " ";

        lim = numMax - (i);

        for(int j = i; j < lim; j++)
            cout << vet[j] << " ";

        cout << endl;
    }

    return 0;
}
