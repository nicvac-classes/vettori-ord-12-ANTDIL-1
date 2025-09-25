#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;
int main() {
    
    int n, i, j, t;

    cout << "Inserire il numero di elementi del vettore" << endl;
    cin >> n;
    int r[n];

    for (i = 0; i <= n - 1; i++) {
        r[i] = rand() % (n * 10 + 1);
    }
    cout << "Valori generati" << endl;
    for (i = 0; i <= n - 1; i++) {
        cout << "Elemento " << i << ": " << r[i] << endl;
    }
    for (i = 0; i <= n - 1; i++) {
        for (j = 0; j <= n - 2; j++) {
            if (r[j] > r[j + 1]) {
                t = r[j];
                r[j] = r[j + 1];
                r[j + 1] = t;
            }
        }
    }
    cout << "Valori ordinati" << endl;
    for (i = 0; i <= n - 1; i++) {
        cout << "Elemento" << i << ": " << r[j] << endl;
    }
    return 0;
}