#include <iostream>
#include <math.h>

using namespace std;
int main ()
{
int i, x;
    cout << "Число";
    cin >> x;
    cout << "Бит";
    cin >> i;
    if (0 < x < 10^9  )
        cout <<( (x << i) & 1) << endl;
    else
  
    return 0;
}

