bool isSubsetSum(vector<int>& set, int n, int sum)
{
    if (sum == 0)
        return true;
    if (n == 0)
        return false;
 
    if (set[n - 1] > sum)
        return isSubsetSum(set, n - 1, sum);

    return isSubsetSum(set, n - 1, sum)
           || isSubsetSum(set, n - 1, sum - set[n - 1]);
}

bool hasValidSubset(vector<int>A, int target) {

    return isSubsetSum(A, A.size(), target);
}
