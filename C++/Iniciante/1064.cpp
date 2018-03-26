#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    
    int aux=0;
    float num, qtPos=0, somaPos=0;
    
    while(aux<6){
        aux++;
        cin >> num;
        
        if(num>0){
            qtPos=qtPos+1;
            somaPos=somaPos+num;
        }     
    }
    
    cout << qtPos << " valores positivos" << endl;
    cout << fixed << setprecision(1);
    cout << (somaPos/qtPos) << endl;
    system("pause");
    return 0;
}
