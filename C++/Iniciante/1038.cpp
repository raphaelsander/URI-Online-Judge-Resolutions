#include<iomanip>
#include<iostream>

using namespace std;

int main(){
	int cod, qnt;
	double total;
	cin >> cod >> qnt;
	switch(cod){
		case 1:
			total=qnt*4;
			break;
		case 2:
			total=qnt*4.50;
			break;
		case 3:
			total=qnt*5;
			break;
		case 4:
			total=qnt*2;
			break;
		case 5:
			total=qnt*1.50;
			break;
	}		
			
	cout << fixed << setprecision(2);
	cout << "Total: R$ " << total << endl;
	return 0;
}
