#include<iostream>
#include<iomanip>
#include<cmath>
  
using namespace std;
  
int main (){
      
    double reaj, nvsal, sal;
    int porc;
    
    cout << fixed << setprecision(2);
    cin >> sal;
    
    if(sal<=400){
    	nvsal=sal+sal*15/100;
    	reaj=sal*15/100;
    	porc=15;
    }else if(sal>400 && sal<=800){
    	nvsal=sal+sal*12/100;
    	reaj=sal*12/100;
    	porc=12;
    }else if(sal>800 && sal<=1200){
    	nvsal=sal+sal*10/100;
    	reaj=sal*10/100;
    	porc=10;
    }else if(sal>1200 && sal<=2000){
    	nvsal=sal+sal*7/100;
    	reaj=sal*7/100;
    	porc=7;
    }else{
    	nvsal=sal+sal*4/100;
    	reaj=sal*4/100;
    	porc=4;
    }
    cout << "Novo salario: " << nvsal << endl;
    cout << "Reajuste ganho: " << reaj << endl;
    cout << "Em percentual: " << porc << " %" << endl;
    	
return 0;   
}
