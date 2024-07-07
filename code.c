int numWaterBottles(int b, int e) {
    int ans = b;
    while (b >= e) {
        int r = b % e;
        b /= e;
        ans += b;
        b += r;
    }
    return ans;
}
