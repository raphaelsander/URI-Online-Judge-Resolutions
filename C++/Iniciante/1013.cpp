#include <iostream>
#include <iomanip> 
#include <cmath>
using namespace std;
 
int main(){
    int a, b, c, MaiorAB;
		cin >> a >> b >> c;
	
	MaiorAB = (a+b+abs(a-b))/2;
	MaiorAB = (MaiorAB+c+abs(MaiorAB-c))/2;
	
    cout << MaiorAB << " eh o maior" << endl;
    return 0;
}//fim do algoritmo
