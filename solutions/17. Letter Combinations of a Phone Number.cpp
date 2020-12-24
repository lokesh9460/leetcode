class Solution {
public:
    unordered_map<char,string> mp_dial;
    vector<string> all_cmb;
    string cmb="";
    void dialRecur(int x,string digits)
    {
        if(x==digits.length())
        {
            all_cmb.push_back(cmb);
        }
        else
        {
            for(int i=0;i<mp_dial[digits[x]].length();i++)
            {
                cmb+=mp_dial[digits[x]][i];
                dialRecur(x+1,digits);
                cmb=cmb.substr(0,x);
            }
        }
    }
    
    
    
    vector<string> letterCombinations(string digits) {
        if(digits.length()==0)
            return {};
        mp_dial.insert({'2',"abc"});
        mp_dial.insert({'3',"def"});
        mp_dial.insert({'4',"ghi"});
        mp_dial.insert({'5',"jkl"});
        mp_dial.insert({'6',"mno"});
        mp_dial.insert({'7',"pqrs"});
        mp_dial.insert({'8',"tuv"});
        mp_dial.insert({'9',"wxyz"});
        dialRecur(0,digits);
        return all_cmb;
        
    }
};
