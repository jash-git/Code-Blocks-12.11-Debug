#include <stdio.h>
#include <stdlib.h>

int sum(int num)
{
    int i, sum;
    for (i = 0; i <= num; i++)
        sum += i;
    return sum;
}
void Pause()
{
    printf("Press Enter key to continue...");
    fgetc(stdin);
}
int main()
{
    int i, num, s;
    printf("Input a number : ");
    scanf("%d", &num);
    s = sum(num);
    printf("The sum is %d\n", s);
    Pause();
    return 0;
}
