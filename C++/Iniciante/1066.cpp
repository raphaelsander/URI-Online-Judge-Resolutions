#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    
    int aux=0, num, qtPos=0, qtNeg=0, qtPar=0, qtImp=0;
    
    while(aux<5){
        aux++;
        cin >> num;
        
        if(num>0){
            qtPos=qtPos+1;
        }if(num%2==0){
            qtPar=qtPar+1;
        }if(num%2!=0){
            qtImp=qtImp+1;
        }if(num<0){
            qtNeg=qtNeg+1;
        }     
    }
    
    cout << qtPar << " valor(es) par(es)" << endl;
    cout << qtImp << " valor(es) impar(es)" << endl;
    cout << qtPos << " valor(es) positivo(s)" << endl;
    cout << qtNeg << " valor(es) negativo(s)" << endl;
    
    system("pause");
    return 0;
}
