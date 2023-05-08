int maxMultiple(int divisor, int bound) {
    int quotient = bound / divisor;
    return quotient * divisor;
}