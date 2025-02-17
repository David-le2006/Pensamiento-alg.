#include <iostream>

using namespace std;

int main() {
    //Declarar variable para descuentos
    double precio, descuento, preciofinal;

    //Solicitar el precio full
    cout <<"ingrese el valor del producto " ;
    cin >> precio;

    //calcular el 15 % de un producto
    descuento = precio * 0.15;
    preciofinal = precio - descuento;
   
    //mostrar resultados
    cout <<"Descuento aplicado: $" << descuento << endl;
    cout << "Precio final con el respectivo descuento: $" << preciofinal << endl;

    return 0;
}
