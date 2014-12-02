var s = 1000;
var a = 0;
var b = 0;
var c = 0;

for (a = 1; a < s/3; a++){
  for (b = 1; b<s/2; b++){
    c = s - a - b;  
    if (a*a + b*b === c*c){
      break
    }
  }
  if(a*a + b*b === c*c){
  break;
  }
}
console.log('a = ' + a + ' , b = ' + b + ' , c = ' + c);
console.log(a*b*c);