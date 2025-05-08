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

// Funcion para saber si tiene decimale so no
int esEntero(float num) {
    return (int)num == num;
}

//Funcion para enteros con for donde empieza en el numero y va descontando de 1 en 1
void desconteo(int numero){
    cout<<"Decremento de numeros enteros: "<<endl;
    cout<<endl;
    for(int i = numero; i >= 0; i--){
        cout<<i<<"   ";
    }
}

//Funcion para deciamles con for donde empieza en el numero y va descontando de 0.5 en 0.5
void desconteo(float numero){
    cout<<"Decremento de numeros decimales: "<<endl;
    cout<<endl;
    for(float i = numero; i >= 0; i = i - 0.5){
        cout<<i<<"   ";
    }
}


int main(){

    limpiarPantalla();
    // Declarando la varaible numero
    float numero = 0;

    cout<<"     ***** CUENTA REGRESIVA *****     "<<endl;
    cout<<endl;
    cout<<"Ingrese un numero: ";
    //Leyendo la variable
    cin>>numero;
    cout<<endl;

    //Comparando con la funcion esEntero para saber si tiene decimales o no y con eso llamar a la funcion correcta
    if (esEntero(numero)) {
        desconteo((int)numero);
    } else {
        desconteo(numero);
    }
    return 0;
}