#include <iostream>
using namespace std;
  
int main()
{
    double valor;
    cin >> valor;
    int n = 100 * valor; 
 
    int x = n / 10000; n -= x * 10000;
    cout << valor << endl;
    cout << x << " nota(s) de R$ 100,00" << endl;
    x = n / 5000; n -= x * 5000;
    cout << x << " nota(s) de R$ 50,00" << endl;
    x = n / 2000; n -= x * 2000;
    cout << x << " nota(s) de R$ 20,00" << endl;
    x = n / 1000; n -= x * 1000;
    cout << x << " nota(s) de R$ 10,00" << endl;
    x = n / 500; n -= x * 500;
    cout << x << " nota(s) de R$ 5,00" << endl;
    x = n / 200; n -= x * 200;
    cout << x << " nota(s) de R$ 2,00" << endl;
    x = n / 100; n -= x * 100;
    cout << x << " nota(s) de R$ 1,00" << endl;
	return(0);
}
