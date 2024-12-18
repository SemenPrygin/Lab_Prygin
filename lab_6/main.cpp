/*	Дана последовательность натуральных чисел {aj}j=1...n (n<=10000). 
Если в последовательности есть хотя бы одно простое число, упорядочить последовательность по неубыванию.

#include <iostream>
#include <math.h>

using namespace std;

int main ()
{

const int N_MAX = 10000;
int mas [N_MAX];

int n;
cin >> n;
for ( int i = 0; i<n; i++ )
cin >> mas [i];

bool isPrime = false; 
for (int i = 0; i < n; i++) 
{
for (int d = 2; d <= sqrt(mas[i])+1; d++)
{
     if (mas[i] % d ==0) 
     {
         isPrime = true; 
         break;
     } 
}

if (!isPrime)
{
    for (int i = 0; i < n-1; i++)
        for (int j=i+1; j<n; j++)
            if (mas [i] > mas[j])
            {
                int tmp = mas[i];
                mas[i] = mas [j];
                mas[j] = tmp;
            }
for (int i = 0; i < n; i++)
cout << mas [i] << " ";
break;

}

else
{ 
    for (int i = 0; i < n; i++) 
        cout << mas[i] << " ";
        
 
}
break; 
}
    return 0;
}
*/
/*Ввести последовательность натуральных чисел {Aj}j=1...n (n<=1000).
Упорядочить последовательность по неубыванию произведения цифр числа,
числа с одинаковыми произведениями цифр дополнительно упорядочить по неубыванию первой цифры числа,
 числа с одинаковыми произведениями цифр и одинаковыми первыми цифрами дополнительно упорядочить по неубыванию самого числа.
 

#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
const int N_MAX = 1000;
int mas [N_MAX];
int n;
cin >> n;

//ввод
for ( int i = 0; i<n; i++ )
{
cin >> mas [i];
}


for (int i = 0; i < n-1; i++)
        for (int j=i+1; j<n; j++)
        {
        int productI = 1;
        int a=mas[i];
        while ( a > 0)
            { 
            productI *= (a % 10); 
            a /= 10;
            } 
        int productJ = 1; 
        int b=mas[j];
        while ( b > 0)
            { 
            productJ *= (b % 10); 
            b /= 10;
            } 
        
        
        int firstI = mas[i];
        while (firstI > 9)
            {
            firstI /=10;
            }

        int firstJ = mas[j];
        while (firstJ > 9)
            {
            firstJ /=10;
            }

        if(productI > productJ)
            {
            int tmp = mas[i];
            mas[i] = mas [j];
            mas[j] = tmp;
            }

        else if (productI == productJ && firstI > firstJ)
            {
            int tmp = mas[i];
            mas[i] = mas [j];
            mas[j] = tmp;
            }
        else if ( productI == productJ && firstI == firstJ && mas[i] > mas[j])
            {
            int tmp = mas[i];
            mas[i] = mas [j];
            mas[j] = tmp;
            }
       
       }
//вывод
for (int i = 0; i < n; i++) 
        cout << mas[i] << " ";
   
   return 0;
}
*/
#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
int matrix[100][100];

int n,m;
cin >> n >> m;
for (int i=0; i<n; i++)
    for (int j=0; j<m; j++)
    cin >> matrix[i][j];
int mineven= m + 1;
int index = -1; 
for (int i = 0; i < n; i++) 
    {
    int evencount = 0;
    for (int j = 0; j < m; j++) 
        { 
        if (matrix[i][j] % 2 == 0) 
            {
             evencount++; 
            } 
        } 
        if (evencount < mineven) 
        { 
            mineven = evencount;
            index = i; 
        } 
    }
if (index!= -1) 
{
    for (int j = 0; j < m; j++) 
    { 
        matrix[index][j] = matrix[index][j] * matrix[index][j]; 
    } 
}
for (int i=0; i<n; i++)
{
    for (int j=0; j<m; j++)
        cout << matrix[i][j] << " ";
        cout << endl;
}
return 0;
}











/*Сначала введите последовательность. Затем удалите и продублируйте элементы. Затем выведите полученную последовательность 
(каждый элемент по одному разу). Используйте в программе только один массив.

Дана последовательность натуральных чисел {Aj}j=1...n (n<=10000). 
Удалить из последовательности числа, произведение цифр которых равно 180, а среди оставшихся продублировать числа, 
начинающиеся и заканчивающиеся цифрой 1.

#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
const int N_MAX = 20000;
int mas[N_MAX];
int n;
cin >> n;

for ( int i = 0; i<n; i++ )
cin >> mas[i];

// Удаление
for ( int i=0; i<n; i++)
{
    int productI = 1;
    int a = mas[i];
    while ( a > 0)
    {
        productI *= (a % 10); 
            a /= 10;
    }
    if (productI == 180)
    {
        for (int j = i; j < n-1; j++)
            mas[j] = mas[j+1];
        i--;
        n--;
    }
}
//Дубляж

 for (int i = 0; i < n; i++) 
{
    if (mas[i] > 9 && (mas[i] / 10) % 10 == 1 && (mas[i] % 10) == 1) 
    { 
        for (int j = n; j > i; j--) 
            mas[j - 1] = mas[j]; 
        n++; 
        i++; 
     }
}

for (int i = 0; i < n; i++) 
        cout << mas[i] << " ";

  return 0;
}
*/