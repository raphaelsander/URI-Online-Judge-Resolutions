#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
	double nota, media, aux=0;
	int cont=0;
	
	cout << fixed << setprecision(2);
	while(cont<2){
		cin >> nota;
		if(nota>10 || nota<0){
			cout << "nota invalida" << endl;
		}else{
			cont++;
			aux=(nota+aux)/cont;
		}
	}
	cout << fixed << setprecision(2);
	cout << "media = " << aux << endl;
	return 0;
}
