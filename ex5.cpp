#include <iostream>
using namespace std;

int main(){
    int op;
    cin >> op;

    int r1, c1;
    cin >> r1 >> c1;
    int a[100][100];
    for (int i = 0; i < r1; ++i){
        for (int j = 0; j < c1; ++j){
            cin >> a[i][j];
        }
    }

    int r2, c2;
    cin >> r2 >> c2;
    int b[100][100];
    for (int i = 0; i < r2; ++i){
        for (int j = 0; j < c2; ++j){
            cin >> b[i][j];
        }
    }    

    cout << "Result:\n";

    if (op == 1){
        for (int i = 0; i < r1; ++i){
            for (int j = 0; j < c1; ++j){
                if (j != 0) cout << " ";
                cout << a[i][j] + b[i][j];
            }
            cout << "\n";
        }
    }else if (op == 2) {
        for (int i = 0; i < r1; ++i){
            for (int j = 0; j < c1; ++j){
                if (j != 0) cout << " ";
                cout << a[i][j] - b[i][j];
            }
            cout << "\n";
        }
    }else if (op == 3){
        for (int i = 0; i < r1; ++i){
            for (int j = 0; j < c2; ++j){
                long long sum = 0;
                for (int k = 0; k < c1; ++k){
                    sum += (long long)a[i][k] * b[k][j];
                }
                if (j != 0) cout << " ";
                cout << sum;
            }
            cout << "\n";
        }
    }

    return 0;
}