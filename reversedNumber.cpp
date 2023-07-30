#include <iostream>
using namespace std;

int main()
{
    int n, r;

    //ask the user for input and save the value of n
    cout << "Enter a number and I'll print out it's reverse: ";
    cin >> n;

    //while n is greater than zero
    while(n > 0)
    {
        //assign to r the value gotten from the remainder of n divided by 10
        r = n%10;
        //print out the result
        cout << r;
        n = n/10;

    }
    return 0;
}
