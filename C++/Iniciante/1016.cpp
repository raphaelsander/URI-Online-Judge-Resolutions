#include<iostream>
#include<iomanip>
#include<cmath>
 
using namespace std;
 
int main(){
     
    //Variáveis
    int d;
    double hr, min;
     
    //Entrada de dados
    cin >> d;
     
    // Calculo dos dados
    hr = d/30.0;
    min = hr*60;
     
    //Saída de dados
    cout << min << " minutos" << endl;
  
    return 0;
}
