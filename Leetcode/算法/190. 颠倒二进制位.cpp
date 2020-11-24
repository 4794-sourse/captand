uint32_t reverseBits(uint32_t n) {
    uint32_t temp = 32, ans = 0, cnt = 1;
    while (temp--) {
        uint32_t temp2 = n;
        temp2 = (temp2 >> temp);
        if (temp2 & 1) ans += cnt;
        cnt <<= 1;
    }
    return ans;
}
