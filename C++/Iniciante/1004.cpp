#include <iostream>
#include<iomanip> //PARA DETERMINAR O NUMERO DE CASAS DECIMAIS
using namespace std;

int main(){ //INICIO DO ALGORITMO
	int A, B, PROD; //NUMEROS DE FUNCIONARIOS - HORAS
	
	//ENTRADA DAS VARIAVEIS
	cin >> A; 
	cin >> B; 

	//PROCESSAMNETO DOS DADOS(MEDIA PONDERADA)
	PROD = (A * B); 
	cout << "PROD = " << PROD << endl;
	
	return 0;
}//fim do algoritmo

