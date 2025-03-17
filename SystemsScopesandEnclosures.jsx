function outerFunction() {
    let x = 10;
    function innerFunction() {
        return x;
    }
    return innerFunction;
}

let closure = outerFunction();
console.log(closure());  // Output: 10