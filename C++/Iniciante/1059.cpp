#include<iostream>

using namespace std;

int main(){
    
    int aux=1;
    
    while(aux<=100){
        if(aux%2==0){
            cout << aux << endl;
        } 
        aux+=1;             
    }
    system("pause");
    return 0;
}
