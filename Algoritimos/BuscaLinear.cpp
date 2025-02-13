#include <iostream>
#include <string>
using namespace std;

int binarySearch(int list[], int tam, int element) {
    int esquerda = 0;
    int direita = tam - 1;

    while (esquerda <= direita) {
        int meio = (esquerda + direita) / 2;

        if (list[meio] == element)
        {
            cout << element;
            return element;
        }

        if (list[meio] < element)
        {
            esquerda = 1 + meio;
        }

        else {
            direita = meio;
        }
    }

    return -1;
}

int bubleSort(int list[], int tam) {
    for (int i = 0; i < tam - 1; i++)
    {
        for (int j = 0; j < tam - 1 - i; j++) 
        {
            if (list[j] > list[j + 1])
            {
                std::swap(list[j], list[j + 1]);
            }
        }
    }
    return 0;
}

int buscaLinear(int list[], int tam, int element) {
    int counter = 0;
    for (int i = 0; i < tam; i++)
    {
        if (list[i] == element) {
            cout << "item encontrado: \n";
            cout << list[i];
        }
        else {
            counter++;
        }

        if (counter == tam)
        {
            cout << "item nao encontrado";
        }
    }

    return 0;
}

int main()
{
    int list[] = { 10, 20, 30, 40, 50 };
    int tamList = sizeof(list) / sizeof(list[0]);
    int elementSearch;

    cout << "type the number for search in list: ";
    cin >> elementSearch;

    binarySearch(list, tamList, elementSearch);
    return 0;
}



