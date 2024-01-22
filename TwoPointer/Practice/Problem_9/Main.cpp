int Countpair(int arr[], int n, int sum){
    int count = 0;
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (arr[i] + arr[j] == sum)
        {
            count++;
            i++;
        }
        else if (arr[i] + arr[j] > sum)
            j--;
        else
            i++;
    }
    return count == 0 ? -1 : count;
}