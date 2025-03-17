// Syntax Error: Use of an undefined variable 'o' instead of '0' in 'let total = o'
function calculateSum(arr) {
    let total = o;  // 'o' is not defined, should be '0'
    for (let num of arr) {
        total += num;
    }
    return total;
}

let numbers = [1, 2, 3, 4, 5];
let result = calculate Sum(numbers); // 'calculate Sum' should be 'calculateSum'
console.log("Sum in JavaScript:", result);