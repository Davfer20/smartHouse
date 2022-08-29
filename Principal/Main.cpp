#include <iostream>
#include <string>
#include "../Listas/list.h.cpp"
#include "../Dispositivos/dispositivo.h.cpp"

using namespace std;

int main()
{
    List<Dispositivo> *listaCocina = new List<Dispositivo>();
    List<Dispositivo> *listaDormitorio = new List<Dispositivo>();
    List<Dispositivo> *listaGaraje = new List<Dispositivo>();
    List<string> *listaSec = new List<string>();

    Dispositivo *dispo1 = new Dispositivo("BomCuarto", bombillo, "Dormitorio");
    Dispositivo *dispo2 = new Dispositivo("ParlanteCoci", parlante, "Cochera");
    Dispositivo *dispo3 = new Dispositivo("CamaraJardin", camara, "Jardin");

    listaPrincipal->addNodoDispo(dispo1);
    listaPrincipal->addNodoDispo(dispo2);
    listaPrincipal2->addNodoDispo(dispo3);

    cout << "Cantidad: " << listaPrincipal->getSize() << endl;

    for (int i = 0; i < listaPrincipal->getSize(); i++)
    {
        Dispositivo *dispActual = listaPrincipal->find(i);
        cout << "Datos:  " << dispActual->getHabitacion() << endl;
    }
}