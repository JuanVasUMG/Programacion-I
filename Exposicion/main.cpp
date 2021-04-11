/*<--- Declaración de Librerias --->*/
#include <iostream>
using namespace std;
 
int main() {
	/*<--- Declaracion de Variables y Arrays --->*/
    int matriz[2][3][3]; // [número de matriz] [Fila] [Columna]
    int matrizSuma[3][3]; // [Fila] [Columna]
    int m, fila, columna; // Variables interactivas
 
    // Pedimos los datos de las dos matrices
    for (m=0; m<2; m++) // Selecionamos la matriz con un for
    	cout << "En la matriz " << m+1 << endl << endl;
        for (fila=0; fila<3; fila++) // selecionamos una fila
            for (columna=0; columna<3; columna++) //seleccionamos una columna
            {
            	cout<< "Dato de la fila " << fila+1 
                    << " y la columna " << columna+1 << ": ";
                cin >> matriz[m][fila][columna];
            }
 
    // Calculamos la suma
    for (fila=0; fila<3; fila++)
        for (columna=0; columna<3; columna++)
            matrizSuma[fila][columna] = matriz[0][fila][columna]
                + matriz[1][fila][columna];
 
 
    // Y mostramos el resultado (puede salir un poco descolocado)
    cout << "La matriz suma es " << endl;
    for (fila=0; fila<3; fila++)
    {
        for (columna=0; columna<3; columna++)
            cout << matrizSuma[fila][columna] << " "; 
        cout << endl;
    }
 
    return 0;
}

