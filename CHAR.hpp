#ifndef CHAR_H
#define CHAR_H
#include <string.h>
#include "STRING.hpp"
class CHAR
{
private:
    char letra;

public:
     void operator<<(char asignar_letra)
    {
        letra = asignar_letra;
    }
    void operator<<(CHAR asigna_letra)
    {
        letra = asigna_letra.getvalue();
    }
    void operator!()
    {
        cout << letra << endl;
    }
    STRING operator+(CHAR letra2)
    {
        string suma_cadena;
        string original(1, letra);
        string concat(1, letra2.getvalue());
        suma_cadena=original+concat;
        STRING suma;
        suma << suma_cadena;
        return suma;
    }
    char getvalue()
    {
        return letra;
    }
};
#endif