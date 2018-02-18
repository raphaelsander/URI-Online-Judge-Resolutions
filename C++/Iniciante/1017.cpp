#include<iostream>
#include<iomanip>
#include<cmath>
  
using namespace std;
  
int main(){
      
    double L, H, Vm;
    
    cin >> H;
    cin >> Vm;
    
    cout << fixed << setprecision(3);
    L=(H*Vm)/12;
    cout << L << endl;
   
    return 0;
}
