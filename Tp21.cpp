#include <bits/stdc++.h>

using namespace std;

vector<int> GenerarVector(vector<int> A, int n);
vector<int> Resultado(vector<int> A, vector<int> R);
void MostrarVector(vector<int> A, vector<int> R);

int main() {
    int n;
    vector<int> A, R;
    cout << "Ingrese la cantidad de elementos: " << endl;
    cin >> n;
    A = GenerarVector(A, n);
    R = Resultado(A, R);
    MostrarVector(A, R);
    return 0;
}

vector<int> GenerarVector(vector<int> A, int n) {
    srand(time(NULL));
    int e;
    for (int i = 0; i < n; i++) {
        e = rand() % 30;
        A.push_back(e);
    }
    return A;
}

vector<int> Resultado(vector<int> A, vector<int> R) {
    int suma1 = 0, suma2 = 0;
    for (int i = 0; i < A.size(); i++) {
        if (A[i] % 2 == 0) {
            suma1 += A[i];
        }
        if (A[i] % 2 != 0) {
            suma2 += A[i];
        }
    }
    R.push_back(suma1);
    R.push_back(suma2);
    return R;
}

void MostrarVector(vector<int> A, vector<int> R) {
    for (int i = 0; i < A.size(); i++) {
        cout << A[i] << "/";
    }
    cout << endl;
    for (int i = 0; i < R.size(); i++) {
        cout<< R[i] << "/";
    }
    cout << endl;
}








