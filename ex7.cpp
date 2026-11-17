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
    
    for (int i = 0; i < m; ++i){
        int max = a[i][0];
        int min = a[i][0];
        for (int j = 1; j < n; ++j){
            if (a[i][j] > max){
                max = a[i][j];
            }
            if (a[i][j] < min){
                min = a[i][j];
            }
        }
        cout << "Row " << i << ": " << "min=" << min << ", max=" << max << "\n";
    }

    for (int j = 0; j < n; ++j){
        int max = a[0][j];
        int min = a[0][j];
        for (int i = 1; i < m; ++i){
            if (a[i][j] > max){
                max = a[i][j];
            }
            if (a[i][j] < min){
                min = a[i][j];
            }
        }
        cout << "Column " << j << ": " << "min=" << min << ", max=" << max << "\n";
    }
}