class Solution {
public:

int arr[38];

int trib(int n){
    if (n == 0)
    return 0;

    if (n <= 2)
    return 1;

    if (arr[n] != -1)
    return arr[n];

    return arr[n] = trib(n-1) + trib(n-2) + trib(n-3);

}
    int tribonacci(int n) {
     memset(arr, -1, sizeof(arr));
     return trib(n);
    }
};