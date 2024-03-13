#include <iostream>
#include <string>

using namespace std;

class Person 
{
    private:
    string typeDocument;
    string document;
    string name;
    string lastName;
    string gender;

    double weight;
    double height;

    int age;

    public:
    Person(): typeDocument(""), document(""), name(""), lastName(""), gender(""), weight(0.0), height(0.0), age() {}

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

    void mostrarPersona() const 
    {
        cout << "Type of document: " << typeDocument << endl;
        cout << "Document: " << document << endl;
        cout << "Name: " << name << endl;
        cout << "Last Name: " << lastName << endl;
        cout << "Weight: " << weight << endl;
        cout << "Height: " << height << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;

        cout << "IMC: " << calcularIMC() << endl;
        cout << "He's older " << (mayorEdad() ? "Yes" : "No") << endl;
    }

    double calcularIMC()
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
        return actualWeight;
    }
       
    bool mayorEdad ()
    {
        return age >= 18;
    }  

class Empleado : public Person 
    {
    private:
    string cargo;
    string departamento;

    double valorHora;
    double horasTrabajadas;

    public:
    void pedirDatosEmpleado () {
        cout << "Cargo: ";
        cin >> cargo;
        cout << "Department: ";
        cin >> departamento;
        cout << "Price per hour: ";
        cin >> valorHora;
        cout << "Hours worked: ";
        cin >> horasTrabajadas;
    } 
    void calcularHonorarios() {
        double totalPagar = (valorHora * horasTrabajadas);
        double reteica = (totalPagar * (0.966 / 100));

        cout << "Data of the worker";

        mostrarPersona();
        cout << "Title: " << cargo << endl;
        cout << "Hours worked: " << horasTrabajadas << " hours" << endl;
        cout << "Valor por hora: $" << valorHora << endl;
        cout << "Total a pagar: $" << totalPagar - reteica << endl;
    } 
};

int main ();
    Person :: Salud :: Person person1;
        Person :: Principal :: Inicio :: ejecutarOperaciones(person1);

        Empleado empleado1;
        empleado1.pedirDatos();
        empleado1.pedirDatosEmpleado();
        empleado1.calcularHonorarios();

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
