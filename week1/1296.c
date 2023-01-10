#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100
#define patternSize 4
char pattern[] = "LOVE";

int *count(char str[])
{
    int len = strlen(str);
    int *result = (int *)calloc(patternSize, sizeof(int));
    for (int i = 0; i < len; i++)
        for (int j = 0; j < patternSize; j++)
            if (str[i] == pattern[j])
                result[j]++;

    return result;
}

int main()
{
    char name[21];
    gets(name);
    int *nameCount = count(name);

    int N;
    scanf("%d", &N);
    
    char team[50][21];
    int res[50];
    int *teamCount;
    int curRes[patternSize];
    for (int i = 0; i < N; i++)
    {
        scanf("%s", team[i]);
        teamCount = count(team[i]);
        for (int j = 0; j < patternSize; j++)
            curRes[j] = teamCount[j] + nameCount[j];

        res[i] = 1;
        for (int j = 0; j < patternSize; j++)
            for (int k = j + 1; k < patternSize; k++)
                res[i] = (res[i] % 100) * (curRes[j] + curRes[k]);
        res[i] %= 100;
    }

    int maxIndex = 0;
    for (int i = 1; i < N; i++)
        if (res[i] > res[maxIndex] || (res[i] == res[maxIndex] && strcmp(team[i], team[maxIndex]) < 0))
            maxIndex = i;

    printf("%s",team[maxIndex]);

    return 0;
}
