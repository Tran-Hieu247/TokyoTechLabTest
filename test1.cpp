#include <iostream>
#include<string.h> 
using namespace std;

int countGoalCombinations(int x, int y) {
    int dp[x + 1][y + 1];
    memset(dp, 0, sizeof(dp));
    dp[0][0] = 1;

    // Tính toán s? cách ð?t ðý?c t? s? x - y
    for (int i = 0; i <= x; i++) {
        for (int j = 0; j <= y; j++) {
            if (i > 0) {
                dp[i][j] += dp[i - 1][j];
            }
            if (j > 0) {
                dp[i][j] += dp[i][j - 1];
            }
        }
    }

    return dp[x][y];
}

int main() {
    int N;
    cin >> N;
	int result[N]; 
	for (int i=0; i<N;i++){
		int x, y;
        cin >> x >> y;
        if(x== 0 && y==0){
        	result[i] = 0;
		}else{
			int combinations = countGoalCombinations(x, y);
			result[i] = combinations;
		}
        
        
	}
    for (int i=0; i<N;i++){
    	cout <<result[i] << endl;
	}

    return 0;
}
