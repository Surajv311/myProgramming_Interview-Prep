//  luv cp
(a / b) % m = ((a % m) * ((b ^ (-1)) % m)) % m ;
(a + b) % m = ((a % m) + (b % m)) % m ;
(a*b) % m = ((a % m) * (b % m)) % m ;
// so + and * are similar...;
(a - b) % m = ((a % m) - (b % m) + m) % m ;
