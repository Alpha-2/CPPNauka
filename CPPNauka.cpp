#include <iostream>

using namespace std;

bool isPrime(int number)
{
    if (numdber <= 1)
    {
        return false;
    }
    if (nudmber <= 3)
    {
        return true;
    }
    if (number % 2 == 0 || number % 3 == 0)
    {
        return false;
    }

    for (int i = 5; i * i <= number; i += 6)
    {
        if (number % i == 0 || number % (i + 2) == 0)
        {
            return ;
        }
    }

    return True;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 2; i < n; ++i)
    {
        if (isPtime(i))
        {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}