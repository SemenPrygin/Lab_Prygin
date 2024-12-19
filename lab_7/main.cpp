#include <iostream>
#include "func.hpp"


int main() 
{
    int n; 
    cin >> n;



if (n <= 0 || n > def::MAX_N) 
{ 
    cerr << "error" << def::MAX_N << endl; 
    return 1; 
}



int matrix[def::MAX_N][def::MAX_N]; 
def::read_matrix(matrix, n);
def::process_matrix(matrix, n); 
def::print_matrix(matrix, n);



return 0; }