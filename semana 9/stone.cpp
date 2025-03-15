#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;
#include <algorithm>

int solution(int n)
{
    pair<int, int> maxpair;
    pair<int, int> minPair;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {

        int c;
        cin >> c;

        v.push_back(c);
    }

    // indice do maior
    int maxI = max_element(v.begin(), v.end()) - v.begin();
    // indice do menor
    int minI = min_element(v.begin(), v.end()) - v.begin();

    int maiorI = max(maxI, minI);
    int menorI = min(maxI, minI);

    // op1 ir tuda da esqueda para a direita
    int op1 = maiorI + 1;
    // op2 ir da direita para a esquerda
    int op2 = n - menorI;
    // op3 ir ate o menor da esquerda e ir ate o maior da direita
    int op3 = menorI + 1 + n - maiorI;

    return min(min(op1, op2), op3);
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        cout << solution(m) << endl;
    }
    return 0;
}