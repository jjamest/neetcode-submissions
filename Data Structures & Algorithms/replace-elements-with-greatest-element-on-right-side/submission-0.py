class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        running_max = [0] * len(arr)
        running_max[-1] = -1

        for i in range(len(arr) - 2, -1, -1):
            if i == len(arr) - 2:
                running_max[i] = arr[-1]
            else:
                running_max[i] = max(running_max[i + 1], arr[i + 1])

        #running_max[-1] = -1
        return running_max