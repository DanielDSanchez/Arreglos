#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    cout << "Punto Cantidad de Numeros" << endl;
    int tamanoVector;
    cout << "Ingrese la cantidad de numeros" << endl;
    cin >> tamanoVector;

    int numerosVector[tamanoVector];
    int numerosVectorDos[tamanoVector];

    int sumaVectorDos = 0;
    int sumaVector = 0;

    cout << "Diligencie el primer vector" << endl;
    for (int i = 0; i < tamanoVector; i++)
    {
        int numero = 0;
        cout << "Ingrese el numero para la posicion " << i << endl;
        cin >> numero;
        numerosVector[i] = numero;
        sumaVector += numero;
    }

    cout << "Diligencie el segundo vector " << endl;
    for (int i = 0; i < tamanoVector; i++)
    {
        int numero = 0;
        cout << "Ingrese el numero para la posicion " << i << endl;
        cin >> numero;
        numerosVector[i] = numero;
        sumaVectorDos += numero;
    }

    if (sumaVectorDos == sumaVector)
    {
        cout << "La suma de los dos vectores es igual" << endl;
    }
    else
    {
        cout << "La suma de los dos vectores es diferente" << endl;
    }

    cout << "Punto Buscaminas" << endl;
    int tamanoBuscaminas = 0;
    cout << "Ingrese el tamaño del buscaminas" << endl;
    cin >> tamanoBuscaminas;
    int minas[tamanoBuscaminas];

    for (int i = 0; i < tamanoBuscaminas; i++)
    {
        int mina;
        cout << "cuantas minas desea ingresar?" << endl;
        cin >> mina;
        minas[i] = mina;
    }

    int sumaMinas = 0;
    for (int i = 0; i < tamanoBuscaminas; i++)
    {
        sumaMinas += minas[i];
    }

    cout << "Usted ingreso " << sumaMinas << " Minas" << endl;

    return 0;
}
