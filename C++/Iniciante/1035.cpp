#include<iostream>
#include<iomanip>
#include<cmath>
  
using namespace std;
  
int main(){
      
    //Variáveis
    int A, B, C, D;
      
    //Entrada de dados
    cin >> A >> B >> C >> D;
      
    //Saída de dados
    
    if((B>C) && (D>A) && (C+D>A+B) && (C>=0) 
    && (D>=0) && (A%2==0))
    {//inicio
       cout << "Valores aceitos" << endl;
    }else{//se for falso
       cout << "Valores nao aceitos" << endl;
    }
    
    system("pause");//versão antiga DEV C++
    return 0;
}
