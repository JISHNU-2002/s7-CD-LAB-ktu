#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n, m = 0;
char a[10][10], b[5]; 

void toNFA(char c, char d) {
    for (int i = 0; i < n; i++) {
        if (a[i][0] == d && a[i][1] != 'e') {
            b[0] = c;
            b[1] = a[i][1];
            b[2] = a[i][2];
            printf("changed : %s\n", b);
            strcpy(b,"");
        }
    }
}

int main() {
    int i, z;
    char c, ch;
    printf("Enter the no of transitions = ");
    scanf("%d", &n);

    printf("Enter the e-NFA transitions\n");
    for (i = 0; i < n; i++) {
        scanf("%s%c", a[i], &ch);
    }

    printf("NFA without e-transitions\n");
    for (i = 0; i < n; i++) {
        if (a[i][1] != 'e') {
            printf("original : %s\n", a[i]);
        } else {
            toNFA(a[i][0], a[i][2]);
        }
    }
    return 0;
}