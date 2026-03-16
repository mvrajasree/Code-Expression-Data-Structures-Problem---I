#include <iostream> //input output
#include <stack> //stack data structure
#include <string> //text and string handling

using namespace std;


bool isBalanced(string expression){
    if(expression.length() % 2 != 0) return false; //odd-length string cannot be balanced
    
    stack<char> pile; //LIFO structure of characters with the stack name 'pile'
    for(char current:expression){ //modified for loop to reduce small mistakes
        if(current == '(' || current == '{' || current == '['){
            pile.push(current); //push onto the stack
        }
        else if(current == ')' || current == '}' || current == ']'){
            if (pile.empty()) return false; //if we get the closing bracket but the stack is empty then we have no opening bracket to balance
            
            char top = pile.top(); 
            if ((current == ')' && top == '(') ||
                (current == '}' && top == '{') ||
                (current == ']' && top == '[')) {
                pile.pop(); // if closer matches the opener then pop 
        } else {
            return false;
        }
    }
} 
return pile.empty();
}
int main() {
    int total;
    if(!(cin >> total)) return 0; //taking number of inputs/strings from the user
    
    while (total--) {
        string input; //input individual strings
        cin >> input;
        
        if (isBalanced(input))
            cout << "Is Balanced" << endl;
        else
            cout << "Is Not Balanced" << endl;
    }
    return 0;
}
