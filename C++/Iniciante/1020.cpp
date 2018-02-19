#include <iostream>
using namespace std;
  
int main(){
    int C, D, E, A;
    
    cin >> A;
    
    C=A/365;
    D=A%365/30;
    E=A%365%30;
    
    cout << C << " ano(s)" << endl;
    cout << D << " mes(es)" << endl;
    cout << E << " dia(s)" << endl;
	return(0);
}
