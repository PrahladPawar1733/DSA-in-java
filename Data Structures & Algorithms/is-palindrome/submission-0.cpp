class Solution {
public:
    bool isPalindrome(string s) {
        for(auto &i:s){
            i=tolower(i);
        }
        int en = s.size()-1;
        int st=0;
        while(st<=en){
            if(s[st]==' '||(s[st]>'9'&&s[st]<'a')||s[st]>'z'||s[st]<'0')st++;
            else if(s[en]==' '||(s[en]>'9'&&s[en]<'a')||s[en]>'z'||s[en]<'0')en--;
            else if(s[st]!=s[en]){
                cout<<s[st]<<" "<<s[en]<<endl;
                return false;
            }
            else{
                st++;
                en--;
            }
        }
        return true;
    }
};
