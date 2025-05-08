#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

void limpiarPantalla() {
    #ifdef _WIN32
        system("cls");  // Windows
    #else
        system("clear"); // Linux/macOS
    #endif
}

void perfecto(int numero){
    //Declarando la variable suma
    int suma = 0;
    //Ciclo de repeticion para dividir todos los numneros para el numero ingresado
    for(int i = numero -1; i >= 1; i--){
        //Dividimos y sacamos el residuo (%) si el residuo es 0 es divisible para num
       if(numero % i == 0){
        //Sumamos los nuevos que cumplen la condición
        suma = suma + i;
       }
    }

    
    cout<<endl;
    //Si la suma es igual al numero es un numero perfecto si no, no lo es
    numero == suma ? cout<<"El numero "<<numero<<" es perfecto"<<endl : cout<<"El numero "<<numero<<" no es perfecto"<<endl;
    cout<<endl;
}

int main(){

    // Declarando la variable numero
    int numero;

    // Usamos Do ya que un numero perfecto debe ser solo positivo
    do
    {
        limpiarPantalla();
        cout<<"     ***** NUMERO PERFECTO ? *****     "<<endl;
        cout<<endl;
        cout<<"Ingrese un numero: ";
        // Leyendo la variable numero
        cin>>numero;

    } while (numero < 0);

    //Llamamos a la funcion perfecto enviandole numero
    perfecto(numero);

    return 0;
}