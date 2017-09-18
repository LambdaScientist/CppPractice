// Exercise 2
// Write a program that asks the user to type all the integers between 8 and 23 (both included) using a for loop.

#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>


using std::cin; 
using std::cout; 
using std::vector; 
using std::endl; 

template<typename Enum>
vector<Enum> mkVecBetween (const Enum start, const Enum end) {
    vector<Enum> v(1 + std::abs(end - start));
    std::iota(v.begin(), v.end(), start);
    return v;
}
template<typename PrintAble>
void printVector(const vector<PrintAble> v2print) {
    for (const auto pValue : v2print)
        cout << pValue << " ";
    cout << endl;
}
template<typename Eq>
vector<Eq> removeValueFromVector(const vector<Eq> v, const Eq cmp) {
    vector<Eq> sizeSaver (v.size());
    auto newV = std::copy_if 
                    ( v.begin()
                    , v.end()
		    , sizeSaver.begin()
		    , [&](auto a){return (cmp!=a);}                    );
    sizeSaver.resize(std::distance(sizeSaver.begin(),newV)); 
    return sizeSaver;
}

int main() {
    int start = 8 ;
    
    int end = 10;
    cout << "Please enter integers between " 
         << start << " and " << end << "(inclusive):  " 
         << endl;
   
    for (vector<int> v = mkVecBetween(start,end); v.size() != 0; printVector(v)) {
      int usrInput; 
      cin >> usrInput;
      auto updatedV = removeValueFromVector(v,usrInput);
      cout << ( v == updatedV
              ? "Value not in remaining values." 
              : "Value accepted"  
            ) << endl ;
      v = updatedV;
    }
    cout << "Done!" << endl;
    return 0; 
}

