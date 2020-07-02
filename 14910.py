nums1 = list(map(int, input().split()))
nums2 = sorted(nums1)

if nums1 == nums2:
    print("Good")
else:
    print("Bad")
