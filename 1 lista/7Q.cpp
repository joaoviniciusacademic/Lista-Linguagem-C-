#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string nome;
    double valorHora, horas, pagamento;

    cout << "Nome do funcionario: ";
    getline(cin, nome);
    cout << "Valor por hora: ";
    cin >> valorHora;
    cout << "Horas trabalhadas: ";
    cin >> horas;

    pagamento = valorHora * horas;

    cout << fixed << setprecision(2);
    cout << "O pagamento de " << nome << " sera R$ " << pagamento << endl;
    return 0;
}
