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

    int max_freq = 0;
    int max_val = 0;
    for (int i = 0; i < m; ++i){
        for (int j = 0; j < n; ++j){
            int freq = 0;
            for (int x = 0; x < m; ++x){
                for (int y = 0; y < n; ++y){
                    if (a[x][y] == a[i][j]){
                        freq++;
                    }
                }
            }
            if (freq > max_freq){
                max_freq = freq;
                max_val = a[i][j];
            }
            else if (freq == max_freq){
                if (a[i][j] < max_val){
                    max_val = a[i][j];
                }
            }
        }
    }
    cout << "Most frequent: " << max_val << " (appears " << max_freq << " times)" << endl;
    return 0;
}