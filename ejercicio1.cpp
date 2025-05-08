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

// Función para imprimir mensaje con parametro string e int
void imprimirMensaje(string titulo, int total){
    cout<<endl;
    cout<<titulo<<total<<endl;
    cout<<endl;
}

//funcion para contrar vocales, tipo int para reotornar el valor
int vocales(string frase){
    int vocales = 0;
    //Recorrer la cadena con for
    for(size_t i = 0; i < frase.length(); i++){
        if( (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u') && frase[i] != ' '){
            vocales ++;
        }
    }
    return vocales;
}

// funcion para contar consonantes, tipo int para retornar el valor
int consonantes(string frase){
    int consonantes = 0;
     //Recorrer la cadena con for
    for(size_t i = 0; i < frase.length(); i++){
        if( frase[i] != 'a' && frase[i] != 'e' && frase[i] != 'i' && frase[i] != 'o' && frase[i] != 'u' && frase[i] != ' '){
            consonantes ++;
        }
    }
    return consonantes;
}

int main(){

    limpiarPantalla();

    //Declarando variable string
    string cadena = "";

    cout<<"     ***** VOCALES Y CONSONANTES *****     "<<endl;
    cout<<endl;
    cout<<"Ingrese una frase: ";
    // Leyendo la variable string con getline
    getline(cin,cadena);
    //Lamando a la funcion vocales y almacenando el total de vocales
    int v = vocales(cadena);
    //Lamando a la funcion consonantes y almacenando el total de consonantes
    int c = consonantes(cadena);
    // llamando a la funcion, para imrpimri los resultados
    imprimirMensaje("Vocales: ",v);
    imprimirMensaje("Consonantes: ",c);
    return 0;
}