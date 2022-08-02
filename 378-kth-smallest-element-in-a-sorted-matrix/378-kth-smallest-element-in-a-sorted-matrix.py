import numpy as np
from functools import lru_cache
@lru_cache()
class Solution:
    def kthSmallest(self, matrix: List[List[int]], k: int) -> int:
        arr=np.array(matrix)
        new=arr.flatten()
        new.sort()
        return new[k-1]