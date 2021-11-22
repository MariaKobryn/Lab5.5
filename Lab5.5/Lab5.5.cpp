#include <iostream>
#include <cmath>

using namespace std;

double pow(double x, double n, double level, double& depth)
{
    if (level > depth)
    {
        depth = level;
    }

    if (n == 0)
        return 1;
    else
        if (n < 0)
            return 1 / pow(x, abs(n), level + 1, depth);
        else
            if (n > 0)
                return x * pow(x, n - 1, level + 1, depth);
    
    return 0;

}

int main()
{
    double x, n;
    double depth = 0;
    cout << "enter x : ";
    cin >> x;
    cout << "enter n: ";
    cin >> n;
    cout << "pow(x, n) = " << pow(x, n, 1, depth) << endl;
    cout << "depth = " << depth << endl;

    cin.get();
    return 0;
}
