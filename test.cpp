#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
using namespace std;

template <typename S>
S SUM(S& one, S& two){
    return one + two;
}


int main(){
   string n = 'Timur';
   string s = "Galiev";
   cout << SUM(s,n);
   return 0;
}