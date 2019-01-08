//
// Created by James Hunt on 2019-01-07.
//

int doMathImpl() {
    return 2 + 3;
};

int getNumImpl(int (*doMath)()) {
    return doMath();
}

char getCharImpl(int alphabetNum) {
    char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
    return alphabet[alphabetNum];
}

struct twoDependencies {
    int (*getNum)();
    char (*getChar)(int);
};
