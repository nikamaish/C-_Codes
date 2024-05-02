#include<iostream>
using namespace std;

int main(){


/* It is the amount of time taken by an alogrithm to run
  as function of length of input 

why we use = for making better program 
             comparision of algo
there are types in measuring complexity


Big O notation ,      Theta ,         Omega
Upper bound        for avg-case      lower bound
it gives worst     complexity        (at min)
case complexity
(at max)


constant time  ----> O(1) for eg. printing hello word 11 times, in this example we know we are going to print it
                     in fixed amount

Linear time   -----> O(n) for eg. same above example but it will run for n times 


logarithmic time ----> O(logn) eg. binary search

Quadratic time ----> O(n2)  eg two for loops

cubic time -----> O(n3) eg three for loops


O(N!)    ^
O(2^n)   |  High complexity
O(N^3)   |
O(N^2)
O(NLogN)
O(N)     |
O(LogN)  | low complexity
O(1)     | 



questions: 2n^2+3n === here it is we ignore lower degree and constant also
 so here, O(n^2) will be complexity

 12001 = so O(1)

 n+4/4 = O(n)

  if we see two inner for loops then we have to add tyat loops means complxity will look like O (n+m)
  if there is nested loop then it will look like O(nxm)


  stuck in TLE= time limit exceeder 

  most of the modern machine can perform  10^8 operation/sec

  constraints= it means given input will lie betn them
  you should follow that chart (screenshot)


/////////////////////////////////// Space Complexity /////////////////////////////////

  how much memory will it take
  for eg.
  for variables = O(1)
  for fixed size of array space complexity will be O(1)
  vector<int> v(n); = O(n)
  for loop dont take your space, vectors and variables take space

*/

return 0;
}