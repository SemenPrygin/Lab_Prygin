 #include <iostream>

using namespace std;


 int main()
{
    // 1
/*
    int a, b, c;
	cin >> a >> b >> c;
	if (c < b && b < a)
	{
		cout << a - b - c;
	}
        else if (a < b && b % c == 0)
    {
		cout << b / c + b - a;
	} 
        else 
    {
		cout << a + b - c;
	}
*/


//2
/*
    int n;
    cin >> n;
    switch (n)
    {
        case 0: cout << "все хорошо ";
            break;
        case 1:
        case 2: cout << "ошибка чтения файла ";
            break;
        case 3: cout << "не все поля определены ";
            break;
        default : cout << "ошибка не установлена ";

    }

*/


//3
// Выбрал тернарный оператор, так как простая команда, этот код не будут дорабатывать, простая конструкция.
/*
    int x;
    cin >> x;
        cout << (x / 1 == - 1? "Negative number" : "Positive number");
*/	
    return 0;
}