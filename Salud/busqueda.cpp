//Metodos de busqueda

//Lineal
/*
#include <iostream>
#include <string>

using namespace std;

bool busquedaLineal (const vector <int> &array, int target)
{
    for (int element:array)
    {
        if (element == target)
        {
            return true;
        }
    }
    return false;
}

int main ()
{
    vector <int> numbers = {1,2,3,4,5};
    int target = 3;
    if (busquedaLineal(numbers, target))
    {
        cout << "The element " + target "is in the array" << endl;
    }
    else
    {
        cout << "The element " + target "is not in the array" << endl;
    }
    return 0;
}
*/

//Arbol binario
/*
#include <iostream>
#include <string>

using namespace std;

struct Node
{
    int data 
    Node * left;
    Node * right;
    Node (inst value): data (value), left(nullptr), right (nullptr){};
};
Node * buscar(Node* root, int key)
{
    if (root == nullptr || root -> data == key)
    {
        return root;
    }   
    if (root -> data <key)
    {
        return buscar()
    } 
}
*/

//Interpolacion
//Hasing
