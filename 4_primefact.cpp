/*For finding the prime factors of numbers using sieve first we generate an array and initialize elements with their position, then we perform sieve operation;
//we mark all the multiples of 2 as 2, multiples of 3 as 3, and so on.

//Then for finding prime factors we simply run a loop till n is greater than equal to 1, print the factor stored in ar[n], and then divide n by ar[n].*/