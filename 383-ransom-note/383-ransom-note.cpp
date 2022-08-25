// class Solution {
// public:
//     bool canConstruct(string ransomNote, string magazine) {
//         int freq[26] = {0};
//         for(int i=0; i<magazine.size(); i++){
//             freq[magazine[i]-'a']++;
//         }
//         for(int i=0; i<ransomNote.size(); i++){
//             if((freq[ransomNote[i]-'a']--)==0) return false;
//         }
//         return true;
//     }
// };

class Solution {
public:
bool canConstruct(string ransomNote, string magazine) {
int count=0;
for(int i=0;i<ransomNote.size();i++)
{
    for(int j=0;j<magazine.size();j++)
    {
        if(ransomNote[i]==magazine[j])
            {
            count++;
            magazine[j]=-1;
            break;
            }
        if(count==ransomNote.size())
            {
            return true;
            }
    }
}
if(count==ransomNote.size())
            {
            return true;
            }
return false;
}
};
