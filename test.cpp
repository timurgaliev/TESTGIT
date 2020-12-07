#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
using namespace std;

template <typename C, typename S>
S SUM(S& one, C& two){
    return one + two;
}


int main(){
   char n = 'Timur';
   string s = "Galiev";
   cout << SUM(s,n);
   return 0;
}