// This is a function that takes a string of parentheses, and determines if the order of the parentheses is valid.
// Like "()" is valid, returns true
// "()()" : true
// "()))())()" isn't valid, returns false

const validParentheses = parens =>
  parens
    .split('')
    .reduce((acc,val) =>
        acc[1] === false
          ? acc
          :  val === '('
            ? acc[0] + 1
            : val === ')'
              ? acc[0] - 1
              : acc
    , [0, true])
    [1]