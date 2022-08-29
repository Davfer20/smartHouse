#include <iostream>
#include <string>

using namespace std;

#ifndef DISPOSITIVO

#define DISPOSITIVO 1

enum dispoTypes
{
    bombillo = 0,
    cofeeMaker = 1,
    refrigeradora = 2,
    puerta = 3,
    camara = 4,
    parlante = 5
};
class Dispositivo
{
private:
    string nombre;
    dispoTypes type;
    string habitacion;
    // Lista acciones
    // Lista parametros

public:
    Dispositivo(string pNombre, dispoTypes pTipo, string pHabitacion)
    {
        this->nombre = pNombre;
        this->type = pTipo;
        this->habitacion = pHabitacion;
    }

    void setNombre(string pNombre)
    {
        this->nombre = pNombre;
    }

    void setHabitacion(string pHabitacion)
    {
        this->habitacion = pHabitacion;
    }

    string getNombre()
    {
        return nombre;
    }

    string getHabitacion()
    {
        return habitacion;
    }

    dispoTypes getType()
    {
        return type;
    }
};

#endif