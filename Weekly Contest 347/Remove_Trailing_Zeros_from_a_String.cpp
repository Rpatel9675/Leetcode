class Solution {
public:
    string removeTrailingZeros(string num) {
        int count=0;
        for(int i=num.size()-1;i>=0;i--){
            if(num[i]=='0') count++;
            else break;
        }
        string s="";
        for(int i=0;i<num.size()-count;i++) s+=num[i];
        return s;
        
    }
};