#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> sortedSquares(const std::vector<int>& nums) {
    std::vector<int> result(nums.size());

    int left = 0;
    int right = nums.size() - 1;
    int index = nums.size() - 1;

    while (left <= right) {
        int leftSquare = nums[left] * nums[left];
        int rightSquare = nums[right] * nums[right];

        if (leftSquare > rightSquare) {
            result[index] = leftSquare;
            left++;
        }
        else {
            result[index] = rightSquare;
            right--;
        }

        index--;
    }

    return result;
}

int main() {
    // Приклад 1
    std::vector<int> nums1 = { -4, -1, 0, 3, 10 };
    std::vector<int> result1 = sortedSquares(nums1);

    std::cout << "Example 1:\n";
    for (int num : result1) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    // Приклад 2
    std::vector<int> nums2 = { -7, -3, 2, 3, 11 };
    std::vector<int> result2 = sortedSquares(nums2);

    std::cout << "Example 2:\n";
    for (int num : result2) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
