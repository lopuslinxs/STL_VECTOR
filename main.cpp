#include <iostream> 	// BIBLIOTECA IOSTREAM
#include <vector>   	// VIBLIOTECA VECTOR
using namespace std;

int main()
{
    vector<int> g1;  // CREANDO VECTOR QUE INGRSAN VALORES DE TIPO ENTERO CON NOMBREM G1

    for (int i = 1; i <= 5; i++)  // FOR PARA GENERAR NUMEROS DE 1 A 5
        g1.push_back(i);          // GENERA LOS ELEMENTOS AL FINAL DE LA COLA

    cout << "SALIDA DE biegin Y end : ";   //IMPRIME CON QUE FUNCIONES SE HARA EL VECTOR
    for (auto i = g1.begin(); i != g1.end(); ++i) // FOR DEBUELVE UN ITERADOR QUE APUNTA AL
        cout << *i << " "; // PRIMER ELEMENTO Y ULTIMO ELEMENTO TEORICO DEL VETOR
  				// COUT IMPRIME LA LISTA DE 1 A 5
    cout << "\nSALIDA DE cbegin and cend: "; // IMPRIME CON QUE FUNCIONES SE HARA EL VECTOR
    for (auto i = g1.cbegin(); i != g1.cend(); ++i) //FOR QUE DEBUELVE UN ITERADOR AL PRIMER ELEMENTO Y
        cout << *i << " "; // AL ULTIMO ELEMENTO DEL VECTOR
  				// COUT IMPRIME LA LISTA   1 A 5
    cout << "\nSALIDA DE rbegin and rend: "; //IMPRIME CON QUE FUNCIONES SE HARA EL VECTOR
    for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir) //FOR QUE DEBUELVE UN ITERADOR INVERSO QUE APUNTA AL
        cout << *ir << " ";  // ULTIMO ELEMENTO
  				// COUT IMPRIME LA LISTA DE 5 A 1
    cout << "\nOutput of crbegin and crend : "; //IMPRIME CON QUE FUNCIONES SE HARA EL VECTOR
    for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir) //FOR QUE DEBUELVE UN ITERADOR INVERSO CONSTANTE QUE
        cout << *ir << " "; 		// APUNTA AL ULTIMO ELEMENTO DEL VECTOR
  			// COUT IMPRIME LA LISTA DE 5 A 1
    cout << "\n\n\n GRACIAS TEAM OVERLORDS DEL C++" << endl;
    return 0;
}
