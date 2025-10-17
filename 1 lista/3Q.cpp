#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string nome1, nome2;
    double idade1, idade2, media;

    cout << "Nome da primeira pessoa: ";
    cin.ignore();
    getline(cin, nome1);
    cout << "Idade: ";
    cin >> idade1;

    cout << "Nome da segunda pessoa: ";
    cin.ignore();
    getline(cin, nome2);
    cout << "Idade: ";
    cin >> idade2;

    media = (idade1 + idade2) / 2.0;

    cout << fixed << setprecision(1);
    cout << "A idade media de " << nome1 << " e " << nome2 << " eh " << media << " anos." << endl;
    return 0;
}
