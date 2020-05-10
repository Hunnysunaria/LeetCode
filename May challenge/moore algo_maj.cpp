class Solution {
public:
    int majorityElement(vector<int>& nums) {
  
/** Using Hashmap **/      
//           int n= a.size();
//   map<int ,int> m;
  
  
//   for(int i=0;i<a.size();i++){
//     m[a[i]]++;
//   }
//   int currentmx=0;
//   int armx= 0;

//   for(auto it= m.cbegin(); it!= m.cend();++it){

//     if(it->second >currentmx){
//         armx= it->first;
//         currentmx= it->second;
//     }
//   }

// cout<<armx<<endl;
//    if(currentmx > n/2)
    
    
//     return armx;
//         else return -1;


        
//     }
        
        
/**        Moore's algo  **/
        
int maj= nums[0];
        int v=1;
        
        for(auto num: nums){
            if(num == maj)
                v++;
            else if(--v== 0){
                maj= num;
                v=1;
            }
        }
        return maj;
        
    }
};