#include <iostream>
#include <math.h>
#define PI 3.14
using namespace std;

int main(){
    float radio,diametro,longitud,area;

    cout << "Ingrese radio: " << endl; //endl es como el /n
    cin>>radio;
    diametro=2*radio;
    longitud=2*PI*radio;
    area=PI*(pow(radio,2));
    cout<<"El radio es: "<<radio<<endl;
    cout<<"El diametro es: "<<diametro<<endl;
    cout<<"La longitud es: "<<longitud<<endl;
    cout<<"El area es: "<<area<<endl;
    return 0;
}
