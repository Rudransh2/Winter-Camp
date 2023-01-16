def isThereSubsetSum(arr, n, sum):
    if (sum == 0):
        return True
    if (n == 0):
        return False
 
    if (arr[n - 1] > sum):
        return isThereSubsetSum(arr, n - 1, sum)
 
    return isThereSubsetSum(
        arr, n-1, sum) or isThereSubsetSum(
        arr, n-1, sum-arr[n-1])
