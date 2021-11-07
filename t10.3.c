#include<stdio.h>

int num[11];

void swap(int *a, int *b)
{
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}


void input()
{
    for(int i = 1; i <= 10; i ++ ) scanf("%d", &num[i]); 
}

void solotion()
{
    int minNum = 0x3f3f3f3f, maxNum = -0x3f3f3f3f, minK = 0, maxK = 0;
    for(int i = 1; i <= 10; i ++ )
    {
        if(num[i] > maxNum) maxNum = num[i], maxK = i;
    }
    swap(&num[10], &num[maxK]);

    for(int i = 1; i <= 10; i ++ )
    {
        if(num[i] < minNum) minNum = num[i], minK = i;
    }
    swap(&num[1], &num[minK]);
    
}

void output()
{
    for(int i = 1; i <= 10; i ++ ) printf("%d ", num[i]);
    printf("\n");
}

int main()
{
    input();
    solotion();
    output();

    return 0;
}