/*
Problem Statement

You will be given two integers A and B. You need to give output their multiplication.

Input Format

Input will contain A and B
Constraints

-10^9 <= A,B <= 10^9
Output Format

Output the multiplication
Sample Input 0

10 50
Sample Output 0

500
Sample Input 1

10000000 10000000
Sample Output 1

100000000000000
Sample Input 2

-100 62
Sample Output 2

-6200

*/


#include<stdio.h>
int main()

{


int A , B;

scanf("%d %d", &A, &B);
int multy = A*B;

printf("%d", multy);

return 0;

}