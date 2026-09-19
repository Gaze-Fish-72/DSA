class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int xclose;
        int yclose;
        if(x2<xCenter){
            xclose=x2;
        }
        else if(x1>xCenter){
            xclose=x1;
        }
        else{
            xclose=xCenter;
        }
        if(y2<yCenter){
            yclose=y2;
        }
        else if(y1>yCenter){
            yclose=y1;
        }
        else{
            yclose=yCenter;
        }
        int ans=sqrt(pow(xCenter - xclose , 2) + pow(yCenter - yclose , 2));
        return ans<=radius;
    }
};