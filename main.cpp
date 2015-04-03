#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str ("123456789");
    for (char c : str)
    {
        cout << "[" << c << "]";

    }
            return 0;
}
