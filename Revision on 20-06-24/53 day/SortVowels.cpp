class Solution {
public:
    string sortVowels(string s) {
        
        vector<int>lower(26,0);
        vector<int>upper(26,0);

        //store frequency of vowels chars
        for(int i = 0; i<s.size(); i++)
        {
            //lower case vowels
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                lower[s[i]-'a']++;
                s[i]='#';
            }
            //upper case vowels
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                upper[s[i]-'A']++;
                s[i]='#';
            }
        }

        string ans; // it will hold sorted vowels char
        
        //upper case firstly
        for(int i = 0; i<26; i++)
        {
            char c = i+'A';
            while(upper[i])
            {
                ans+=c;
                upper[i]--;
            }
        }
        //lower case
        for(int i = 0; i<26; i++)
        {
            char c = i+'a';
            while(lower[i])
            {
                ans+=c;
                lower[i]--;
            }
        }
        
        // now we have string s = "l##tc#d#"; and ans = "EOee";
        //now insert vowels char at it's right sorted place in string s

        // int first = 0, second=0;
        // while(second<ans.size())
        // {
        //     if(s[first]=='#')
        //     {
        //         s[first]=ans[second];
        //         second++;
        //     }
        //     first++;
        // }

        int index=0;
        for(int i = 0; i<s.size(); i++)
        {
            if(s[i]=='#')
            s[i]=ans[index++];
        }

        return s;
    }
};