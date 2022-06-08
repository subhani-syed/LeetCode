class Solution {
public:
    int removePalindromeSub(string S) {
            for (int i = 0, j = S.size() - 1; i < j; i++, j--)
                if (S[i] != S[j]) return 2;
            return 1;
        }
};