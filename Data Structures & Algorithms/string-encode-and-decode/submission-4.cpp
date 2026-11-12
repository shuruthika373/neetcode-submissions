class Solution {
public:

    string encode(vector<string>& strs) 
    {
        string en_str="";
        int string_length;

        for(int i=0;i<strs.size();i++)
        {
            string_length=strs[i].size();
            en_str=en_str+to_string(string_length)+"#"+strs[i];
        }

        return en_str;


    }

    vector<string> decode(string s) 
    {
        vector<string> str_list;
        for(int i=0;i<s.size(); )
        {
           int j=i;
           while(s[j] != '#')
           {
            j++;
           } 
           
           int len=stoi(s.substr(i,j-i)); //length digits
           i=j+1;
           
           str_list.push_back(s.substr(i,len));
           i=i+len;
        }
        return str_list;


    }
};
