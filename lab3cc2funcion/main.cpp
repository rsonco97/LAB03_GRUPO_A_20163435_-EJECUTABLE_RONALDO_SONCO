/*
//Ejercicio 1
#include <iostream>

using namespace std;

int potencia(int n, int e){
    int r=n;
    while(e>1){
        r=r*n;
        e--;
    }return r;
}

int main()
{
    int n,e;
    cout << "POTENCIA!" << endl;
    cout<<"N: ";cin>>n;
    cout<<"a que potencia elevamos a N: ";cin>>e;
    cout<<"Rpta: "<<potencia(n,e)<<endl;
    return 0;
}

// Ejercicio 2
#include <iostream>

using namespace std;

int anne_bisiesto(int a){
    if(a%4 == 0 and a%100 != 0 or a%400 == 0){
        cout<<"Si es bisiesto"<<endl;
    }else{
        cout<<"No es bisiesto"<<endl;
    }
}

int main(){
    int a;
    cout<<"IDENTIFICAR EL ANNE BISIESTO"<<endl;
    cout<<"Ingrese el anne :D: ";cin>>a;
    cout<<"El resultado es: "<<anne_bisiesto(a);
    return 0;
}
//Ejercicio 3

#include <iostream>

using namespace std;

void calcularEdad(int anioAct,int mesAct,int fechAct,int anioNac,int mesNac, int fechNac)
{
    int respFech , respMes;
    if ( fechAct < fechNac  ){
        fechAct = fechAct + 30;
        mesAct = mesAct - 1;
        respFech =  fechAct - fechNac;
    }
    else{
        respFech =  fechAct - fechNac;
    }if( mesAct < mesNac ){
        mesAct = mesAct + 12;
        anioAct = anioAct - 1 ;
        respMes = mesAct - mesNac;
    }else{
        respMes = mesAct - mesNac;
    }cout << "\nUd. tiene:\n";
    cout << " Edad: " <<anioAct - anioNac << endl;
    cout << " Mes: " << respMes << endl;
    cout << " Dia: " << respFech << endl;
}
int main(){
    int anioAct, mesAct,fechAct,anioNac,mesNac,fechNac;

    cout << "Programa que calcula la Edad, Mes y Dia"<<endl;
    cout << "Ingrese Año Actual: ";   cin >> anioAct;
    cout << "Ingrese nro Mes Actual: ";   cin >> mesAct;
    cout << "Ingrese dia Actual: ";  cin >> fechAct;

    cout << "\nIngrese Año Nacimiento: ";  cin >> anioNac;
    cout << "Ingrese nro Mes de Nacimiento: ";  cin >> mesNac;
    cout << "Ingrese dia de Nacimiento: ";  cin >> fechNac;

    calcularEdad( anioAct , mesAct, fechAct, anioNac, mesNac, fechNac);
    return 0;
}
*/
//Ejercicio 4

#include <iostream>

using namespace std;

int primos(int y){
    int c,x=1;
    if(x<y){
        for(int i=x; i<=y; i++){
            for(int j=2;j<=i;j++){
                if(i%j==0){
                    c++;
                }
            }if(c==1){
                cout<<i<<" ";
            }c=0;
        }
    }
}

int main(){
    int y;
    cout<<"Primos desde 1 a Y"<<endl;
    cout<<"Ingrese Y: ";cin>>y;
    cout<<"Los primos son: "<<primos(y);
    return 0;
}

