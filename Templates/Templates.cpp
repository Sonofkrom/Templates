// Marcus Needham
// CIS 1202 501
// April 30 2023

#include <iostream>
#include <cmath>

using namespace std;

template <typename T> T half(T);
int half(int);

int main()
{
    double a = 2.4;
    float b = 75;
    int c = 27;

    cout << half(a) << endl;
    cout << half(b) << endl;
    cout << half(c) << endl;
}

template <typename T> T half(T num) {
    return (num / 2);
}

int half(int num) {
    return round(num / 2.0);
}