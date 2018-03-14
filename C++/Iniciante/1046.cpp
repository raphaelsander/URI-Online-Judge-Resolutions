#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main (){
    
    int i, f, t;
    cin >> i >> f;
    if(i>f){
          t=24-i+f;
    }else{
          t=f-i;
    }
    cout << "O JOGO DUROU " << t << " HORA(S)" << endl;
    
	system("pause");    
	return 0;    
}