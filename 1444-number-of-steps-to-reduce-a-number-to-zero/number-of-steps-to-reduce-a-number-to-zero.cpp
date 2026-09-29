class Solution {
public:
bool isEven(int n) {
    return n % 2 == 0;
}
    int numberOfSteps(int num) {
    int cnt=0;
     while(num!=0){
        if(isEven(num)){
            num/=2;
        }
        else{
            num-=1;
        }
        cnt++;
     }   
     return cnt;
    }
};