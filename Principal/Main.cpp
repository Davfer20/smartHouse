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

    Dispositivo *dispo1 = new Dispositivo("BomCuarto", bombillo, "Dormitorio");
    Dispositivo *dispo2 = new Dispositivo("ParlanteCoci", parlante, "Cochera");
    Dispositivo *dispo3 = new Dispositivo("CamaraJardin", camara, "Jardin");

    listaCocina->addNodoDispo(dispo1);
    listaCocina->addNodoDispo(dispo2);
    listaCocina->addNodoDispo(dispo3);

    for (int i = 0; i < listaCocina->getSize(); i++)
    {
        Dispositivo *actual = listaCocina->find(i);
        cout << actual->getNombre() << endl;
    }
}