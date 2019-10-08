// This is a function that takes a string of parentheses, and determines if the order of the parentheses is valid.
// Like "()" is valid, returns true
// "()()" : true
// "()))())()" isn't valid, returns false

function validParentheses(parens){
  var n = 0;
  for (var i = 0; i < parens.length; i++) {
    if (parens[i] == '(') n++;
    if (parens[i] == ')') n--;
    if (n < 0) return false;
  }
  
  return n == 0;
}
