#include <iostream>
using namespace std;
string paroimpar(int x)
{
    string var_sal;
    int impar = x%2;
    if (impar==1)
    {
        var_sal = "Es impar";
    }
    else
    {
        var_sal = "Es par";
    }
    return var_sal;
}
string mayoromenor(int z)
{
    string var_sal;
    if (z>0)
    {
        var_sal = "es positivo";
    }
    else if (z<0)
    {
        var_sal = "es negativo";
    }
    else if (z==0)
    {
        var_sal = "es cero";
    }
    return var_sal;
}
int main()
{
    int numero;
    string sal1, sal2;
    cout << "Insete el numero que desea evaluar" << '\n';
    cin >> numero;
    sal1= paroimpar(numero);
    sal2=mayoromenor(numero);
    cout << "El nuemro es "<< sal1 << " y " << sal2 << "." << '\n';
    return 0;
}