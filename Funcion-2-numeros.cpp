#include <iostream>
using namespace std;
int suma(int x, int y)
{
    return x+y;
}
int resta(int x, int y)
{
    return x-y;
}
int multiplicacion(int x, int y)
{
    return x*y;
}
int division(int x, int y)
{
    return x/y;
}
int main()
{
    int a, b, opc;
    cout << "Ingrese numero entero a: " << '\n';
    cin >> a;
    cout << "Ingrese numero entero b: " << '\n';
    cin >> b;
    cout << "Elija que opcion desea: " << '\n' << "-Sumar(1)" << '\n' << "-Restar(2)" << '\n' << "-Multiplicar(3)" << '\n' << "-Dividir(4)" << '\n' <<"Otro numero: salir" << '\n';
    cout << "Su opcion es: " << '\n';
    cin >> opc;
    switch (opc)
    {
    case 1:
        cout << "El resultado de " << a << "+" << b << " es: " << suma(a,b);
        break;
    
    case 2:
        cout << "El resultado de " << a << "-" << b << " es: " << resta(a,b);
        break;

    case 3:
        cout << "El resultado de " << a << "por" << b << " es: " << multiplicacion(a,b);
        break;
    
    case 4:
        cout << "El resultado de " << a << "entre" << b << " es: " << division(a,b);
        break;
        
    default:
        cout << "No hice nada, salu";
        break;
    }
    return 0;
}