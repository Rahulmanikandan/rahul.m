#include <stdio.h>
void tower(int,char,char,char);
void tower(int n, char first, char last, char next)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from  %c to  %c",first,last);
        return;
    }
    tower(n-1, first,next,last);
    printf("\n Move disk %d from %c to %c",n,first,last);
    tower(n-1,next,last,first);
}
 int main()
{
    int n = 3; 
    tower(n,'r','s','t'); 
    return 0;
    
}
