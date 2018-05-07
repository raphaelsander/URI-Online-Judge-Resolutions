#include<iomanip>
#include<iostream>
#include<cmath>

using namespace std;

int main(){
	
	int cont=0, 
	TC, //total de cobaias
	N, //numeros de entradas
	quant; //quantidade de cobaias por experiencia
	
	char tipo;
	
	double SS=0, //soma de sapos
	SR=0, //soma de ratos
	SC=0; //soma de coelhos
	
	cin >> N;
		while(cont<N){
            cin >> quant >> tipo;
			if(tipo=='C'){
				SC=quant+SC;
			}else if(tipo=='R'){
				SR=quant+SR;
			}else if(tipo=='S'){
				SS=quant+SS;
			}
			cont++;
		}
	TC=SC+SR+SS;
	cout << "Total: " << TC << " cobaias" << endl;
	cout << "Total de coelhos: " << SC << endl;
	cout << "Total de ratos: " << SR << endl;
	cout << "Total de sapos: " << SS << endl;
	cout << fixed << setprecision(2);
	cout << "Percentual de coelhos: " << (SC*100)/TC << " %" << endl;
	cout << "Percentual de ratos: " << (SR*100)/TC << " %" << endl;
	cout << "Percentual de sapos: " << (SS*100)/TC << " %" << endl;
	system("pause");
	return 0;
}
