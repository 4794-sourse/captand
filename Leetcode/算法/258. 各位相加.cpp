int addDigits(int num){
    int ans = num;
    while (ans > 9) {
        ans = 0;
        while (num) {
            ans += num % 10;
            num /= 10;
        }
        num = ans;
    } 
    return ans;
}
