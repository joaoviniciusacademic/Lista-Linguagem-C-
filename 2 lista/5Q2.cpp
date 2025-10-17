#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double preco, dinheiro, total, troco;
    int qtd;

    cin >> preco >> qtd >> dinheiro;
    total = preco * qtd;

    cout << fixed << setprecision(2);
    if (dinheiro >= total) {
        troco = dinheiro - total;
        cout << "TROCO = R$ " << troco << endl;
    } else {
        cout << "DINHEIRO INSUFICIENTE. FALTAM R$ " << total - dinheiro << endl;
    }
    return 0;
}
