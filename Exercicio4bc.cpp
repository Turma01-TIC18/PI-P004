#include <iostream>
#include <limits>
#include<iomanip>

using namespace std;

int main (){

    float pif = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895493038196442881097566593344612847564823378678316527120190914564856692346034861045432664821339360726024914127372458700660631558817488152092096282925409171536436789259036001133053054882046652138414695194151160943305727036575959195309218611738193261179310511854807446237996274956735188575272489122793818301194912;



    cout << "Numero de PI float: " << pif << endl;
    cout << "O valor de pi com duas casas decimais em float eh: " << fixed << setprecision(2) << pif << endl;
    cout << "O valor de pi com quatro casas decimais em float eh: " << fixed << setprecision(4) << pif << endl;
    cout << "O valor de pi com oito casas decimais em float eh: " << fixed << setprecision(8) << pif << endl;
    cout << "O valor de pi com dezesseis casas decimais em float eh: " << fixed << setprecision(16) << pif << endl;


    return 0;
}