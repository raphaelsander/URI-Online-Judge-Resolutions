#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    
    int aux=0, num;
    
    cin >> num;
    num=num+1;
    cout << num << endl;
    while(aux<5){
        aux++;
        num=num+2;
        cout << num << endl;
        
    }
    system("pause");
    return 0;
}
