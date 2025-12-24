#include <stdio.h>

int main()
{
    int score;
    printf("시험 점수는?: ");
    fflush(stdout);
    scanf("%d", &score);
    
    if (score >= 90)
        printf("A\n");
    else if (score >= 80)
        printf("B\n");
    else if (score >= 70)
        printf("C\n");

    return 0;
}