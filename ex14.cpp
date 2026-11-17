#include <iostream>
using namespace std;

bool isPerfect(int n){
    if (n <= 1) return false;
    int sum = 1;
    for (int i = 2; i * i <= n; ++i){
        if (n % i == 0){
            sum += i;
            if (i != n / i) sum += n / i;
        }
    }
    return sum == n;
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

    for (int j = 0; j < n; ++j){
        int pos[100], vals[100], cnt = 0;
        for (int i = 0; i < m; ++i){
            if (isPerfect(a[i][j])){
                pos[cnt] = i;
                vals[cnt] = a[i][j];
                cnt++;
            }
        }
        for (int i = 0; i < cnt - 1; ++i){
            for (int k = i + 1; k < cnt; ++k){
                if (vals[i] > vals[k]){
                    int tmp = vals[i];
                    vals[i] = vals[k];
                    vals[k] = tmp;
                }
            }
        }
        for (int i = 0; i < cnt; ++i){
            a[pos[i]][j] = vals[i];
        }
    }

    cout << "Modified matrix:\n";
    for (int i = 0; i < m; ++i){
        for (int j = 0; j < n; ++j){
            cout << a[i][j];
            if (j + 1 < n) cout << " ";
        }
        cout << endl;
    }
    return 0;
}
