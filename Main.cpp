#include <iostream>
#include <vector>
#include <string>
using namespace std;

int maxHabitaciones = 3;
int maxDispositivos = 4;

enum modelo
{
    bombillo,
    cofeeMaker,
    refrigeradora,
    puerta,
    camara,
    parlante
};

struct Bombillo
{
private:
    string identificador;
    string color;
    string brillo;

public:
    Bombillo(std ::string pindentificador, string pcolor, string pbrillo)
    {
        this->identificador = pindentificador;
        this->color = pcolor;
        this->brillo = pbrillo;
    }

    void setBombillo(string pcolor, string pbrillo)
    {
        this->color = pcolor;
        this->brillo = pbrillo;
    }

    string getBombillo()
    {
        vector<string> b1;
        b1.push_back(identificador);
        b1.push_back(color);
        b1.push_back(brillo);
        for (auto i = b1.rbegin(); i != b1.rend(); ++i)
            cout << *i << " " << endl;
    }
};

struct CoffeMaker
{
private:
    string identificador;
    bool estado;
    string intensidad;
};

struct Refrigeradora
{
private:
    string identificador;
    bool estado;
    string intensidad;
};

struct Puerta
{
private:
    string identificador;
    bool estado;
};

struct Camara
{
private:
    string identificador;
    bool estado;
    bool visionNocturna;
};

struct Parlante
{
private:
    string identificador;
    bool estado;
    int intensidad;
};

struct Dispositivo
{
private:
    string nombre;
    string tipoDispositivo;
    int habitacion;
    string acciones{};
    string propiedades{};

public:
    Dispositivo(string pNombre, string pTipoDispositivo, int pHabitacion, string pPropiedades)
    {
        this->nombre = pNombre;
        this->tipoDispositivo = pTipoDispositivo;
        this->habitacion = pHabitacion;
        this->propiedades = pPropiedades;
    }

    string getDatos()
    {
        cout << "Nombre: " << nombre << " "
             << " Tipo: " << tipoDispositivo << " "
             << " Numero de habitacion: " << habitacion << " "
             << " Propiedades" << propiedades << endl;
    }
};

string definirAcciones(modelo pTipo)
{
    switch (pTipo)
    {
    case bombillo:
        return "Encender, Apagar Cambio color y brillo";
    case cofeeMaker:
        return "Encender, Apagar, Fuerte, Suave";
    case refrigeradora:
        return "Encender, Apagar, Intensidad frio (1-10)";
    case puerta:
        return "Abrir, Cerrar";
    case camara:
        return "Encender, Apagar, Vision Nocturna";
    case parlante:
        return "Encender, Apagar. Cambio volumen (1-15)";
    }
}

string agregarDispositivo(string pIdenty, string pTipo, string pHabitaion)
{

    if (pIdenty == "bombillo")
    {
        Bombillo pIdenty(string pIdenty, string sinColor, string sinBrillo);
    }
    return pIdenty;
}

int main() // llamada para agregar habitaciones
{
    // modelo tipo1 = bombillo;                     // Se agrega el tio de dispositivo
    // string accionesObj = definirAcciones(tipo1); // Se leen las acciones del dispositivo
    // cout << definirAcciones(tipo1) << endl;

    string datosDispo = agregarDispositivo("bom1", "bombillo", "h1"); // Se asigna identificador tipo y habii

    cout << datosDispo << endl;

    int numHabi = 1;
    Dispositivo C1(string coffeH1, string cofeeMaker, int numHabi, string tipo1);

    return 0;
}