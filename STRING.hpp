#include <string>
#include <iostream>
using namespace std;
#ifndef STRING_H
#define STRING_H
class STRING
{
private:
    string cadena;

public:
    void operator<<(string asignar_cadena)
    {
        cadena = asignar_cadena;
    }
    void operator<<(STRING asigna_cadena)
    {
        cadena = asigna_cadena.getvalue();
    }
    void operator!()
    {
        cout << cadena << endl;
    }
    STRING operator*(int multiplicacion)
    {
        string acum = "";
        for (int i = 0; i < multiplicacion; i++)
        {
            acum += cadena;
        }
        cadena = acum;
        return *this;
    }
    string getvalue()
    {
        return cadena;
    }
};
#endif
