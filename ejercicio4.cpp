#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

void limpiarPantalla() {
    #ifdef _WIN32
        system("cls");  // Windows
    #else
        system("clear"); // Linux/macOS
    #endif
}

// Funcion para calcular las raices con los 3 parámetros que tenemos
void raices(int a, int b, float d){
    
    // Declaramos las varibles de las raices
    float x1 = 0, x2 = 0;

    //Asignamos los valores usando la fórmula
    x1 = (((-1 * b) + sqrt(d))/(2 * a));
    x2 = (((-1 * b) - sqrt(d))/(2 * a));

    // Impresión de los resultados
    cout<<endl;
    cout<<" RESULTADOS"<<endl;
    cout<<endl;
    cout<<"x1 = "<<x1<<endl;
    cout<<endl;
    cout<<"x2 = "<<x2<<endl;

}

int main(){

    // Declarando las variables de la ecuación
    int a = 0,b=0,c=0;
    //  Declarando la determinante
    float determinante = 0;

    limpiarPantalla();
    //Leemos todas las variables
    cout<<"     ***** ECUACION CUADRATICA *****     "<<endl;
    cout<<endl;
    cout<<"Ingrese a: ";
    cin>>a;
    cout<<endl;
    cout<<"Ingrese b: ";
    cin>>b;
    cout<<endl;
    cout<<"Ingrese c: ";
    cin>>c;
    // Calculamos la determinante con la fórmula
    determinante = ((b * b) - (4 * a * c));
    cout<<determinante<<endl;
    // Llamamos a la funcion para calcular sus raices, enviamos a , b y el determinante
    raices(a,b,determinante);
    return 0;
}