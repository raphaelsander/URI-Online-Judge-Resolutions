#include<iomanip>
#include<iostream>
#include<cmath>

using namespace std;

int main(){
	
	int cont=0, maior=0, num, posicao=0;
	
	while(cont<100){
        cin >> num;
        if(num>maior){
            maior=num;
            posicao=cont+1;
        }
        cont++;
	}
	cout << maior << endl;
	cout << posicao << endl;
	system("pause");
	return 0;
}
