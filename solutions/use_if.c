#include <stdio.h>

const char* sign_of(int x) {
    if (x > 0) return "positive";
    else if (x == 0) return "zero";
    else return "negative";
}

int main() {
    int values[] = {-3, 0, 5};
    for (int i = 0; i < 3; i++) {
        printf("%d is %s\n", values[i], sign_of(values[i]));
    }
    return 0;
}
