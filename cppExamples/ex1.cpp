// Exercise 1
// Write a program that asks the user to type an integer and writes "YOU WIN" 
// if the value is between 56 and 78 (both included). In the other case it writes "YOU LOSE".

//Example 1
#include <iostream>

using std::cin; 
using std::cout; 
using std::string; 
using std::endl; 

template<typename Cmp>
bool isBetween(const Cmp low, const Cmp high, const Cmp value)
{
  return (value > low && value < high);
}

int main()
{
    cout << "Please enter a number: " << endl;
    int usrInput; 
    cin >> usrInput;

    cout << ( isBetween(56,78, usrInput)
              ? "You win" 
              : "You lost" 
            ) << endl ;
            
    return 0; 
}