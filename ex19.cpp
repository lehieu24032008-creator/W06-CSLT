#include <iostream>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    int a[100][100];
    for (int i = 0; i < m; ++i){
        for (int j = 0; j < n; ++j){
            cin >> a[i][j];
        }
    }

    cout << "Mirrored matrix:" << endl;
    for (int i = m - 1; i >= 0; --i){
        for (int j = 0; j < n; ++j){
            cout << a[i][j];
            if (j + 1 < n) cout << " ";
        }
        cout << endl;
    }
    return 0;
}