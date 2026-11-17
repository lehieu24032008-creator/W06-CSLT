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

    int count = 0;
    for (int i = 0; i < m; ++i){
        for (int j = 0; j < n; ++j){
            bool is_queen = true;
            for (int x = 0; x < m; ++x){
                for (int y = 0; y < n; ++y){
                    if (a[x][y] > a[i][j]){
                        is_queen = false;
                        break;
                    }
                }
                if (!is_queen){
                    break;
                }
            }
            if (is_queen){
                count++;
            }
        }
    }
    cout << "Number of Queen elements: " << count << endl;
    return 0;
}