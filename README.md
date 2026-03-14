# Code-Expression-Data-Structures-Problem---I
Problem 1:You are given a string consisting of the characters ( ) { } [ ]. Your task is to determine whether the parentheses in the string are balanced. A string is considered balanced if: Every opening bracket has a corresponding closing bracket. Brackets are closed in the correct order.Ex:() {} [] is balanced string Ex:( {S} [ )]  is not balanced  <br>
Solution:
1. Create a function to check whether the string is balanced or not <br>
first use an if condition to check whether the entered string length is balanced by using modulus 2
2. **Traversal:** Iterate through the string character by character.
3. **Push:** If an opening bracket is found, push it onto the stack.
4. **Pop & Compare:** If a closing bracket is found:
   - Check if the stack is empty (if so, return `false`).
   - Pop the top element and verify if it matches the current closing bracket.
5. **Final Check:** After the loop, the stack must be empty for the string to be valid.
