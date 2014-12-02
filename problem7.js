// What is the 10 001st prime number?

function primeCheck(n){
  var isPrime = true;
  for(var i=2; i<=Math.sqrt(n); i++){
    if(n!==i && n%i==0){
    isPrime=false;
    break;
    }
  }
  return isPrime;
}

var listOfPrime = [];
for(var i=2; listOfPrime.length <= 10001;i++){
  if(primeCheck(i)){
      listOfPrime.push(i);
    }
}
  
console.log(listOfPrime[10000]);
