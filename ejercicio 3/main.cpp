#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num;
    float newnum;

    cout << "Ingrese un numero: " ;
    cin >> num,newnum;

    if (num%5==0)
    {
        newnum= num*num*num ;
    }else if (num%10==7)
    {
        newnum = (sqrt(num));
    }
    cout <<newnum;
    return 0;
}
