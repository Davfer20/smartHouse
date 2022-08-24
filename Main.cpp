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

class Dispositivo
{
private:
    string nombre;
    string tipoDispositivo;
    // enum tipoDisposivo : unsigned int;
    string habitacion;
    string acciones;    // Se hace con diccionario
    string propiedades; // Se hace con diccionario
public:
    Dispositivo(string pNombre, string pTipoDispositivo, string pHabitacion, string pAcciones, string pPropiedades)
    {
        this->nombre = pNombre;
        this->tipoDispositivo = pTipoDispositivo;
        this->habitacion = pHabitacion;
        this->acciones = pAcciones;
        this->propiedades = pPropiedades;
    }

    string getNombre()
    {
        cout << "Nombre: " << nombre << endl;
    }

    string getTipo()
    {
        cout << "Tipo Dispositivo: " << tipoDispositivo << endl;
    }

    string getHabitacon()
    {
        cout << "Habitacion:  " << habitacion << endl;
    }

    string getAcciones()
    {
        cout << "Acciones del dispositivo: " << acciones << endl;
    }

    string getParametros()
    {
        cout << "Propiedades del Dispositivo: " << propiedades << endl;
    }

    void setNombre(string pNombre)
    {
        this->nombre = pNombre;
    }

    void setDispositivo(string pTipo)
    {
        // validar que el pTipo exista en el enum
        this->tipoDispositivo = pTipo;
    }

    void setHabitacion(string pHabitacion)
    {
        this->habitacion = pHabitacion;
    }

    // Set acciones

    // Set propiedades
};

class NudoDispo
{
private:
    Dispositivo claseDis;
    NudoDispo *nxt;

public:
    NudoDispo()
    {
        nxt = nullptr;
    }
};

class Lista
{
private:
    NudoDispo *first;

public:
    Lista()
    {
        first = nullptr;
    }
    void add(Dispositivo claseDis)
    {
        NodoDispo *nodo = new NudoDispo(claseDis);
        if (first == NULL)
        {
            first = nodo;
        }
    }
    else
    {
        Nodo *nodoActual = first;
        while (nodoActual->next != NULL)
        {
            nodoActual = nodoActual->next;
        }
        nodoActual->next = nodo
    }
}