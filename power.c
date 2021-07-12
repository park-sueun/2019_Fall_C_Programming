#include <stdio.h>
#include <math.h>

int power(int n, int m)
{
    int result=0;
    
    result=pow(n, m);

    return result;
}

int main() {

    int n, m;

    printf("Enter a (num, power): ");
    scanf("%d, %d", &n, &m);

    int result=power(n, m);

    printf("return value is %d", result);

    return 0;

}