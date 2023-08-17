#include <stdio.h>
#include <stdlib.h>

// @codenichecp

typedef struct
{
    int first;
    int second;
} Pair;


int comparePairs(const void *a, const void *b)
{
    Pair *pairA = (Pair *)a;
    Pair *pairB = (Pair *)b;

    if (pairA->first < pairB->first)
        return -1;
    else if (pairA->first > pairB->first)
        return 1;
    else
    {
        if (pairA->second > pairB->second)
            return -1;
        else if (pairA->second < pairB->second)
            return 1;
        else
            return 0;
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        Pair *a = (Pair *)malloc(n * sizeof(Pair));
        for (int i = 0; i < n; i++)
            scanf("%d %d", &a[i].first, &a[i].second);

        qsort(a, n, sizeof(Pair), comparePairs);

        long long res = 0;
        int cur = 0, i = 0, j = 0, rem;
        while (i < n)
        {
            rem = 0;
            res += a[i].second;
            cur++;
            for (; j < n && a[j].first <= cur;)
                j++, rem++;
            if (i < j - 1)
            {
                i = j - 1;
                cur = 0;
            }
            else
                cur -= rem;
            i++;
        }
        printf("%lld\n",  res);
            
    }
}