#include <iostream>

using namespace std;
int n;
int k;
int o;
int main(int argc, char **argv) {
    n=3;
    k=5;
    o=10;
    for (int i = 1; i < 101; i++)
    {
        if (i % o == 0) 
        {
           cout << "\n"; 
        } 
        if (i % n == 0 || i % k == 0) 
        {
            if (i % n == 0 && i % k == 0)
            {
                cout << "Fizz Buzz, ";
            }
            else {
                if (i % n == 0)
                {
                    cout << "Fizz, ";
                }
                if (i % k == 0)
                {
                    cout << "Buzz, ";
                }
            }
        }
        else {
            cout << i << ", ";
        }
    }
    cout << "\n";
    return 0;
}
