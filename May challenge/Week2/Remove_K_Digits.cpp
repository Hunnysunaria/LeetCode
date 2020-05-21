// class Solution {
// public:
//     string removeKdigits(string num, int k) {
       
        
//         if(num.length() == k)
//             return "0";
      
        
//        int l=0;int r=1;
//         while(k>0){
            
//             if(num[l]>= num[r]){
                
//                 num.erase(num.begin()+l);
//                 k--;
//            }
            
//             else{
                
//                 l++;
//                 r++;
//             }
//         }
//         if(k!=0) //1111111  k=3
            
//             removelOvr(num,k);
//         if(num.compare(0,1,"0")== 0)
//         zeros(num);
//        trl(num);
       
//         return num;
//     }
    
//         void removelOvr(string &num, int k) {
//         int i;
//         i = num.length() - k;
//         num.erase(num.begin()+i, num.end());
//     }
    
//     void zeros(string &num){
//         while(num.length()>0 && num.compare(0,1,"0")== 0){
            
//             num.erase(num.begin()+0);
//         }
//     }
//     void trl(string &num){
//         if(num.length()== 0)
//             num= "0";
//     }
    
    
    
    
    class Solution {
public:
    string removeKdigits(string num, int k) {
        
        if(num.size()<=k)
            return "0";
        string t = num;
        int del = k;
		for (int j = 0; j < k; j++)
		{
			for (int i = 0; i < t.size() - 1; i++)
			{
				if (t[i] > t[i + 1])   //check if current digit is greater than next
				{
					t.erase(i, 1);    // if true remove that digit
					del--;          // update count of digits to be removed
					break;
				}
			}
		}
		if (del >= 1)  // there are still some digits need to removed - remove rightmost digits
		{
            int index = t.size()-del;
			t.erase(index,del);
		}
        t.erase(0, t.find_first_not_of('0'));  // removed leading 0's
		if(t.size()==0)
            return "0";
        
		return t;
    }
};
    
   
// };