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
    string typeDocument = "";
    string document = "";
    string name = "";
    string lastName = "";
    string gender = "";

    double weight = 0.0;
    double height = 0.0;

    int age = Age();

    string getTypeDocument() const 
    {
        return typeDocument;
    }
    string getDocument() const
    {
        return document;
    }
    string getName() const
    {
        return name;
    }
    string getlastName() const
    {
        return lastName;
    }
    string getgender() const
    {
        return gender;
    }

    double getweight() const
    {
        return weight;
    }
    double getheight() const
    {
        return height;
    }

    int getage() const
    {
        return age;
    }

    void setTypeDocument (const string & newTypeDocument)
    {
        typeDocument = newTypeDocument;
    }
    void setDocument (const string & newDocument)
    {
        document = newDocument;
    }
    void setName (const string & newName)
    {
        name = newName;
    }
    void setLastName (const string & newLastName)
    {
        lastName = newLastName;
    }
    void setGender (const string & newGender)
    {
        gender = newGender;
    }

    void setWeight(double newWeight) {
        weight = newWeight;
    }

    void setHeight(double newHeight) {
        height = newHeight;
    }

    void setAge(int newAge) {
        age = newAge;
    }
    
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
    string getCargo() const 
    {
        return cargo;
    }
    string getDepartamento() const 
    {
        return departamento;
    }

    double getValorHora() const 
    {
        return valorHora;
    }
    double getHorasTrabajadas() const 
    {
        return horasTrabajadas;
    }

    void setCargo(const string& newCargo) 
    {
        cargo = newCargo;
    }
    void setDepartamento(const string& newDepartamento) 
    {
        departamento = newDepartamento;
    }
    void setValorHora(double newValorHora) 
    {
        valorHora = newValorHora;
    }
    void setHorasTrabajadas(double newHorasTrabajadas) 
    {
        horasTrabajadas = newHorasTrabajadas;
    }

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

int main() {
    Empleado empleado;

    empleado.pedirDatosEmpleado();

    cout << "Data of the employee:";
    cout << "Name: " << empleado.getName() << " " << empleado.getLastName() << endl;
    cout << "Age: " << empleado.getAge() << " years";
    cout << "Title: " << empleado.getCargo() << endl;
    cout << "Department: " << empleado.getDepartamento() << endl;
    cout << "Price per hours: $" << empleado.getValorHora() << endl;
    cout << "Hours worked: " << empleado.getHorasTrabajadas() << " hours";

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
