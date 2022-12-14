class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> sc;
        if (s.size() < 2)
            return 0;
        switch (s[0])
        {
        case '}':
            return 0;
            break;

        case ')':
            return 0;
            break;

        case ']':
            return 0;
            break;
        }
        for (char c : s)
        {
            if (c == '{' || c == '(' || c == '[')
            {
                sc.push(c);
            }
            else
            {
                switch (c)
                {
                case '}':
                    if (sc.empty())
                        return 0;
                    if (sc.top() == '{')
                        sc.pop();
                    else
                        return 0;
                    break;

                case ')':
                    if (sc.empty())
                        return 0;
                    if (sc.top() == '(')
                        sc.pop();
                    else
                        return 0;
                    break;

                case ']':
                    if (sc.empty())
                        return 0;
                    if (sc.top() == '[')
                        sc.pop();
                    else
                        return 0;
                    break;
                }
            }
        }
        return sc.empty();
    }
};