#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	
	int N, a=0;
	
	cin >> N;
	
	for(int i=0; i<N; i++){
		cout << a+1 << " " << a+2 << " " << a+3 << " PUM" << endl;
		a=a+4;	
	}
	return 0;
}
