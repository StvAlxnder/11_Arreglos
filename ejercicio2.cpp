#include <iostream>
using namespace std;

int main(){
    int S, n, prom, A[30];
    cin >> n;
    S = 0;
    for (int i = 0; i < n; i++){
        cin >> A[i];
        S = S + A[i];
    }
    prom = S / n;
    for (int i = 0; i < n; i++){
        if (A[i] > prom){
            cout << A[i] << " ";
        }
    }
    return 0;
}