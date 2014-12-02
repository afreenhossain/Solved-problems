// difference between the sum of the squares of the first one hundred natural numbers and the square of the sum
var sumofSquare = 1;
var sum = 1;

for(var i = 2; i<=100; i++){
  sumofSquare += Math.pow(i,2);
  sum += i;
}

var squareofSum = Math.pow(sum,2);

console.log(squareofSum - sumofSquare);