bool areAnagram(string &str1, string &str2){
    // Write your code here.
    int freq[26]={0};
    for(int i=0;i<str1.size();i++)
    {
        freq[str1[i]-'a']++;
    }
    for(int i=0;i<str2.size();i++)
    {
        freq[str2[i]-'a']--;
    }
    for(int i=0;i<26;i++)
    {
        if(freq[i]!=0)
            return false;
    }
    return true;
}
