#include<iostream>
#include<iomanip>

using namespace std;
 
int main(){
     
    int N, aux=0, num, in=0, out=0;
    cin >> N; 
	
	while(aux<N){
		cin >> num;
		if(num>=10 && num<=20){
			in=in+1;
		}else{
			out=out+1;
		}
		aux++;
	}
    cout << in << " in" << endl;
    cout << out << " out" << endl;
    return 0;
}
