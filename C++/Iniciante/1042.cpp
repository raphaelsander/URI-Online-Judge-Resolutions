#include<iostream>
#include<iomanip>
#include<cmath>
  
using namespace std;
  
int main (){
      
    int A, B, C;
    
    cin >> A >> B >> C;
    
    if(A>B && B>C){
    	cout << C << endl;
    	cout << B << endl;
    	cout << A << endl;
    }else if(A>C && C>B){
    	cout << B << endl;
    	cout << C << endl;
    	cout << A << endl;
    }else if(B>A && A>C){
    	cout << C << endl;
    	cout << A << endl;
    	cout << B << endl;
    }else if(B>C && C>A){
    	cout << A << endl;
    	cout << C << endl;
    	cout << B << endl;
    }else if(C>B && B>A){
    	cout << A << endl;
    	cout << B << endl;
    	cout << C << endl;
    }else{
    	cout << B << endl;
    	cout << A << endl;
    	cout << C << endl;
    }
    cout << endl;
    cout << A << endl;
    cout << B << endl;
    cout << C << endl;
    	
return 0;   
}
