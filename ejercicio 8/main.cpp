#include <iostream>

using namespace std;

int main()
{
    float total,billtotal,monetotal,bill10,bill20,bill50,bill100,bill200,mone1,mone2,mone5,mone01,mone02,mone05;
    cout << "Cuantas monedas de S/0.1 centavos tines?  ";
    cin >> mone01;
    mone01=mone01*0.1;

    cout << "Cuantas monedas de S/0.2 centavos tines?  ";
    cin >> mone02;
    mone02=mone02*0.2;

    cout << "Cuantas monedas de S/0.5 centavos tines?  ";
    cin >> mone05;
    mone05=mone05*0.5;

    cout << "Cuantas monedas de S/1.0 sol tines?  ";
    cin >> mone1;
    mone1=mone1*1;

    cout << "Cuantas monedas de S/2.0 soles tienes?  ";
    cin >> mone2;
    mone2=mone2*2;

    cout << "Cuantas monedas de S/5.0 soles tienes?  ";
    cin >> mone5;
    mone5=mone5*5;

    cout << "Cuantas billetes de S/10.0 soles tienes?  ";
    cin >> bill10;
    bill10=bill10*10;

    cout << "Cuantas billetes de S/20.0 soles tienes?  ";
    cin >> bill20;
    bill20=bill20*20;

    cout << "Cuantas billetes de S/50.0 soles tienes?  ";
    cin >> bill50;
    bill50=bill50*50;

    cout << "Cuantas billetes de S/100.0 soles tienes?  ";
    cin >> bill100;
    bill100=bill100*100;

    cout << "Cuantas billetes de S/200.0 soles tienes?  ";
    cin >> bill200;
    bill200=bill200*200;

    billtotal=bill100+bill200+bill10+bill20+bill50;
    monetotal=mone01+mone02+mone05+mone1+mone2+mone5;
    total=billtotal+monetotal;

    cout<<"Suma de dinero en monedas:  "<< monetotal<<"\n";
    cout<<"Suma de dinero en billetes:  "<< billtotal<<"\n";
    cout<<"Suma total de dinero:  "<< total<<"\n";
    int cambio;
    cout << "Transformar el dinero en:  "<<"\n";
    cout << "  *  DOLARES(1)"<<"\n";
    cout << "  *  EUROS(2)"<<"\n";
    cin >>cambio;

    switch(cambio)
    {
    case 1:
        total=total*0.29;
        cout <<"El dinero en DOLARES es :  "<<total;
        break;
    case 2:
        total=total*0.27;
        cout <<"El dinero en EUROS es :  "<<total;
        break;
    }
    cin.get();
    return 0;
}
