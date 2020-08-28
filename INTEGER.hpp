#include <iostream>
using namespace std;
#ifndef INTEGER_H
#define INTEGER_H
class INTEGER
{
private:
    int numero;

public:
    void operator<<(int numero_asignar)
    {
        numero = numero_asignar;
    }

    void operator<<(INTEGER numero_asignar)
    {
        numero = numero_asignar.getvalue();
    }
    void operator!()
    {
        cout << numero << endl;
    }
    int getvalue()
    {
        return numero;
    }
    INTEGER operator+(INTEGER numero_sumar)
    {
        int sum_numeros;
        sum_numeros = numero + numero_sumar.getvalue();
        INTEGER suma;
        suma << sum_numeros;
        return suma;
    }
    INTEGER operator-(INTEGER numero_resta)
    {
        int resta_numeros;
        resta_numeros = numero - numero_resta.getvalue();
        INTEGER resta;
        resta << resta_numeros;
        return resta;
    }
    INTEGER operator*(INTEGER numero_mult)
    {
        int mult_numeros;
        mult_numeros = numero * numero_mult.getvalue();
        INTEGER multiplicacion;
        multiplicacion << mult_numeros;
        return multiplicacion;
    }
    INTEGER operator/(INTEGER numero_div)
    {
        int div_numeros;
        div_numeros = numero / numero_div.getvalue();
        INTEGER division;
        division << div_numeros;
        return division;
    }
};
#endif
