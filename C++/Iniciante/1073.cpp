#include<iostream>
#include<iomanip>

using namespace std;
 
int main(){
     
    int N, aux=0, r;
    cin >> N; 
	r=N/N+1;
	while(aux<N){
		
		if(r%2==0){
			cout << r << "^2" << " = " << r*r << endl;
		}
		aux++;
		r++;
	}
    return 0;
}
