class Solution
{
public:
    bool isPalindrome(string s)
    {
        int i = 0;
        int j = s.size() - 1 - i;
        while (i < j)
        {
            while (!isalnum(s[i]) && i < j)
                i++;
            while (!isalnum(s[j]) && j > i)
                j--;
            printf("I: %c, J: %c\n", s[i], s[j]);
            if (tolower(s[i]) != tolower(s[j]))
                return 0;
            else
                i++, j--;
        }
        return 1;
    }
};