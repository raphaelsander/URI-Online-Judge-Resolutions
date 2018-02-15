#include <iostream>
#include<iomanip> //PARA DETERMINAR O NUMERO DE CASAS DECIMAIS
using namespace std;

int main(){ //INICIO DO ALGORITMO
	int NF, H; //NUMEROS DE FUNCIONARIOS - HORAS
	float VH, SALARIO; //VALOR DA HORA - SALARIO
	
	//ENTRADA DAS VARIAVEIS
	cin >> NF; 
	cin >> H; 
	cin >> VH;
	
	//PROCESSAMNETO DOS DADOS(MEDIA PONDERADA)
	SALARIO = VH * H; 
	cout << fixed << setprecision(2); //2 NUMEROS APOS A V?RGULA
	cout << "NUMBER = " << NF << endl;
	cout << "SALARY = U$ " << SALARIO << endl;
	return 0;
}//fim do algoritmo
