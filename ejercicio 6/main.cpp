#include <iostream>

using namespace std;

int main()
{
    float diame, gros;

    cout << "Digite el diametro: ";
    cin >> diame;

    cout <<"Digite el grosor: ";
    cin >> gros;

    if (diame>1.4)
    {
        cout <<" * La rueda es para un vehiculo grande.";
    }else if (diame<=1.4 && diame>0.8)
    {
        cout <<" * La rueda es para un vehiculo mediano.";
    }else
    {
        cout <<" * La rueda es para un vehiculo pequeño.";
    }

    cout << "\n";

    if (diame>1.4 && gros<0.4 || diame<=1.4 && diame>0.8 && gros<0.25)
    {
        cout <<" * El grosor para esta rueda es inferior al recomendado.";
    }
    cout << "\n";
    cin.get();
    return 0;
}
