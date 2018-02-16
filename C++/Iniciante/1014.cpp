#include<iostream>
#include<iomanip>
#include<cmath>
 
using namespace std;
 
int main (){
     
    int X;
    double Y, G;
    
    cin >> X;
    cin >> Y;
    G=X/Y;
    cout << fixed << setprecision(3);
    cout << G << " km/l" << endl;
    
return 0;   
}
