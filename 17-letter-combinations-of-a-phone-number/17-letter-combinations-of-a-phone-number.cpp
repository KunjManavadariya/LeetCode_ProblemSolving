class Solution {
public:
    
    void combi(string digits, vector<string> vec, string res, int index, vector<string> &ans){
        
        //base case
        if(index>=digits.length()){
            ans.push_back(res);
            return;
        }
        
        //recursive
        int num = digits[index]-'0';
        string value = vec[num];
        for(int i=0; i<value.length(); i++){
            res.push_back(value[i]);
            combi(digits, vec, res, index+1, ans);
            res.pop_back();
        }
    }
    
    vector<string> letterCombinations(string digits) {
        vector<string> vec = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> ans;
        string res="";
        int index=0;
        if(digits.length()==0) return ans;
        combi(digits, vec, res, index, ans);
        return ans;
    }
};