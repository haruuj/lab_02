//lab_02.cpp
//<клокова анастасія>
//лабараторна робота№2.
//лінійні програми.
//варіант 18



#include <iostream>
#include <cmath> 
using namespace std;
{
    int main();
        double a, z1, z2;

        cout << " a:";
        cin >> a;
        z1 = ((a + 2) / sqrt(2 * a) - a / sqrt(2 * a + 2) + 2 / (a - sqrt(2 * a))) * (sqrt(a) - sqrt(2)) / (a + 2);
        z2 = 1 / sqrt(a + sqrt(2));

        cout << "z1 = " << z1 << endl;
        cout << "z2 = " << z2 << endl;

        return 0;
    }