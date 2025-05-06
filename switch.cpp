#include <iostream>
using namespace std;

int main()
{
    float numero1, numero2,suma ,resta, multiplicacion, division;
    int opcion;

    cout <<"----------Bienvenido----------" <<endl;

    cout << "ingrese el primer numero"; 
    cin  >> numero1;
    cout << "ingrese el segundo numero";
    cin  >> numero2;
    cout <<"-------------------------------" <<endl;

    cout <<"ingrese la operacion que desea realizar" <<endl;
    cout <<"----------Menu----------" <<endl;
    cout <<"|1-suma                |" <<endl;
    cout <<"|2-resta               |" <<endl;
    cout <<"|3-multiplicacion      |" <<endl;
    cout <<"|4-division            |" <<endl;
    cout <<"|5-salir               |" <<endl;
    cout <<"------------------------" <<endl;
    cin >> opcion;

    //le pido al usuario su numero y despues la operacion que desea

    switch (opcion)
    {
        case 1:
        suma = numero1 + numero2;
        cout <<"el resultado de la suma es" <<suma <<endl;
        break;

        case 2:
        resta = numero1 - numero2;
        cout <<"el resultado de la resta es" <<resta <<endl;
        break;

        case 3:
        multiplicacion = numero1 * numero2;
        cout <<"el resultado de la multiplicacion es" <<multiplicacion <<endl;
        break;

        case 4:
        if (numero2 == 0)
        {
        cout <<"error" <<endl;
        }
        else
        { division = numero1/numero2;
            cout <<"el resultado de la division es" <<division <<endl;
        }
        break;

        case 5:
        cout <<"bye" <<endl;
        break;
        default:
        cout <<"porfavor eliga de las opciones antes dadas" <<endl;
        return 1;
        }
        //en todos los caso lo que hice fue con los numero que antes pedi hacer las operaciones, lo unico que se agrego es la division 0 que lo imprimiria como error
    return 0;
}