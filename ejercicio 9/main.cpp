#include <iostream>

using namespace std;

int main()
{
    float turno1,turno2,turno3,turno4,totaloficina, totalextra, total;

    cout << "           HORARIO           PAGO     " << "\n";
    cout << "      8:00am - 4:00pm        PAGO BASE  " << "\n";
    cout << "      4:00pm - 8:00pm        25% EXTRA  " << "\n";
    cout << "      8:00pm - 12:00am       50% EXTRA  " << "\n";
    cout << "     12:00am - 6;00am        PAGO DOBLE " << "\n";
    cout << "\n";
    cout <<"Sueldo base por hora trabajada: 10 "<<"\n";
    cout << "\n";
    cout <<"Numero de horas trabajadas de 8:00am - 4:00pm   : ";
    cin >> turno1;
    cout <<"Numero de horas trabajadas de 4:00pm - 8:00pm   : ";
    cin >> turno2;
    cout <<"Numero de horas trabajadas de 8:00pm - 12:00am  : ";
    cin >> turno3;
    cout <<"Numero de horas trabajadas de 12:00am - 6;00am  : ";
    cin >> turno4;
    cout << "\n";

    totaloficina=turno1*10;
    totalextra=turno2*12.5+turno3*15.0+turno4*20.0;
    total=totaloficina+totalextra;

    cout << "El pago total que recibira el trabajador es: "<<total<<"\n";
    cout << "\n";
    cout << "El salario del trabajador por horas de oficina es: "<<totaloficina<<"\n";
    cout << "El salario del trabajador por horas extras es: "<<totalextra<<"\n";
    cout << "\n";

    if (totaloficina>totalextra)
    {
        cout <<"El trabajador gano mas dinero por horas de oficina que por horas extras";
    }else if (totalextra>totaloficina)
    {
        cout <<"El trabajador gano mas dinero por horas extras que por horas de oficina";
    }else
    {
        cout<<"El trabajador gano lo mismo por horas extras que por horas de oficina";
    }
    cout << "\n";
    return 0;
}
