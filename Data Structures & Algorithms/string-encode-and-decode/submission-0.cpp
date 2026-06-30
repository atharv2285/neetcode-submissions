class Solution {
public:

    string encode(vector<string>& strs)
    {
        string encoded;

        for(string s: strs)
        {
            int n = s.length();
            encoded = encoded +  to_string(n) + "#" + s;
        }
        cout << encoded;
        return encoded;

    }

    vector<string> decode(string s) 
    {
        vector<string> res;

        int i =0;

        while(i<s.size())
        {
        int j = i;

        while(s[j]!='#')
        {
            j++;
        }
        int n = stoi(s.substr(i,j-i));
        res.push_back(s.substr(j+1,n));

        i=j+n;
        i++;
        }

        return res;
    }
};
