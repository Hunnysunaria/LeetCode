class Solution {
public:
    int countElements(vector<int>& arr) {
    unordered_map<int, int> mp;
for(int a: arr){
if(mp.find(a)!= mp.end())
mp[a]++;
else
mp[a]= 1;
}
int result= 0;
for(auto n: mp){
if(mp.find(n.first +1)!= mp.end())
result +=n.second;
}
return result;

    }
};