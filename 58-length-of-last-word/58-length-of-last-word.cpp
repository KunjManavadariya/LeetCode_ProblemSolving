// class Solution {
// public:
//     int lengthOfLastWord(string s) {
//         int i=s.size()-1, res=0;
//         while(s[i]==' ') i--;
//         while(i>=0 && s[i--]!=' '){
//             res++;
//         }
//         return res;
//     }
// };
class Solution {
public:
    int lengthOfLastWord(string s) {
        int l = s.size();
        if (l==0) {
            return 0;
        }
        int sl = 0;
        for (int i=l-1;i>=0;i--) {
            if (s[i] == ' ' && sl > 0) {
                return sl;
            } else if(s[i] != ' ') {
                sl++;
            }
            cout<<sl<<" ";
        }
        cout<<endl;
        return sl;
    }
};