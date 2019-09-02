#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout << "Digite 3 numeros: " ;
    cin >> a >> b >> c;

    if (a<=b && a<=c)
    {
        cout<<"el menor numero es: " << a ;
    }
    else if (b<=a && b<=c)
    {
        cout<<"el menor numero es: " << b ;
    }
    else
    {
        cout<<"el menor numero es: " << c ;
    }



    return 0;
}
