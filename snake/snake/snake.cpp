#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    // 请在此输入您的代码
    int i,n=0, b[26] = { 0 };
    int max = 0, bi;
    char a[1000] = { 0 };
    for (i = 0; i < 1000; i++) {
        scanf_s("%c", &a[i],sizeof(a[i]));
        n++;
        if (a[i] == ' ')break;
    }
    for (i = 0;i<n; i++)
    {
        int j = (int)a[i] - 97;
        b[j] = b[j] + 1;
    }
    for (i = 0; i < 26; i++)
    {
        if (b[i] > max) { max = b[i]; bi = i; }

    }
    printf("%c\n", bi + 97);
    printf("%d", max);
    return 0;
}