#include <iostream>
using namespace std;
int main()
{
    int numero;
    cout<<"ingrese su numero" <<endl;
    cin >> numero;

    if(numero > 0){
        cout<<"su numero es positivo"<<endl;
    } else if (numero < 0){
        cout<<"su numero es negativo"<<endl;
    } else if (numero == 0){
        cout<<"su numero es 0"<<endl;
    } else {}

    return 0;
}