#include <iostream>
using namespace std;
int main()
{
    int numero;
    cout<<"ingrese su numero" <<endl;
    cin >> numero;

    if(numero > 0)
    {
        cout<<"su numero es positivo"<<endl;
        //si el numero es mayor a 0, indicar que es positivo
    } else if (numero < 0)
    {
        cout<<"su numero es negativo"<<endl;
        //si el numero es menor a 0, indicar que es negativo
    } else if (numero == 0)
    {
        cout<<"su numero es 0"<<endl;
        //si el numero es 0, indicar que es 0
    } else {}

    return 0;
}