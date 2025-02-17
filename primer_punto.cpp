#include <iostream>
#include <iomanip>  

using namespace std;

int main() {
    double numero;
  
    cout << "Introduce un numero: ";
    cin >> numero;

    double suma = numero + 10;            
    double resta = numero - 5;            
    double multiplicacion = numero * 3;   
    double division = numero / 2;         
    double porcentaje = numero * 0.20;    
    
    cout << fixed << setprecision(2);  

    cout << "Suma (número + 10): " << suma << endl;
    cout << "Resta (número - 5): " << resta << endl;
    cout << "Multiplicación (número * 3): " << multiplicacion << endl;
    cout << "División (número / 2): " << division << endl;
    cout << "El 20% de ese número: " << porcentaje << "%" << endl;

    return 0;
}
