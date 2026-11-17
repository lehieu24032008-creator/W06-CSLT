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

    int min_sum = 0;
    for (int j = 0; j < n; ++j){
        min_sum += a[0][j];
    }
    int min_row = 0;
    for (int i = 0; i < m; ++i){
        int sum = 0;
        for (int j = 0; j < n; ++j){
            sum += a[i][j];
        }
        if (sum < min_sum){
            min_sum = sum;
            min_row = i;
        }
    }

    int max_product = 0;
    int max_col = 0;
    for (int j = 0; j < n; ++j){
        int product = 1;
        for (int i = 0; i < m; ++i){
            product *= a[i][j];
        }
        if (product > max_product){
            max_product = product;
            max_col = j;
        }
    }

    cout << "Row with minimum sum: " << min_row << " (sum=" << min_sum << ")" << endl;
    cout << "Column with maximum product: " << max_col << " (product=" << max_product << ")" << endl;
    return 0;
}