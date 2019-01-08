#include <stdio.h>

#include "dependencies.h"
#include "di.h"

int main() {
    struct twoDependencies blah = getThem();

    printf("wow2: %i\n", blah.getNum());
    printf("char: %c\n", blah.getChar(4));

    return 0;
}