#include <iostream>
#include <string>
#include <sstream>
#include <math.h>

using namespace std;

int main()
{
    string line;
    istringstream ss;
    int n, k;
    double p;

    while (getline(cin, line))
    {
        ss.str(line);
        ss >> n;
        ss.clear();

        getline(cin, line);
        ss.str(line);
        ss >> p;
        ss.clear();

        k = pow(p, 1.0 / float(n));
        cout << k << endl;
    }
    return EXIT_SUCCESS;
}