#include <stdio.h>

#define MAX 100

int s_length(char s[]) {
    int i;
    for (i = 0; s[i] != '\0'; i++);
    return i;
}

void s_cat(char* s1, char s2[]) {
    int l1 = s_length(s1);
    int l2 = s_length(s2);
    if (l1 + l2 >= MAX) {
        printf("Buffer overflow detected!\n");
        return;
    }
    int i, j;
    for (i = l1, j = 0; i < l1 + l2; i++, j++) {
        s1[i] = s2[j];
    }
    s1[i] = '\0';
}

int s_cmp(char s1[], char s2[]) {
    int i = 0, ans = 0;
    while (s1[i] != '\0' || s2[i] != '\0') {
        ans = s1[i] - s2[i];
        if (ans != 0) break;
        i++;
    }
    return ans;
}

void InserstString(char* s1, char s2[], int pos) {
    int Tlen = s_length(s1) + s_length(s2);
    if (Tlen >= MAX) {
        printf(" overflow !\n");
        return;
    }
    char temp[MAX];
    for (int i = pos, j = 0; i < s_length(s1); i++, j++)
        temp[j] = s1[i];
    s1[pos] = '\0';
    s_cat(s1, s2);
    s_cat(s1, temp);
    s1[Tlen] = '\0';
}

void DeleteString(char* s1, char s2[]) {
    int pos = -1;
    for (int i = 0, j = 0; s1[i] != '\0'; i++) {
        if (s1[i] == s2[0]) {
            int found = 1;
            for (int k = i, j = 0; j < s_length(s2); k++, j++) {
                if (s1[k] != s2[j]) {
                    found = 0;
                    break;
                }
            }
            if (found == 1) {
                pos = i;
                break;
            }
            j = 0;
        }
    }
    if (pos == -1) {
        printf("String not found!\n");
        return;
    }
    int l2 = s_length(s2), i;
    for (i = pos + l2; s1[i] != '\0'; i++) {
        s1[pos] = s1[i];
        pos++;
    }
    s1[pos] = '\0';
}

int main() {
    char s1[MAX], s2[MAX], s3[MAX], s[MAX];

    gets(s1);
    gets(s2);

    printf("Length = %d", s_length(s1));
    printf("\n%d", s_cmp(s1, s2));
    s_cat(&s1[0], s2);
    printf("\n%s\n", s1);
    InserstString(&s1[0], "ITC", 5);
    printf("%s ", s1);
    DeleteString(&s1[0], "ITC");
    printf("%s ", s1);

    return 0;
}