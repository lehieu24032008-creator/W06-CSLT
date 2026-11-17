#include <iostream>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    int a[100][100];
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            cin >> a[i][j];

    for (int j = 0; j < n; ++j){
        for (int i = 0; i < m - 1; ++i){
            for (int k = i + 1; k < m; ++k){
                bool swap;
                if (j % 2 == 0) swap = a[i][j] < a[k][j];
                else swap = a[i][j] > a[k][j];
                if (swap){
                    int temp = a[i][j];
                    a[i][j] = a[k][j];
                    a[k][j] = temp;
                }
            }
        }
    }

    cout << "Sorted matrix:\n";
    for (int i = 0; i < m; ++i){
        for (int j = 0; j < n; ++j){
            cout << a[i][j];
            if (j + 1 < n) cout << " ";
        }
        cout << endl;
    }
    return 0;
}