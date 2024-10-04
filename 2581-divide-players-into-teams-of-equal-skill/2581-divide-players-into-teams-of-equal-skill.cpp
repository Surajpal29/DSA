class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        long long product=0;
        sort(skill.begin(),skill.end());
        int i=0,j=skill.size()-1;
        int sum=skill[i]+skill[j];
   
        while(i<j){
            int pairsum=skill[i]+skill[j];
            
            if(pairsum!=sum) return -1;
            
            product+=skill[i]*skill[j];

            i++;
            j--;
        }
        return product;
    }
};