class Solution {

public:
    bool check(int a[26],int b[26])
    {
        for(int i=0;i<26;i++)
           { //cout<<a[i]<<" "<<b[i]<<"\n";
            if(a[i]!=b[i])
                return 0;}
        
        return 1;
    }
    bool checkInclusion(string p, string s) {
        vector<int> v;
        if(s.length()<p.length()) return {};
        string temp="";
        int a[26]={0},b[26]={0};
        for(auto x:p)
        {
            a[x-'a']++;
            
        }
         int k=0;
        for(int i=0;i<=s.length();i++)
        {
           //cout<<i<<" ";
            if(i>=p.length())
            {  
                if(check(a,b)) 
               v.push_back(i-p.length());
                if(i>=s.length()) break;
                //cout<<"\n";
                b[s[i-p.length()]-'a']--;
                b[s[i]-'a']++;
            }
            else
                 b[s[i]-'a']++;
        }
       // cout<<k;
        if(v.size()>0)
            return true;
        return false;
    }
};