#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int b;
        scanf("%d", &b);
        int cur = -1;
        int i = 0;
        while (i < n) {
            int ax;
            scanf("%d", &ax);
            if ((ax & b) == b)
                cur &= ax;
            i++;
        }
        if (cur == b)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
