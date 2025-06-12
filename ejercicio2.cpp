#include <iostream>
using namespace std;

int main(){
    int S, n, prom, A[30];
    cout << "Detector de numeros mayores al promedio\n";
    cout << "Ingrese la cantidad de numeros a ingresar: ";  cin >> n;
    if (n < 1 && n > 30){
        cout << "Numero invalido. Debe ingresar un numero entre 1 a 30.";
    }
    S = 0;
    for (int i = 0; i < n; i++){
        cout << "Ingrese el numero "<<i + 1<<": ";
        cin >> A[i];
        S = S + A[i];
    }
    prom = S / n;
    cout << "El promedio es "<<prom<<", los numeros mayores son:\n";
    for (int i = 0; i < n; i++){
        if (A[i] > prom){
            cout << A[i] << " ";
        }
    }
    return 0;
}