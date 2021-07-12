#include <stdio.h>

int sum(int n)
{
    int result=0;
    
    printf("At the beginning, n is %d\n", n);

    for(int i=n; i>0; i--) result+=i;

    printf("At the end, return value is %d\n", result);

    return result;
}

int main() {

    int n;

    printf("Enter a num: ");
    scanf("%d", &n);

    int result=sum(n);

    return 0;

}