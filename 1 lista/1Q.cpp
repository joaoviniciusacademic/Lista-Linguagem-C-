#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double largura, comprimento, valor_m2, area, preco;
    cout << "Digite a largura do terreno: ";
    cin >> largura;
    cout << "Digite o comprimento do terreno: ";
    cin >> comprimento;
    cout << "Digite o valor do metro quadrado: ";
    cin >> valor_m2;

    area = largura * comprimento;
    preco = area * valor_m2;

    cout << fixed << setprecision(2);
    cout << "Area do terreno = " << area << endl;
    cout << "Preco do terreno = R$ " << preco << endl;
    return 0;
}
