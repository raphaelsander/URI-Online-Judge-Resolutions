#include <iostream>
#include<iomanip> 
using namespace std;
 
int main(){ 
    double A, B, media;
    cin >> fixed >> setprecision(1);
	cin >> A;
	cin >> B; 
    media = (A*3.5 + B*7.5)/11; 
    cout << fixed << setprecision(5); 
    cout << "MEDIA = " << media << endl;
    return 0;
}//fim do algoritmo
