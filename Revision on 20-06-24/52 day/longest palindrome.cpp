class Solution {
public:
    string sortSentence(string s) {
        vector<string>ans(10);
        string temp; //it will use to hold word temporary and ultimately we'll     take use for hold sorted string and will return this
        int count = 0; // it'll store no of words

        for(int i = 0; i<s.size(); i++)
        {
            if(s[i]==' ')
            {
               int pos = temp[temp.size()-1] - '0';
               temp.pop_back();
               ans[pos]=temp;
               temp.clear();
               count++; 
            }
            else
            temp+=s[i];
        }
        //since at last there is no space so handle last word
        int pos = temp[temp.size()-1] - '0';
        temp.pop_back();
        ans[pos]=temp;
        temp.clear();
        count++;

        //now return sorted string which has been holded in vector ans
        for(int i = 1; i<=count; i++)
        {
            temp+=ans[i];
            temp+=' ';
        }
        //at last we have one extra space so handle it here and return it
        temp.pop_back();
        return temp;

    }
};