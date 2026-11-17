#include <iostream>
using namespace std;

int main(){
    int a[100][100], n;
    cin >> n;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            cin >> a[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            if (i == j){
                sum += a[i][j];
            }
        }
    }
    cout << "Main diagonal sum: " << sum << endl;
    int product = 1;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            if (i == n - 1 - j){
                product *= a[i][j];
            }
        }
    }
    cout << "Secondary diagonal product: " << product << endl;
}