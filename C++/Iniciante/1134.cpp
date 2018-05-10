#include<iostream>

using namespace std;

int main(){
	
	int op, a=0, g=0, d=0;
	
	do{
		cin >> op;
		switch(op){
			case 1:
				a++;
			break;
			case 2:
				g++;
			break;
			case 3:
				d++;
			break;
		}
	}while(op!=4);
	
	cout << "MUITO OBRIGADO" << endl;
	cout << "Alcool: " << a << endl;
	cout << "Gasolina: " << g << endl;
	cout << "Diesel: " << d << endl;
	
	return 0;
}
