#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;
  
int main(){
    
    double A, B, C, S;
    
    cout << fixed << setprecision(1);
    cin >> A >> B >> C;
    
	if((A<(B+C)) && (B<(A+C)) && (C<(A+B))){
		S=A+B+C;
		cout << "Perimetro = " << S << endl;
	}else{
		S=((A+B)*C)/2;
		cout << "Area = " << S << endl;
	}
	
	return(0);
}
