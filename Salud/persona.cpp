#include <iostream>
#include <string>

using namespace std;

class Person {
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
    Person() : typeDocument(""), document(""), name(""), lastName(""), gender(""), weight(0.0), height(0.0), age(0) {}

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
    string getLastName() const 
    {
        return lastName;
    }
    string getGender() const 
    {
        return gender;
    }
    double getWeight() const 
    {
        return weight;
    }
    double getHeight() const 
    {
        return height;
    }
    int getAge() const 
    {
        return age;
    }

    void setTypeDocument(const string &newTypeDocument) 
    {
        typeDocument = newTypeDocument;
    }
    void setDocument(const string &newDocument) 
    {
        document = newDocument;
    }
    void setName(const string &newName) 
    {
        name = newName;
    }
    void setLastName(const string &newLastName) 
    {
        lastName = newLastName;
    }
    void setGender(const string &newGender) 
    {
        gender = newGender;
    }
    void setWeight(double newWeight) 
    {
        weight = newWeight;
    }
    void setHeight(double newHeight) 
    {
        height = newHeight;
    }
    void setAge(int newAge) 
    {
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
            cout << "The weight is below the ideal weight" << endl;
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
    bool mayorEdad() 
    {
        return age >= 18;
    }
};

class Employee : public Person 
{
private:
    string position;
    string department;

    double hourlyRate;
    double hoursWorked;

public:
    Employee() : position(""), department(""), hourlyRate(0.0), hoursWorked(0.0) {}

    string getPosition() const 
    {
        return position;
    }
    string getDepartment() const 
    {
        return department;
    }

    double getHourlyRate() const 
    {
        return hourlyRate;
    }
    double getHoursWorked() const 
    {
        return hoursWorked;
    }

    void setPosition(const string &newPosition) 
    {
        position = newPosition;
    }
    void setDepartment(const string &newDepartment) 
    {
        department = newDepartment;
    }
    void setHourlyRate(double newHourlyRate) 
    {
        hourlyRate = newHourlyRate;
    }
    void setHoursWorked(double newHoursWorked) 
    {
        hoursWorked = newHoursWorked;
    }

    void pedirDatosEmpleado() 
    {
        cout << "Position: ";
        cin >> position;
        cout << "Department: ";
        cin >> department;
        cout << "Hourly rate: ";
        cin >> hourlyRate;
        cout << "Hours worked: ";
        cin >> hoursWorked;
    }

    void calcularHonorarios() 
    {
        double totalPay = hourlyRate * hoursWorked;
        double reteica = totalPay * (0.966 / 100);

        cout << "Data of the worker" << endl;

        mostrarPersona();
        cout << "Position: " << position << endl;
        cout << "Hours worked: " << hoursWorked << " hours" << endl;
        cout << "Hourly rate: $" << hourlyRate << endl;
        cout << "Total to pay: $" << totalPay - reteica << endl;
    }
};

int main() 
{
    Employee employee;

    employee.pedirDatosEmpleado();

    cout << "Data of the employee:" << endl;
    cout << "Name: " << employee.getName() << " " << employee.getLastName() << endl;
    cout << "Age: " << employee.getAge() << " years" << endl;
    cout << "Position: " << employee.getPosition() << endl;
    cout << "Department: " << employee.getDepartment() << endl;
    cout << "Hourly rate: $" << employee.getHourlyRate() << endl;
    cout << "Hours worked: " << employee.getHoursWorked() << " hours" << endl;

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
