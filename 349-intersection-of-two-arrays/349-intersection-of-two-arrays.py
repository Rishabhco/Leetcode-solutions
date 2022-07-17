class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        list3=[];
        for i in nums1:
            if i in nums2:
                if i not in list3:
                    list3.append(i)
        return list3;