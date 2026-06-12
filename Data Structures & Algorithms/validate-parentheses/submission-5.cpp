#include <stack>
#include <string>
#include <iostream>

class Solution {
public:
    bool isValid(string s) {
        std::stack<char> openBrackets;
        for(char i : s)
        {
            if(i == '(' || i == '[' || i == '{')
            {
                openBrackets.push(i);
            }
            else if(i == ')' || i == ']' || i == '}')
            {
                if(openBrackets.empty())
                {
                    return false;
                }
                char top = openBrackets.top();
                if ((i == ')' && top == '(') || (i == '}' && top == '{') || (i == ']' && top == '[')) 
                {            
                    openBrackets.pop();
                }
                else
                {
                    return false;
                }
            }
        }
    return openBrackets.empty();
    }
};
