#include <iostream>

using namespace std;

int main()
{
    int temC, temF ;
    cout << "Temperatura en Centigrados es : ";
    cin >> temC;
    temF= 1.8*temC+32;
    cout << "Temperatura en Fahrenhet es: " << temF << endl;

    return 0;
}
