#include <iostream>
#include <limits>

using namespace std;

int main (){

    unsigned long int uli;
    long int li;

    cout << "Maior valor que pode ser armazenado na variavel INT: " << numeric_limits<int>::max() << endl;
    cout << "Menor valor que pode ser armazenado na variavel INT: " << numeric_limits<int>::min() << endl;
    cout << "Maior valor que pode ser armazenado na variavel UNSIGNED LONG INT: " << numeric_limits<unsigned long int>::max() << endl;
    cout << "Menor valor que pode ser armazenado na variavel UNSIGNED LONG INT: " << numeric_limits<unsigned long int>::min() << endl;

    uli = numeric_limits<unsigned long int>::max();
    li = uli;

    cout  << "Valor de ULI: " << uli << endl;
    cout  << "Valor de LI: " << li << endl;

    uli = li;

    /*Unsigned long int armezanena apenas inteiro positivo ao contrario do long int que tem um 
    espectro maior de numeros (abrange os negativos). Logo há resultados diferentes.*/

    cout  << "Valor de ULI: " << uli << endl;
    cout  << "Valor de LI: " << li << endl;

    li = numeric_limits<long int>::max();
    cout << "Maior valor que pode ser armazenado na variavel LONG INT: " << numeric_limits<long int>::max() << endl;
    cout << "Menor valor que pode ser armazenado na variavel LONG INT: " << numeric_limits<long int>::min() << endl;


    return 0;
}