/*
#include <limits.h>
#include <iostream>
using namespace std;
 
int main(){
    int max=INT_MIN,num=-1, prod=1;
    int n;
    cin >> n;
    for (int  i = 1; i <= n; i++){
        int a;
        cin >> a;
        int r = a % 10;
        if( r==2){
            prod*=a;
            if(a > max){
                max=a;
                num=i;
    }
}
   
    }
     
    if(num!=-1)
    	cout<<prod<<" " <<max<<" "<<num;
    else cout<<"no numbers";
            
        
    
return 0;
}
*/
#include <limits.h>
#include <iostream>
using namespace std;
 
int main(){

long long  n;
cin >> n;
int dig=0;
 int count0 = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0; 
 int count5 = 0, count6 = 0, count7 = 0, count8 = 0, count9 = 0;
while (n > 0){
int d = n % 10;
switch (d) 
    { case 0: count0++;
        break; 
    case 1: count1++; 
        break; 
    case 2: count2++;
        break;
    case 3: count3++; 
        break;
    case 4: count4++; 
        break;
    case 5: count5++; 
        break; 
    case 6: count6++; 
        break; 
    case 7: count7++; 
        break; 
    case 8: count8++; 
        break; 
    case 9: count9++; 
        break; } 
        n = n / 10;
int max= count0;

if (count1 > max)
    {
         max = count1; dig = 1; 
    }
 if (count2 > max) 
    { 
        max = count2; dig = 2; 
    } 
 if (count3 > max)
    { 
        max = count3; dig = 3; 
    } 
 if (count4 > max)
    { 
        max = count4; dig = 4; 
    } 
 if (count5 > max)
    {
        max = count5; dig = 5; 
    } 
 if (count6 > max) 
    { 
        max = count6; dig = 6;
    } 
 if (count7 > max)
    { 
        max = count7; dig = 7;
    } 
 if (count8 > max)
    { 
        max = count8; dig = 8;
    } 
 if (count9 > max) 
    { 
        max = count9; dig = 9; 
    }
}
cout << dig;


    return 0;
}