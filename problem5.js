// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
var arr = [[2,4], [3,2], [5,1], [7,1], [11,1], [13,1], [17,1], [19,1]];
var mult = 1;

for (var i =0; i<arr.length; i++) {
  mult *= Math.pow(arr[i][0],arr[i][1]);
}
console.log(mult);