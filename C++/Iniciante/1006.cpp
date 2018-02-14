#include <iostream>
#include<iomanip> //PARA DETERMINAR O NUMERO DE CASAS DECIMAIS
using namespace std;

int main(){ //INICIO DO ALGORITMO
	double A, B, C, MEDIA; //TIPO DE VARIAVEIS
	cin >> A >> B >> C; //ENTRADA DAS VARIAVEIS
	MEDIA = (A*2 + B*3 + C*5)/10; //PROCESSAMNETO DOS DADOS(MEDIA PONDERADA)
	cout << fixed << setprecision(1); //UM NUMERO APOS A V?RGULA
	cout << "MEDIA = " << MEDIA << endl;
	return 0;
}//fim do algoritmo
