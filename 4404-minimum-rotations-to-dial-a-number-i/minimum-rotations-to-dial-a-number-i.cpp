class Solution {
public:
    int minRotations(string s) {
        int current = 0;
        int ans = 0;
        for(char c : s) {
            int next = c - '0';
            int clockwise = abs(next - current);
            int anticlockwise = 10 - clockwise;
            ans += min(clockwise, anticlockwise);
            current = next;
        }
        return ans;
    }
};