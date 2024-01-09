class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int charCount       = s.size();
        int outSubstringCnt = 0;

        //string  tempString;
        unordered_map<char, int> charMap;
        int left = 0;

        for (int right = 0; right < charCount; right++)
        {
            if ( charMap.count(s[right]) == 0 || charMap[s[right]] < left )
            {
                charMap[s[right]] = right;
                outSubstringCnt = max(outSubstringCnt, right - left + 1);
            }
            else
            {
                left = charMap[s[right]] + 1;
                charMap[s[right]] = right;
            }
        }

        return outSubstringCnt;
    }
};
