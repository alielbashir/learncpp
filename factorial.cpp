#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'numberOfWays' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY donationsA
 *  2. INTEGER_ARRAY donationsB
 *  3. INTEGER_ARRAY donationsC
 *  4. INTEGER_ARRAY donationsD
 *  5. INTEGER k
 */

int f(int a) {
    return (a ==0) ||a == 1 ? 1 : a * f(a - 1);
}

int main()
{
    cout << f(5) <<endl;
}
