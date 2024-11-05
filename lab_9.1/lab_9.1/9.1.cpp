#include <iostream>
#include <math.h>
#include <iomanip>
#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;


int main() {
 
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;

    cout << fixed;
    cout << "-------------------------------------------------------" << endl;
    cout << "|" << setw(5) << "x" << setw(4) << " |"
        << setw(10) << "asin()" << setw(4) << " |"
        << setw(9) << "S" << setw(8) << " |"
        << setw(7) << "n" << setw(7) << " |"
        << endl;
    cout << "-------------------------------------------------------" << endl;

    x = xp;
    while (x <= xk) {
        nsSum::sum();

      
            cout << "|" << setw(7) << setprecision(2) << x << setw(2) << " |"
                << setw(10) << setprecision(5) << asin(x) << setw(4) << " |"
                << setw(10) << setprecision(5) << S << setw(7) << " |"
                << setw(7) << n << setw(7) << " |"
                << endl;
        
        x += dx;
    }

    
    cout << "-------------------------------------------------------" << endl;
    cin.get();
    return 0;

}
