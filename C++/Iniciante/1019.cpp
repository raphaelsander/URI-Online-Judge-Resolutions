#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(){
	
	//Variáveis
	int N, seg, min, h;
	
	//Entrada de dados
	cin >> N;
	
	// Calculo dos dados
	
	h = N/3600;
	min = (N%3600)/60;
	seg = N%60;
	
	//Saída de dados
	cout << h << ":" << min << ":" << seg << endl;
  
	return 0;
}
