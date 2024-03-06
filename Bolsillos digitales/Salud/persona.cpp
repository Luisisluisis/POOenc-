#include <iostream>
#include <string>

using namespace std;

class Person 
{
    public:
    string typeDocument;
    string document;
    string name;
    string lastName;
    string gender;

    double weight;
    double height;

    int age;

    void pedirDatos()
    {
        cout << "Enter type of document:";
        cin >> typeDocument;
        cout << "Enter the document:";
        cin >> document;
        cout << "Enter your name:";
        cin >> name;
        cout << "Enter your last name:";
        cin >> lastName;
        cout << "Enter your weight:";
        cin >> weight;
        cout << "Enter your height:";
        cin >> height;
        cout << "Enter your age:";
        cin >> age;
        cout << "What is your gender:";
        cin >> gender;
    }
};

void calcularIMC()
{
    double actualWeight = weight / (height * height);
    if (actualWeight < 20) 
    {
        cout << "The weight is above the ideal weight" << endl;
    }
    else if (actualWeight >= 20 && actualWeight <= 25)
    {
        cout << "The weight is ideal" << endl;
    }
    else 
    {
        cout << "Have overweight" << endl;
    }
};

bool mayorEdad ()
{
    return age >= 18;
};

int main ()
{
    Person person1;

    person1.pedirDatos();
    person1.mostrarPersona();

    cout << "IMC" << person1.calcularIMC() << end;

    cout << "He's older " << (person1.mayorEdad() ? "Yes" : "No") << endl;
    

    return 0;
}

/*
// Construtor vacio
Persona ()
{

}

// Constructor con parametros
Persona (string tipoDoc1, string nombre1, string apellido1, int peso1, double estatura1, int edad1, string sexo1)
{
// Atributos
    tipoDoc = tipoDoc1;
    nombre = nombre1;
    apellido = apellido1;
    peso = peso1;
    estatura = estatura1;
    edad = edad1;
    sexo = sexo1;
}
*/