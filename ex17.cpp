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
    for (int j = 0; j < n; ++j){
        for (int i = m - 1; i >= 0; --i){
            cout << a[i][j];
            if (i > 0) cout << " ";
        }
        cout << endl;
    }
    return 0;
}