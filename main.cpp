#include <iostream>
#include <vector>
using namespace std;

int fib(int n) {
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    int a = 0;
    int b = 1;
    for (int i = 0; i < n - 1; ++i) {
        int t = a;
        a = b;
        b = b + t;
    }
    return a;
}

int main()
{
 cout << "Hello, world!" << endl;
 cout << fib(10) << endl;
 std::cout << "Hello, world!" << std::endl;

    return 0;
}
