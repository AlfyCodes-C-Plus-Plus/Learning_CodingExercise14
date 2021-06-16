#include <iostream>

using namespace std;

int main()
{

    int sum;

    for (int i{1}; i <= 15; i += 2)
    {
        cout << "i is: " << i << endl;
        sum += i;
    }

    cout << sum;

    return 0;
}