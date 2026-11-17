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

    for (int j = 0; j < n; ++j){
        cout << "Column " << j << " unique: ";
        bool first = true;
        for (int i = 0; i < m; ++i){
            int val = a[i][j];
            int cnt = 0;
            for (int k = 0; k < m; ++k){
                if (a[k][j] == val) cnt++;
            }
            if (cnt == 1){
                if (!first) cout << ", ";
                cout << val;
                first = false;
            }
        }
        cout << endl;
    }
    return 0;
}