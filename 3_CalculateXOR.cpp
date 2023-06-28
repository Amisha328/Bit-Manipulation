// Calculate XOR
// Problem link:
// https://www.codingninjas.com/codestudio/problem-details/calculate-xor_630606

// You are given an integer 'N'. For this given integer, find the XOR of all the integers starting from 0 to 'N'.

/*
 
 value of N         XOR
 N = 1              1
 N = 2              3
 N = 3              0
 N = 4              4
 N = 5              1
 N = 6              7
 N = 7              0
 N = 8              8

Pattern observeed:

1) For all the numbers divisible by 4 XOR is number itself eg., N = 4, 8 etc
2) For all the numbers when divided by 4 leaves remainder 1, XOR is 1 eg., N = 1, 5 etc
3) For all the numbers when divided by 4 leaves remainder 2, XOR is N+1 eg., N = 2, 6 etc
4) For all the numbers when divided by 4 leaves remainder 3, XOR is 0 eg., N = 3, 7 etc
*/

int calculateXOR(int n)
{
    if(n%4 == 0) return n;
    else if(n%4 == 1) return 1;
    else if(n%4 == 2) return (n+1);
    else if(n%4 == 3) return 0; 
}