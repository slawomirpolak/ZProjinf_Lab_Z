#define ilosc 100
#include <iostream>
#include <cmath>
/*
Program for solving a problem:
The sum of the squares of the first ten natural numbers is,

12 + 22 + ... + 102 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 - 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

using namespace std;

unsigned int sum(int);
unsigned int sqsum(int);

int main()
{
    cout<<"Sum square difference :"<<endl;
     cout<<sum(100)*sum(100) - sqsum(100)<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"THE END";
    cin.get();
}


/*
Public: Calculate a sum of n numbers.

number - count of numbers for calculation

Examples
        sum(2)
        =>3
        
        sum(10)
        =>45
        
Returns the sum of n numbers.
*/



unsigned int sum(int number) //function for finding sum of n numbers
{
    return (number*(number+1))/2;
}

/*
Public: Calculate a sum of squares.

number - count of numbers for calculation

Examples
        sqsum(3)
        =>14
        
        sqsum(5)
        =>55
        
Returns the sum of squares.
*/

unsigned int sqsum(int number) // function for finding sum of squares
{
         
     return ((number)*(number+1)*(2*number +1 ))/6 ;
}
