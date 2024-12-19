#include "func.hpp"
#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
const int MAX_N = 100;
namespace def 
{ 
  void read_matrix(int matrix[MAX_N][MAX_N], int n) 
  { 
    for (int i = 0; i < n; i++) 
    { 
      for (int j = 0; j < n; j++) 
      { 
        cin >> matrix[i][j]; 
      } 
    } 
  }

void print_matrix(int matrix[MAX_N][MAX_N], int n) 
{ 
  for (int i = 0; i < n; i++) 
  { 
    for (int j = 0; j < n; j++) 
    { 
      cout << matrix[i][j] << " "; 
    } 
      cout << endl; 
  } 
}



void sort_rows_with_eight(int matrix[MAX_N][MAX_N], int n)
 { 
  for (int i = 0; i < n; i++) 
  { 
    bool eight = false; for (int j = 0; j < n; j++)
    { 
      if (to_string(matrix[i][j]).find('8') != string::npos) 
      { 
        eight = true; break; 
      } 
    } if (eight) 
      { 
        sort(matrix[i], matrix[i] + n); 
      } 
  } 
}



void find_min_max(int matrix[MAX_N][MAX_N], int n, int &min, int &max) 
{ 
  min = max = matrix[0][0]; for (int i = 0; i < n; i++) 
  { 
    for (int j = 0; j < n; j++) 
    { 
      if (matrix[i][j] < min) 
      { 
        min = matrix[i][j]; 
      } 
      if (matrix[i][j] > max) 
      { 
        max = matrix[i][j]; 
      } 
    } 
  } 
}

void process_matrix(int matrix[MAX_N][MAX_N], int n)
{ 
  int min, max; find_min_max(matrix, n, min, max);
   if (min + max == 0)
  {
    sort_rows_with_eight(matrix, n); 
  } 
} 
}

