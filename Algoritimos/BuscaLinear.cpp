#include <iostream>
#include <string>
using namespace std;

struct no {
    int item;
    no *left;
    no *right;
};

class Tree {
private: no *root;
public: Tree() { root = NULL; }

public: void insertElement(int v) {
    no* new_item = new no();
    new_item -> item = v;
    new_item -> right = NULL;
    new_item -> left = NULL;

    if (root == NULL)
    {
        root = new_item;
    }

    else {
        no *now = root;
        no *before;
        while (true) {
            before = now;
            if (v <= now->item)
            {
                now = now->left;
                if (now == NULL)
                {
                    before->left = new_item;
                    return;
                }
            }
            else {
                now = now->right;
                if (now == NULL)
                {
                    before->right = new_item;
                    return;
                }
            }
        }
    }
}
private: void inOrder(no* now) {
    if (now != NULL)
    {
        inOrder(now->left);
        cout << now->item << " ";
        inOrder(now->right);
    }
}
public: void caminhar() {
    cout << "Ordenda: ";
    inOrder(root);
}
};

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
    Tree tree;

    tree.insertElement(1);
    tree.insertElement(2);
    tree.insertElement(3);
    tree.insertElement(4);
    tree.insertElement(5);
    tree.insertElement(6);
    tree.insertElement(7);
    tree.insertElement(8);
    tree.insertElement(9);
    tree.insertElement(10);

    tree.caminhar();

    return 0;
}