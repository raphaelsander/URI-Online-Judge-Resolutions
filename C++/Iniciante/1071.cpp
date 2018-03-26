#include<iostream>
#include<iomanip>

using namespace std;
 
int main(){
     
    int X, Y, soma=0;
     
    cin >> X;
    cin >> Y;
	if(Y>X){
		X++;
		while(X<Y){
			if(X%2!=0){
				soma=X+soma;
			}
			X++;
		}
	}else if(X>Y){
		Y++;
		while(Y<X){
			if(Y%2!=0){
				soma=Y+soma;	
			}
			Y++;
		}
	}
    cout << soma << endl;
    return 0;
}
