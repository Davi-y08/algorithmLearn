#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;




struct no
{
    //object for the value in node
    int item;

    //pointer for children nodes left
    no* left;

    //poiter for children nodes right
    no* right;
};

void insertRight(no* no, int valor) {

}

void insertLeft(no* No, int value) {
    if (No->left == NULL)
    {
        no* newNode = (no*)malloc(sizeof(No));
        newNode->item = value;
        newNode->left = NULL;
        newNode->right = NULL;
        No->left = newNode;
    }
    else {

    }
}

no* insert_version_1(no* root, int value) {
    if (root == NULL)
    {
        no* arx = (no*)malloc(sizeof(no));
        arx->item = value;
        arx->left = NULL;
        arx->right = NULL;
        cout << "raiz criada com sucesso \n";
        return arx;
    }

    else
    {
        if (value < root->item)
        {
            insertLeft(root->left, value);
        }
        else {
            insertRight(root->right, value);
        }
        return root;
    }
}

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

        else 
        {
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
    return 0;
}