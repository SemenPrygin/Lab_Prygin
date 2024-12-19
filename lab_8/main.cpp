#include <iostream>
#include <math.h>
#include <fstream>
#include <algorithm>

using namespace std;
string vowels = "AEIOUYaeiouy";
string consonants = "BCDFGHJKLMNPQRSTVWXZbcdfghjklmnpqrstvwxz";

 bool is_palindrome(string &s) 
{
     if (s.length() <= 2) return false;
     for (int i = 0; i < s.length() / 2; i++)
      { 
        if (s[i] != s[s.length() - 1 - i]) 
     return false; 
      } 
      return true; 
 }
 bool has_palindrome(string *words, int n) 
 { 
    for (int i = 0; i < n; i++)
    { 
        if (is_palindrome(words[i])) 
        return true; 
    } 
        return false; 
}
  int count_vowels(string s) 
{ 
    int counter = 0; 
    for (int i = 0; i < s.length(); i++)
     { 
        if (vowels.find(s[i]) != string::npos) 
        counter++; 
    } 
        return counter; 
}
void duplicate_consonants(string &s) 
{ 
    for (int i = 0; i < s.length();) 
    { 
        if (consonants.find(s[i]) != string::npos) 
        { 
            s.insert(i + 1, 1, s[i]); 
            i += 2; 
        } 
            else 
        { 
            i++; 
        } 
    }
}


   void delete_vowels(string &s) 
   { 
    for (int i = 0; i < s.length();) 
    { 
        if (vowels.find(s[i]) != string::npos) 
        { 
            s.erase(i, 1); 
        } 
        else 
        { 
            i++; 
        } 
    } 
}
     void sort_words(string *words, int n) 
     { 
        sort(words, words + n, [](const string &a, const string &b) 
        {return count_vowels(a) < count_vowels(b);}); 
}
    int main() 
    { string s; string words[1000];
     int k = 0; 
     ifstream fin("input.txt");
    while (fin >> s) 
    { 
        words[k++] = s; 
    } 
        fin.close();
if (has_palindrome(words, k)) 
{  
    sort_words(words, k);
    for (int i = 0; i < k; i++) 
    { 
        cout << words[i] << endl;
    } 
    } 
        else 
    { 
    for (int i = 0; i < k; i++) 
        { 
            delete_vowels(words[i]); 
            duplicate_consonants(words[i]); 
        } 
            sort_words(words, k);
            for (int i = 0; i < k; i++)
        { 
            cout << words[i] << endl; 
        } 
    }
  return 0;  
}