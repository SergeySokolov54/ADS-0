// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    int k = 0;
    for (int i = 1; i < a; i++) {
        if (a % i == 0 && b % i == 0) {
            k = i;
        }
    }
    return k;
}
