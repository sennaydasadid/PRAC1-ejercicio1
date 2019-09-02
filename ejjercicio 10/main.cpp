#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    float total;
    int numero;

    cout << "Cantidad total de la compra: ";
    cin >> total;

    if (total>=100)
    {
        cout <<"Gasto igual o supero los S/100 soles y por tanto participa en la promocion."<<"\n";
        cout <<"\n";
        cout <<"          COLOR           DESCUENTO";
        cout <<"\n";
        cout <<"       BOLA BLANCA         NO TIENE"<<"\n";
        cout <<"       BOLA ROJA        10 POR CIENTO"<<"\n";
        cout <<"       BOLA AZUL        20 POR CIENTO"<<"\n";
        cout <<"       BOLA VERDE       25 POR CIENTO"<<"\n";
        cout <<"       BOLA AMARILLA    50 POR CIENTO"<<"\n";
        cout <<"\n";


        numero= rand() % 5;
        switch(numero)
        {
            case 0:
                cout <<"Aleatoriamente usted obtuvo una bola blanca ";
                cout <<"\n";
                cout <<"Lamentablemente usted no participa en el desucento";
                break;
            case 1:
                cout <<"Aleatoriamente usted obtuvo una bola roja  ";
                cout <<"\n";
                cout <<"Felicidades, usted gano un 10% de descuento";
                cout <<"Su nuevo total a pagar es: "<<total*0.9;
                break;
            case 2:
                cout <<"Aleatoriamente usted obtuvo una bola azul  ";
                cout <<"\n";
                cout <<"Felicidades, usted gano un 20% de descuento";
                cout <<"Su nuevo total a pagar es: "<<total*0.8;
                break;
            case 3:
                cout <<"Aleatoriamente usted obtuvo una bola verde  ";
                cout <<"\n";
                cout <<"Felicidades, usted gano un 25% de descuento";
                cout <<"Su nuevo total a pagar es: "<<total*0.75;
                break;
            case 4:
                cout <<"Aleatoriamente usted obtuvo una bola amarilla  ";
                cout <<"\n";
                cout <<"Felicidades, usted gano un 50% de descuento";
                cout <<"Su nuevo total a pagar es: "<<total*0.5;
                break;
        }


    }else
    {
        cout <<"Gasto menos que S/100 soles y por tanto no participa en la promocion. ";
    }


    return 0;
}
