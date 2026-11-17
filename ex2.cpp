#include <iostream>
using namespace std;

int main(){
    int n, m, a[100][100], r;
    cin >> n >> m;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            cin >> a[i][j];
        }
    }
    cin >> r;

    cout << "Matrix after deletion: " << endl;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            if (i != r){
                cout << a[i][j] << " ";
            }
        }
        if (i != r){
            cout << endl;
        }
    }
}