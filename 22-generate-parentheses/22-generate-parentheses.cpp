class Solution {
public:
    vector <string>v;
    void func(string s,int n,int c,int cnto){
        if(cnto==n){
            while(c!=0){
                s+=')';
                c--;
            }
            v.push_back(s);
            return;
        }
        if(c==0)
            func(s+'(',n,c+1,cnto+1);
        else{
            func(s+'(',n,c+1,cnto+1);
            func(s+')',n,c-1,cnto);
        }
        
    }
    vector<string> generateParenthesis(int n) {
        func("",n,0,0);
        return v;
    }
};