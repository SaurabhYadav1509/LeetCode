class Solution {
public:

int MOD = 1e9 + 7;
int N, M, K;
int arr[51][51][101]; 

int solve(int idx, int searchCost, int maxSoFar){
    if (idx == N){
        if (searchCost == K)
        return 1;
        else
        return 0;
    }
    
    if (arr[idx][searchCost][maxSoFar] != -1)
    return arr[idx][searchCost][maxSoFar]; 

    long long result = 0;
    for (int i=1; i<=M; i++){

        if (i > maxSoFar)
        result += solve(idx+1, searchCost+1, i) % MOD;

        else
        result += solve(idx+1, searchCost, maxSoFar) % MOD;

    }
   return arr[idx][searchCost][maxSoFar] = result % MOD;
}
    int numOfArrays(int n, int m, int k) {
        N = n;
        M = m;
        K = k;
        memset(arr, -1, sizeof(arr));
        // k can be 0 as well as -1, both are less than 1
        return solve(0, 0, 0);
    }
};