class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int>radientQ,direQ;
        for(int i=0;i<senate.size();i++){
            if(senate[i]=='R') radientQ.push(i);
            else direQ.push(i); 
        }
        while(!radientQ.empty() && !direQ.empty()){
            int r=radientQ.front();
            radientQ.pop();
            int d=direQ.front();
            direQ.pop();
            if(r<d){
                radientQ.push(r+senate.size());
            }else{
                direQ.push(d+senate.size());
            }
        }
        return (radientQ.size()>direQ.size())?"Radiant":"Dire";
    }
};