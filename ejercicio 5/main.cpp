#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Digite el tipo de motor: " ;
    cin >> x;

    switch(x){
        case 0:
            cout <<"No se ha establecido un valor definido para el tipo de bonba";
            break;
        case 1:
            cout <<"La bomba es una bonba de agua";
            break;
        case 2:
            cout <<"La bomba es una bomba de basolina";
            break;
        case 3:
            cout <<"La bomba es una bomba de hormigon";
            break;
        case 4:
            cout <<"La bomba es una bomba de pasta alimenticia";
            break;
        default:
            cout <<"No existe un valor valido para tipo de bomba";
            break;
    }

    cout << "\n";

    return 0;
}
