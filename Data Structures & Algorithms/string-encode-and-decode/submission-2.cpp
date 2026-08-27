class Solution {
public:

    string encode(vector<string>& strs) 
    {
        string encoded;

        for(string s : strs)
        {
            encoded = encoded + to_string(s.size()) + "#" + s;
        }
        cout << encoded;
        return encoded;
    }

    vector<string> decode(string s) 
    {
        vector<string> res;
        int p = 0;

        while(p<s.size())
        {
            int l = p;
            while(s[p]!='#')
            {
                p++;
            }
            int length = stoi(s.substr(l,p-l));
            p++;
            string word = s.substr(p,length);
            res.push_back(word);
            p = p + length;
        }

        return res;
    }
};
