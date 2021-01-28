#include <stdio.h>

void update(int *a,int *b) {
    int sum = *a + * b;
    int module;
    if(*a>*b) {
        module = *a - *b;
    }
    else {
        module = *b - *a;
    }
    *a = sum;
    *b = module;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
