#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(){
	
	int hi, mi, hf, mf, h, m, t;
	 
	cin >> hi >> mi >> hf >> mf;
	
	if(hf>hi){
		t=(hf*60+mf)-(hi*60+mi);
	}else{
		t=1440-(hi*60+mi)+(hf*60+mf);
	}
	h=abs(t/60);
	m=abs(t%60);
	
	cout << "O JOGO DUROU " << h << " HORA(S) E " << m << " MINUTO(S)" << endl;
			
	return 0;
}