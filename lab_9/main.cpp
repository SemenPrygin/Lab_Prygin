#include <iostream>

using namespace std;
int main() 
{ 
    int number;
    cin >> number;

unsigned char* p = (unsigned char*)&number;
for (int i = 0; i < sizeof(number); i++) 
{ 
    int byte =*(p + i); 
    cout << "Byte " << i << " - " << byte << endl; 
}

return 0; 
} 