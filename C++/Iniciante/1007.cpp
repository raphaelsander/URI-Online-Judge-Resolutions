#include <iostream>
#include<iomanip> //PARA DETERMINAR O NUMERO DE CASAS DECIMAIS
using namespace std;

int main(){ //INICIO DO ALGORITMO
	int A, B, C, D, DIFERENCA; //NUMEROS DE FUNCIONARIOS - HORAS
	
	//ENTRADA DAS VARIAVEIS
	cin >> A; 
	cin >> B; 
	cin >> C;
	cin >> D;
	
	//PROCESSAMNETO DOS DADOS(MEDIA PONDERADA)
	DIFERENCA = (A * B - C * D); 
	cout << "DIFERENCA = " << DIFERENCA << endl;
	return 0;
}//fim do algoritmo
