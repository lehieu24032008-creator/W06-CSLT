#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); ++i){
        if (n % i == 0) return false;
    }
    return true;
}

int main(){
    int m, n;
    cin >> m >> n;
    int a[100][100];
    for (int i = 0; i < m; ++i){
        for (int j = 0; j < n; ++j){
            cin >> a[i][j];
        }
    }

    bool first = true;
    cout << "Columns with all primes: ";
    for (int j = 0; j < n; ++j){
        bool allPrime = true;
        for (int i = 0; i < m; ++i){
            if (!isPrime(a[i][j])){
                allPrime = false;
                break;
            }
        }
        if (allPrime){
            if (!first) cout << ", ";
            cout << j;
            first = false;
        }
    }
    cout << endl;
    return 0;
}
