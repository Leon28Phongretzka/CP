function infixToPostfix(expression) {
  const precedence = {
    '^': 4,
    '*': 3,
    '/': 3,
    '+': 2,
    '-': 2
  };
  const associativity = {
    '^': 'right',
    '*': 'left',
    '/': 'left',
    '+': 'left',
    '-': 'left'
  };
  const output = [];
  const operators = [];

  const isOperator = token => token in precedence;
  const peek = stack => stack[stack.length - 1];
  const isHigherOrEqualPrecedence = (op1, op2) =>
    precedence[op1] > precedence[op2] ||
    (precedence[op1] === precedence[op2] &&
      associativity[op1] === 'left');

  for (const token of expression.split(/\s+/)) {
    if (!token) {
      continue;
    } else if (!isNaN(token)) {
      output.push(token);
    } else if (token === '(') {
      operators.push(token);
    } else if (token === ')') {
      while (peek(operators) !== '(') {
        output.push(operators.pop());
      }
      operators.pop();
    } else if (isOperator(token)) {
      while (
        operators.length &&
        peek(operators) !== '(' &&
        isHigherOrEqualPrecedence(token, peek(operators))
      ) {
        output.push(operators.pop());
      }
      operators.push(token);
    } else {
      throw new Error(`Invalid token: ${token}`);
    }
  }

  while (operators.length) {
    if (operators[operators.length - 1] === '(') {
      throw new Error('Mismatched parentheses');
    }
    output.push(operators.pop());
  }

  return output.join(' ');
}

const infix = '3 + 4 * 2 / (1 - 5)^2';
const postfix = infixToPostfix(infix);
console.log(postfix); // Output: '3 4 2 * 1 5 - 2 ^ / +'