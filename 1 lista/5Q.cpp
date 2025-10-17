#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double preco, dinheiro, troco;
    int qtd;

    cin >> preco >> qtd >> dinheiro;
    troco = dinheiro - (preco * qtd);

    cout << fixed << setprecision(2);
    cout << "TROCO = R$ " << troco << endl;
    return 0;
}
