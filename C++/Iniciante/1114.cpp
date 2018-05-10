#include<iostream>

using namespace std;

int main(){
	
	int aux=0, senha;
	
	do{
		if(aux==1){
			cout << "Senha Invalida" << endl;
		}
		cin >> senha;
		aux = 1;	
	}while(senha!=2002);
	cout << "Acesso Permitido" << endl;
	return 0;
}
