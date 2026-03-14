#include <iostream>
#include <stack>
#include <string>

using namespace std;


bool isBalanced(string exp){
    if(exp.length() % 2 != 0) return false;
    
    stack<char> s;
    for(char current:exp){
        if(current == '(' || current == '{' || current == '['){
            s.push(current);
        }
        else if(current == ')' || current == '}' || current == ']'){
            if (s.empty()) return false;
            
            char top = s.top();
            if ((current == ')' && top == '(') ||
                (current == '}' && top == '{') ||
                (current == ']' && top == '[')) {
                s.pop();
        } else {
            return false;
        }
    }
} 
return s.empty();
}
int main() {
    int t;
    if(!(cin >> t)) return 0;
    
    while (t--) {
        string input;
        cin >> input;
        
        if (isBalanced(input))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
