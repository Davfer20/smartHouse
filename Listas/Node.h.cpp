#include <iostream>
using namespace std;
#ifndef NODE

#define NODE 1

template <class T>

class Node
{
private:
    T *data;
    Node *nxt;

public:
    Node()
    {
        data = NULL;
        nxt = NULL;
    }

    Node(T *pData)
    {
        this->data = pData;
        nxt = NULL;
    }

    T *getData()
    {
        return data;
    }

    Node *getNext()
    {
        return nxt;
    }

    void setNext(Node *pValue)
    {
        this->nxt = pValue;
    }
};

#endif