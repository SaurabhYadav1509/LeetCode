class Solution {
public:
bool check(int n){
    int temp = n;
    while(n){
        int r = n % 10;
        if (r == 0) return false;
        if (temp % r != 0) return false; 
        n = n / 10;
    }
    return true;
}
    vector<int> selfDividingNumbers(int left, int right) {
      vector<int>ans;
      for (int i= left ; i <= right ; i++){
        if (check(i)) ans.push_back(i);
      }  
      return ans;
    }
};