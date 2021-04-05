arr = []

def canPartitionWithEqualSum(idx):
    val = arr[idx]
    
    arr[0] = 0
    
    sumR = 0
    sumL = arr[0]
    # calculate right sum
    for i in range(1,len(arr)):
        sumR += arr[i]
    
    itr = 1
    while itr < len(arr)-1:
        if sumL == sumR:
            return True
        sumL += arr[itr]
        sumR -= srr[itr]
        itr += 1
    
    arr[idx] = val   
    
    return False

n = int(input())
arr = list(map(int, input().split()))
    
canPartition = False

for idx in range(len(arr)):
    if canPartitionWithEqualSum(idx):
        canPartition = True
        break

print("YES") if canPartiotion == True else print("NO")
    
