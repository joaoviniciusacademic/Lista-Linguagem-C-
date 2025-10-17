#include <iostream>
using namespace std;

int main() {
    int totalSeg, horas, minutos, segundos;
    cin >> totalSeg;

    horas = totalSeg / 3600;
    minutos = (totalSeg % 3600) / 60;
    segundos = totalSeg % 60;

    cout << "DURACAO = " << horas << ":" << minutos << ":" << segundos << endl;
    return 0;
}
