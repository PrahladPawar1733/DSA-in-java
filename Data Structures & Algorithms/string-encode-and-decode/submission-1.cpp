class Solution {
public:

    string encode(vector<string>& strs) {
     string ans;
     for(auto &i: strs){
        ans+='#' + to_string(i.size())+'#';
        ans+=i;
     }
     return ans;
    }

    vector<string> decode(string s) {
    vector<string> ans;
    int i=0;
    cout<<"s"<<" "<<s<<endl;
    while(i<s.size()){
        int j=i+1;
        string temp="";
        while(s[j]!='#'){
         temp+=s[j];
         j++;
        }
        int p = stoi(temp);
        ans.push_back(s.substr(j+1,p));
        i = j + 1 + p;
    }
    return ans;
    }
};
