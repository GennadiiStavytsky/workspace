int mx_factorial_iter(int n) {
    int resul = 1;
    if (n > 0) {
        if (resul <= 2147483647) {
            for (int i = 1; i <= n; i++) {
                resul = resul * i;
            }
            return resul;
        }
    }
    return 0;
}

