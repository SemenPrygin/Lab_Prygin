#include <iostream>
#include <limits>
/* Переменная - — это область физической или виртуальной памяти, с определенным типом, предназначенная для хранения данных (значений).


Целочисленные типы:

1 Short - Предназначен для хранения числа.
    Диапазоном от -32768 до 32767. 2 байта (знаковый).
    Диапазоном от 0 до 65535. 2 байта (беззнаковый).
2 Int -  Предназначен для хранения числа
    Диапазоном от -32768 (−2147483648) до 32767 (2147483647). 2-4 байта (знаковые)
3 Long long - Представляет целое число в диапазоне от −9 223 372 036 854 775 808 до +9 223 372 036 854 775 807.
    Занимает в памяти 8 байт 
4 Unsigned int - Представляет положительное целое число. 
   Диапазон  0 до 4 294 967 295 , занимает 4 байта.

Символьный тип:
1 Char - Предназначен для хранения одного любого символа.
    Диапазон значений от -128 до 127. 1 байт (знаковые).
    Диапазон значений от 0 до 255. 1 байт (беззнаковые).
    
Вещественный тип:
1 Float - Предназначен для хранения числа с плавующей точкой.
    Диапазоном от 1.17549e-38 до 3.40282e+38, занимает 4 байта.
2 Double - Предназначен для хранения числа с плавующей точкой.
    Диапазоном от 2.22507e-308  до 1.79769e+308, занимает  32 байта.

Логический тип:
1 Bool - Принимает значения 0 и 1 (True / False)
    Занимает 1 байт.
*/

using namespace std;
int main(){

    cout << " Short, 2 byte, min values: " << numeric_limits<short>::min() << " " << " max values: "<< numeric_limits<short>::max() << endl;
    cout << " Int, 4 byte, min values: " << numeric_limits<int>::min() << " " << " max values: "<< numeric_limits<int>::max() << endl;
    cout << " Long long, 8 byte, min values: " << numeric_limits<long long>::min() << " " << " max values: "<< numeric_limits<long long>::max() << endl;
    cout << " Unsigned int, 4 byte, min values: " << numeric_limits<unsigned int>::min() << " " << " max values: "<< numeric_limits<unsigned int>::max() << endl;
    cout << " Char, 1 byte, min values: "  << "-128" << " " << " max values: "<<"127"<< endl;
    cout << " Float, 4 byte, min values: " << numeric_limits<float>::min() << " " << " max values: "<< numeric_limits<float>::max() << endl;
    cout << " Double, 32 byte, min values: " << numeric_limits<double>::min() << " " << " max values: "<< numeric_limits<double>::max() << endl;
    cout << " Bool, 1 byte, min values: " << numeric_limits<bool>::min() << " " << " max values: "<< numeric_limits<bool>::max() << endl;

    cout << "Operations: " << endl;
    cout << "Short: 789 + 369 = " << 789 + 369 << endl;
    cout << "Int: 123 + 456 = " << 123 + 456 << endl;
    cout << "Long long: 85.2123 + 9638.52 = " << 85.2123 + 9638.52 << endl;
    cout << "Unsigned int: 145 + 459 = " << 145 + 459 << endl;
    cout << "Char: A + B = " << 'A' + 'B' << endl;
    cout << "Double: 5.98 + 2.45 = " << 5.98 + 2.45 << endl;
    cout << "Float: 4.12 + 5.75 = " << 4.12f + 5.75f << endl;
    cout << "Bool: true + false = " << true + false << endl;
    
    return 0;
}