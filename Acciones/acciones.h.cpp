#include <iostream>
#include "../Listas/list.h.cpp"
#include "../Listas/Node.h.cpp"
#include <string.h>
#include "../Dispositivos/dispositivo.h.cpp"

using namespace std;
enum dispoTypes
{
    bombillo = 0,
    cofeeMaker = 1,
    refrigeradora = 2,
    puerta = 3,
    camara = 4,
    parlante = 5
};

class listaAcciones
{
private:
    List<string> *accionesLista;

public:
    listaAcciones()
    {
        this->accionesLista = new List<string>(); // Aca iba a agregar las acciones
                                                  // pero no pude crear la nueva lista
    }

    void addActions(dispoTypes ptipoDispositivo) // Ir agregando las acciones
    {
        if (ptipoDispositivo == bombillo)
        {
            accionesLista->addNodoDispo("encender");
            accionesLista->addNodoDispo("color");
            accionesLista->addNodoDispo("brillo"); // Idea era hacer eso con todos pero no se pudo por ser string
        }
        else if (ptipoDispositivo == cofeeMaker)
        {
            accionesLista->addNodoDispo("encender");
            accionesLista->addNodoDispo("intensidad");
        }
        else if (ptipoDispositivo == refrigeradora)
        {
            accionesLista->addNodoDispo("encender");
            accionesLista->addNodoDispo("intensidad");
        }
        else if (ptipoDispositivo == puerta)
        {
            accionesLista->addNodoDispo("estado");
        }
        else if (ptipoDispositivo == camara)
        {
            accionesLista->addNodoDispo("encender");
            accionesLista->addNodoDispo("filtro");
        }
    }
};

class DefAccion
{
private:
    string nombreDispo;
    string accionBuscar;
    Node<string> *acciones;

public:
    DefAccion(string pNombre, string buscaAccion)
    {
        this->nombreDispo = pNombre;
        this->accionBuscar = buscaAccion;
        acciones = NULL;
    }

    string *findAccion(string pNombreDis, string pAccion)
    {
        string *result = NULL;
        Node<string> *search = this->acciones;

        while (search != NULL && search->getData()->getNombre() != pNombreDis)
        {
            search = search->getNext();
        }

        if (search != NULL)
        {
            // Aca se hace el proceso para ahora buscar las acciones relacionadas con el nombre
        }

        return result;
    }
}