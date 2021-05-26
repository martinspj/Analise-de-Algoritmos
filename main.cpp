/*
*************************************************************************
*
* Projeto: Procurar o maior e menor valor em um vetorr
*
* Função: Procurar os valores e informar quais são
* Máximo e Mínino valores
*************************************************************************
*
* Autor: Paulo Martins
* e-mail: pjm@unesc.net
*
* Alteração:
* Data: 19/05/2021
*
*************************************************************************
*
*
* Copyright 2021 by company Paulo Martins
*
*************************************************************************
*/
#ifdef _WIN32
   #define TAM 500001 // inicializar vetor
#else
  #define TAM 2000001 // inicializar vetor//define it for a Unix machine
#endif

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int vetor[TAM], qdade = -1, i, op, start, finish, max, min, fimdoanel;
    cout << "Quantidade Maxima do Vetor = " << TAM-1 << endl;
    while (qdade < 1 || qdade > TAM)
    {
        cout << "Entre com a quantidade de valores do vetor: ";
        cin >> qdade;
    }
    cout << "Menu de Opções" << endl;
    cout << "1 - Maior e Menor (1)"  << endl;
    cout << "2 - Maior e Menor (2)"  << endl;
    cout << "3 - Maior e Menor (3)"  << endl;
    cout << "Escolha a sua opção: ";
    cin >> op;
    while (op < 1 || op > 3)
    {
        cout << "Entre com a opcao: ";
        cin >> op;
    }
    for (i=0; i < qdade; i++)   //i = i + 1    // i++
        vetor[i]=rand() % 10000;
    switch (op)
    {
    case 1 :
        cout << "Menor e Maior (1)" << endl;
        max=vetor[0];
        min=vetor[0];
        start = clock();
        for (i=1; i < qdade; i++ ){
            if(vetor[i]> max) max = vetor[i];
            if(vetor[i]< min) min = vetor[i];
        }
        for(i=0; i < 1000000; i++)
        {
        }
        finish = clock();
        cout << "Menor = " << min  << "   Maior = "  << max << endl;
        cout.precision(15);
        cout << "Executou em " << ((float) (finish - start)) / CLOCKS_PER_SEC << "  segundos" << endl;
        break;
    case 2 :
        cout << "Menor e Maior (2)" << endl;
        max=vetor[0];
        min=vetor[0];
        start = clock();
        for (i=1; i < qdade; i++ )
        {
            if(vetor[i]> max) max = vetor[i];
            else if(vetor[i]< min) min = vetor[i];
        }
        for(i=0; i < 1000000; i++)
        {
        }
        finish = clock();
        cout << "Menor = " << min  << "   Maior = "  << max << endl;
        cout.precision(15);
        cout << "Executou em " << ((float) (finish - start)) / CLOCKS_PER_SEC << "  segundos" << endl;
        break;
    case 3 :
        cout << "Menor e Maior (3)" << endl;
        start = clock();
        if ((qdade % 2) > 0) {
                vetor[qdade+1]=vetor[qdade];
                fimdoanel = qdade;
        }
        else fimdoanel = qdade - 1;
        if (vetor[0] > vetor[1]){
            max = vetor[0];
            min = vetor[1];
        }
        else {
            max = vetor[1];
            min = vetor[0];
        }
        i = 2;
        while (i < fimdoanel){
            if (vetor[i] > vetor[i+1]){
                if (vetor[i] > max) max = vetor[i];
                if (vetor[i+1] < min) min  = vetor[i+1];
            }
            else{
                if (vetor[i] < min) min = vetor[i];
                if (vetor[i+1] > max) max = vetor[i+1];
            }
            i = i + 2;
        }
        for(i=0; i < 1000000; i++)
        {
        }
        finish = clock();
        cout << "Menor = " << min  << "   Maior = "  << max << endl;
        cout.precision(15);
        cout << "Executou em " << ((float) (finish - start)) / CLOCKS_PER_SEC << "  segundos" << endl;

    }

    return 0;
}
