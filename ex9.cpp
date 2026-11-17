#include <iostream>
using namespace std;

int main(){
    int m, n, a[100][100];
    cin >> m >> n;  
    for (int i = 0; i < m; ++i){
        for (int j = 0; j < n; ++j){
            cin >> a[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < m; ++i){
        for (int j = 0; j < n; ++j){
            if (i == 0 || i == m - 1 || j == 0 || j == n - 1){
                sum += a[i][j];
            }
        }
    }
    cout << "Border sum: " << sum << endl;
    return 0;
}