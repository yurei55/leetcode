class Solution 
{
public:
    bool isValid(string s) 
    {
        stack<char> stack;
        
        for (int i = 0; i < s.length(); i++)
        {
            char si = s[i];
            if (si == '(' || si == '{' || si == '[')
                stack.push(si);
            else
            {
                if (stack.empty())
                    return false;

                char top = stack.top();
                stack.pop();

                if ((si == ')' && top != '(') || (si == '}' && top != '{') || (si == ']' && top != '['))
                    return false;
            }     
        }
        return stack.empty();
    }
};