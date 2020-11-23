int trailingZeroes(int n){
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        int m = i;
        while (m) {
            if (m % 5 == 0) {
                m /= 5;
                cnt++;
            } else {
                break;
            }
        }
    }
    return cnt;
}
