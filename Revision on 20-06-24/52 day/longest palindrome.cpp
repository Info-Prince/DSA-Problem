class Solution {
public:
    int longestPalindrome(string s) {
        vector<int>lower(26,0);
        vector<int>upper(26,0);
        bool odd = 0;
        int ans=0;

        //storing occurance of each char
        for(int i = 0; i<s.size(); i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z')
            lower[s[i]-'a']++;
            else
            upper[s[i]-'A']++;
        }

        for(int i = 0; i<26; i++)
        {
            if(lower[i]%2 == 0)
            ans += lower[i];
            else
            {
                ans+=lower[i]-1;
                odd = 1;
            }
        }

        for(int i = 0; i<26; i++)
        {
            if(upper[i]%2 == 0)
            ans+=upper[i];
            else {
                ans+= upper[i]-1;
                odd=1;
            }
        }

        return ans+odd;
    }
};