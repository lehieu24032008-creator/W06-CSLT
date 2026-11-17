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

    cout << "Rotated matrix:" << endl;
    for (int i = m - 1; i >= 0; --i){
        for (int j = n - 1; j >= 0; --j){
            cout << a[i][j];
            if (j > 0) cout << " ";
        }
        cout << endl;
    }
    return 0;
}