#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    double a, A, B, S;
        cout << "Угол a =";
        cin >> a;
        cout << "Сторона A ="; 
        cin >> A;
        cout << "Сторона B="; 
        cin >> B;
    
    S = 1.0/2.0 * A*B*sin(a);
    cout << "Площадь треугольника=" << S <<endl;
    return 0;
}
