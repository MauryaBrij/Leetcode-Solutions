class Solution {
public:
    //helper function
    void dfs(int num, int n, int k, vector<int>& res){
        if(n==0){
            res.push_back(num);
            return;
        }
        int last_digit=num%10;
        if(last_digit>=k) dfs(num*10+last_digit-k ,n-1 ,k , res);
        if(k>0 && last_digit+k<10) dfs(num*10+last_digit+k, n-1, k, res);
    }
    //main working function
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int> res;
        
        for(int d=1;d<10;d++){
            dfs(d,n-1,k, res);
        }
        return res;
    }
};