/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
 int n, num, rev = 0;
 printf("Enter any number to check palindrome: ");
 scanf("%d", &n);
 num = n; 
 while(n != 0)
 {
 rev = (rev * 10) + (n % 10);
 n /= 10;
 }
 if(rev == num)
 {
 printf("%d is palindrome.", num);
 }
 else
 {
 printf("%d is not palindrome.", num);
 }
return 0;
}