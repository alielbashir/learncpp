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

long long numberOfWays(vector<int> donationsA, vector<int> donationsB, vector<int> donationsC, vector<int> donationsD, int k) {
    long long ways = 0;
    long long tmp;
    for (long long i = 0; i < donationsA.size(); i++) {
        for (long long j = 0; j < donationsB.size(); j++) {
            for (long long kk = 0; kk < donationsC.size(); kk++) {
                for (long long l = 0; l < donationsD.size(); l++) {
                    tmp = donationsA.at(i) + donationsB.at(j) + donationsC.at(kk) + donationsD.at(l);
                    if (tmp > k - 1) {
                        printf("%lld. %d + %d + %d + %d = %lld >= %d\n", ways, donationsA.at(i), donationsB.at(j), donationsC.at(kk), donationsD.at(l),tmp, k);
                        ways++;
                    }
                }
            }
        }
    }
    return ways;
}

int f(int a) {
    return (a ==0) ||a == 1 ? 1 : a * f(a - 1);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string donationsA_count_temp;
    getline(cin, donationsA_count_temp);

    int donationsA_count = stoi(ltrim(rtrim(donationsA_count_temp)));

    vector<int> donationsA(donationsA_count);

    for (int i = 0; i < donationsA_count; i++) {
        string donationsA_item_temp;
        getline(cin, donationsA_item_temp);

        int donationsA_item = stoi(ltrim(rtrim(donationsA_item_temp)));

        donationsA[i] = donationsA_item;
    }

    string donationsB_count_temp;
    getline(cin, donationsB_count_temp);

    int donationsB_count = stoi(ltrim(rtrim(donationsB_count_temp)));

    vector<int> donationsB(donationsB_count);

    for (int i = 0; i < donationsB_count; i++) {
        string donationsB_item_temp;
        getline(cin, donationsB_item_temp);

        int donationsB_item = stoi(ltrim(rtrim(donationsB_item_temp)));

        donationsB[i] = donationsB_item;
    }

    string donationsC_count_temp;
    getline(cin, donationsC_count_temp);

    int donationsC_count = stoi(ltrim(rtrim(donationsC_count_temp)));

    vector<int> donationsC(donationsC_count);

    for (int i = 0; i < donationsC_count; i++) {
        string donationsC_item_temp;
        getline(cin, donationsC_item_temp);

        int donationsC_item = stoi(ltrim(rtrim(donationsC_item_temp)));

        donationsC[i] = donationsC_item;
    }

    string donationsD_count_temp;
    getline(cin, donationsD_count_temp);

    int donationsD_count = stoi(ltrim(rtrim(donationsD_count_temp)));

    vector<int> donationsD(donationsD_count);

    for (int i = 0; i < donationsD_count; i++) {
        string donationsD_item_temp;
        getline(cin, donationsD_item_temp);

        int donationsD_item = stoi(ltrim(rtrim(donationsD_item_temp)));

        donationsD[i] = donationsD_item;
    }

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    long result = numberOfWays(donationsA, donationsB, donationsC, donationsD, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

/* INPUT
1
2
2
3
4
1
10
2
15
9
30
OUTPUT
2
*/