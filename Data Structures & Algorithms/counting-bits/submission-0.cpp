class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>res;
        res.push_back(0);
        for(int i=1;i<=n;i++){
            int count=0;
            int n=i;
            while(n!=0){
                n=n&(n-1);
                count++;
            }
            res.push_back(count);
        }
        return res;
    }
};
