using namespace std;

string Persona::calcularIMC()
{
    double actualPeso = peso / (altura * altura);

    if (actualPeso < 20)
    {
        return "PESOBAJO";
    }
    else if (actualPeso >= 20 && actualPeso <= 25)
    {
        return "PESOIDEAL";
    }
    else
    {
        return "SOBREPESO";
    }
}

bool Persona::esMayorEdad()
{
    return edad >= 18;
}

void Persona::pedirDatos()
{
    cout << "Ingrese tipo de documento:";
    cin >> tipoDocumento;
    cout << "Ingrese el documento:";
    cin >> documento;
    cout << "Ingrese su nombre:";
    cin >> nombre;
    cout << "Ingrese su apellido:";
    cin >> apellido;
    cout << "Ingrese su peso:";
    cin >> peso;
    cout << "Ingrese su altura:";
    cin >> altura;
    cout << "Ingrese su edad:";
    cin >> edad;
    cout << "¿Cuál es su género?:";
    cin >> genero;
}

void Persona::mostrarPersona()
{
    cout << "Tipo de documento: " << tipoDocumento << endl;
    cout << "Documento: " << documento << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Apellido: " << apellido << endl;
    cout << "Peso: " << peso << endl;
    cout << "Altura: " << altura << endl;
    cout << "Edad: " << edad << endl;
    cout << "Género: " << genero << endl;

    std::string resultadoIMC = calcularIMC();
    cout << "IMC: " << resultadoIMC << endl;
    cout << "Es mayor de edad: " << (esMayorEdad() ? "Sí" : "No") << endl;

    if (resultadoIMC == "PESOBAJO")
    {
        cout << "El peso está por debajo del ideal." << endl;
    }
    else if (resultadoIMC == "PESOIDEAL")
    {
        cout << "El peso está en el rango ideal." << endl;
    }
    else
    {
        cout << "Tiene sobrepeso." << endl;
    }
}

int main()
{
    Persona persona1;

    persona1.pedirDatos();
    persona1.mostrarPersona();

    return 0;
}
