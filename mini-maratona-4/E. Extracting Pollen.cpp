#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// Função para obter a soma dos dígitos de um número
int calcularSomaDigitos(int num)
{
    int soma = 0;
    while (num > 0)
    {
        soma += num % 10;
        num /= 10;
    }
    return soma;
}

int main()
{
    // nao passa sem isso aqui
    // isso deixa a leitura e escrita mais rapidas
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int qtdFlores;
    ll rodadas;
    cin >> qtdFlores >> rodadas;

    const int LIMITE = 1e6;
    vector<ll> frequencia(LIMITE + 1, 0);

    int valor, maiorValor = 0;
    for (int i = 0; i < qtdFlores; i++)
    {
        cin >> valor;
        frequencia[valor]++;
        maiorValor = max(maiorValor, valor);
    }

    while (rodadas > 0 && maiorValor >= 0)
    {
        while (maiorValor >= 0 && frequencia[maiorValor] == 0)
        {
            maiorValor--;
        }

        if (maiorValor < 0)
            break;

        if (rodadas <= frequencia[maiorValor])
        {
            cout << calcularSomaDigitos(maiorValor) << "\n";
            return 0;
        }

        rodadas -= frequencia[maiorValor];
        int novoPolem = maiorValor - calcularSomaDigitos(maiorValor);
        frequencia[novoPolem] += frequencia[maiorValor];
        frequencia[maiorValor] = 0;
    }

    cout << 0 << "\n";
    return 0;
}
