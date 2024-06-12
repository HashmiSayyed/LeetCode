#include <iostream>
#include <vector>

std::vector<int> twoSum(std::vector<int>& nums, int target);

int main(int argc, char *argv[]) {
    std::vector<int> input = {3, 1, 2, 6};
    std::vector<int> ans = twoSum(input, 9);
    std::cout << "First Index: " << ans[0] << std::endl << "Second Index: " << ans[1] << std::endl;
    return 0;
}

std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::vector<int> arr;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (i == j) {
                    continue;
                } else {
                    int mySum = nums.at(i) + nums.at(j);
                    if (mySum == target) {
                        arr.push_back(i);
                        arr.push_back(j);
                        return arr;
                    }
                }
            }
        }
        return arr;
    }