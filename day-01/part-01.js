const fs = require('fs');

const file = './input.txt';
const puzzle = fs.readFileSync(file, 'utf-8');

const solution = puzzle
  .split('\n')
  .map((line) => line.split('').filter((char) => !isNaN(char)))
  .filter((digits) => digits.length > 0)
  .map((digits) => {
    const first = digits.length > 0 ? digits[0] : 0;
    const last = digits.length > 0 ? digits[digits.length - 1] : 0;

    return parseInt(first + last);
  })
  .reduce((prev, current) => prev + current);

console.log(solution);
