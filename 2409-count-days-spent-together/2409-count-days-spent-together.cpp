class Solution {
public:
int arr[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int days(string s){
    string month = s.substr(0,2);
   int m = stoi(month);
   string day = s.substr(3);

   int d= 0;
   for (int i=0; i<m; i++)
   d += arr[i];

   return d + stoi(day);
}

    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
    
    int aa = days(arriveAlice);
    int al = days(leaveAlice);
    int ab = days(arriveBob);
    int bl = days(leaveBob);

    int a = max(aa, ab);
    int b = min(al, bl);
    return max(0,b-a+1);
    }
};