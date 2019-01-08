//
// Created by James Hunt on 2019-01-07.
//

#ifndef FUNCTIONPOINTERS_DEPENDENCIES_H
#define FUNCTIONPOINTERS_DEPENDENCIES_H

#endif //FUNCTIONPOINTERS_DEPENDENCIES_H

int doMathImpl();

int getNumImpl(int (*)());

char getCharImpl(int);

struct twoDependencies {
    int (*getNum)();
    char (*getChar)(int);
};