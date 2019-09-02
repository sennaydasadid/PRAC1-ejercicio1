#include <iostream>

using namespace std;

int main()
{
    int dia,mes;

    cout << "Ingrese el Dia y Mes de nacimiento: " ;
    cin >> dia >> mes;

    switch(mes){
        case 1:
            if(dia<=19){
                cout<<"Su signo es Capricornio. ";
            }else {
                cout<<"Su signo es Acuario. " ;
            }
        break;
        case 2:
            if(dia<=18){
                cout<<"Su signo es Acuario ";
            }else {
                cout<<"Su signo es Piscis " ;
            }
        break;
        case 3:
            if(dia<=20){
                cout<<"Su signo es Piscis ";
            }else {
                cout<<"Su signo es Aries " ;
            }
        break;
        case 4:
            if(dia<=19){
                cout<<"Su signo es Aries ";
            }else {
                cout<<"Su signo es Tauro " ;
            }
        break;
        case 5:
            if(dia<=20){
                cout<<"Su signo es Tauro ";
            }else {
                cout<<"Su signo es Geminis " ;
            }
        break;
        case 6:
            if(dia<=20){
                cout<<"Su signo es Geminis ";
            }else {
                cout<<"Su signo es Cancer " ;
            }
        break;
        case 7:
            if(dia<=22){
                cout<<"Su signo es Cancer ";
            }else {
                cout<<"Su signo es Leo " ;
            }
        break;
        case 8:
            if(dia<=22){
                cout<<"Su signo es Leo ";
            }else {
                cout<<"Su signo es Virgo " ;
            }
        break;
        case 9:
            if(dia<=22){
                cout<<"Su signo es Virgo ";
            }else {
                cout<<"Su signo es Libra " ;
            }
        break;
        case 10:
            if(dia<=22){
                cout<<"Su signo es Libra ";
            }else {
                cout<<"Su signo es Escorpio " ;
            }
        break;
        case 11:
            if(dia<=21){
                cout<<"Su signo es Escorpio ";
            }else {
                cout<<"Su signo es Sagitario " ;
            }
        break;
        case 12:
            if(dia<=21){
                cout<<"Su signo es Sagitario ";
            }else {
                cout<<"Su signo es Capricornio " ;
            }
        break;

    }


    cin.get();
    return 0;
}
