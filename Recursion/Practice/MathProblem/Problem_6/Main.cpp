int sumDigit(long long N)
{
    if (N < 10)
        return N;
    return N%10 + sumDigit(N/10);
}

int singleDigit(long long N)
{
    if (N < 10)
        return N;
    return singleDigit(sumDigit(N));
}