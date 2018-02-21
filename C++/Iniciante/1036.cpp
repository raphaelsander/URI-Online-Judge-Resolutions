#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main (){
    
    double A, B, C, D, R1, R2;
    cin >> A >> B >> C;
    D = B*B-4*A*C;
    if(D<0 || A==0){
          cout << "Impossivel calcular" << endl;
    }else{
          R1=(-B+sqrt(D))/(2*A);
          R2=(-B-sqrt(D))/(2*A);
          cout << fixed << setprecision(5);
          cout << "R1 = " << R1 << endl;
          cout << "R2 = " << R2 << endl;
    }
    
system("pause");    
return 0;    
}
