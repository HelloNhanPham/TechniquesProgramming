#include <iostream>
using namespace std;

int SumOfDigits(int N)
{
    if (N<10)
        return N;
    return N%10 + SumOfDigits(N/10);
}

int repeatedSumOfDigits(int N)
{
    if (N < 10)
        return N;
    return repeatedSumOfDigits(SumOfDigits(N));
}

int main()
{
    int t = 1234;
    cout << "Given number is: " << t << endl;
    cout << "Solution is: " << repeatedSumOfDigits(1234);
    return 0;
}