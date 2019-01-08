//
// Created by James Hunt on 2019-01-07.
//

#include "dependencies.h"

int (combineMath)() {
    return getNumImpl(doMathImpl);
}

struct twoDependencies getThem() {
    int (*combined)() = &combineMath;
    char (*getChar)(int) = &getCharImpl;

    struct twoDependencies d = {combined, getChar};
    return d;
}