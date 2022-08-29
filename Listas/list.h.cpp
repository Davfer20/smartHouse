#include <iostream>
#include "Node.h.cpp"
#include "../Dispositivos/dispositivo.h.cpp"
using namespace std;

#ifndef LIST
#define LIST 1

template <class T>

class List
{
private:
    Node<T> *first;
    Node<T> *last;
    int quantity;
    bool empty;

public:
    List()
    {
        first = NULL;
        last = NULL;
        quantity = 0;
        empty = true;
    }

    void addNodoDispo(T *pData)
    {
        Node<T> *newNode = new Node<T>(pData); // Este nodo apunta al dispositivo

        if (quantity > 0)
        {
            this->last->setNext(newNode);
            this->last = newNode;
        }
        else
        {
            this->first = newNode;
            this->last = newNode;
        }
        empty = false;
        quantity++;
    }

    Node<T> *getFirst()
    {
        return this->first;
    }

    int getSize()
    {
        return quantity;
    }

    T *find(int pPosition)
    {
        T *result = NULL;
        Node<T> *search = this->first;

        if (pPosition < getSize())
        {
            while (pPosition > 0)
            {
                search = search->getNext();
                pPosition--;
            }
            result = search->getData();
        }

        return result;
    }

    T *find(string pTitle)
    {
        T *result = NULL;
        Node<T> *search = this->first;

        while (search != NULL && search->getData()->getTitle() != pTitle)
        {
            search = search->getNext();
        }

        if (search != NULL)
        {
            result = search->getData();
        }
        return result;
    }
};
;

#endif