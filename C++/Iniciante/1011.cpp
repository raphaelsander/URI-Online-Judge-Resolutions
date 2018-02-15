#include <iostream>
#include<iomanip> 
using namespace std;
 
int main(){
 
    double volume, pi, R;

	cin >> R;
	pi = 3.14159;
	volume = (4.0/3.0) * pi * R * R * R;
    cout << fixed << setprecision(3); 
    cout << "VOLUME = " << volume << endl;
    return 0;
}//fim do algoritmo
