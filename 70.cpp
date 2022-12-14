class Solution {
public:
    int climbStairs(int n) {
    static unordered_map<int, int> memo_map;
        //Scuffed memoization
        memo_map[1] = 1;
        memo_map[2] = 2;
        memo_map[3] = 3;
        if(memo_map.find(n) != memo_map.end()){
            return memo_map[n];
        } else {
            memo_map[n] = climbStairs(n - 1) + climbStairs(n-2);
        }
        return memo_map[n];
    }
};