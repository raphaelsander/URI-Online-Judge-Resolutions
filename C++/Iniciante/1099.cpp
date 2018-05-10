#include<iostream>
#include<iomanip>
 
using namespace std;
  
int main(){
      
    int X, Y, soma=0, n;
    
    cin >> n;
    
    for(int i=0; i<n; i=i+1){  
		cin >> X >> Y;
		
		if(Y>X){
			soma=0;
			X++;
			while(X<Y){
				if(X%2!=0){
					soma=X+soma;
				}
				X++;
			}
		}else if(X>Y){
			soma=0;
			Y++;
			while(Y<X){
				if(Y%2!=0){
					soma=Y+soma;    
				}
				Y++;
			}
		}else if(Y==X){
			soma=0;
		}
		cout << soma << endl;
	}
    return 0;
}
