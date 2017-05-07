//============================================================================
// Name        : CPPInterviewPractice.cpp
// Author      : TWB
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

/*
 * Given an array of integers that is already sorted in ascending order, find two numbers such that they add up to a specific target number.

The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.

You may assume that each input would have exactly one solution and you may not use the same element twice.

Input: numbers={2, 7, 11, 15}, target=9
Output: index1=1, index2=2
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int size = numbers.size();
        vector<int> indecies;
        for (int i=0; i<size-1; ++i) {
            for (int j=i+1; j<size; ++j) {
                if (numbers[i]+numbers[j] > target) break;
                if (numbers[i]+numbers[j] == target) {
                    indecies.push_back(i+1);
                    indecies.push_back(j+1);
                    return indecies;
                }
            }
        }
        return indecies;
    }
};

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	// test function {1,3,5,7,11,13}
	vector<int> v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(5);
	v.push_back(7);
	v.push_back(11);
	v.push_back(13);
	int target = 10;
	Solution solution;
	vector<int> indicies = solution.twoSum(v, target);
	if (indicies.size() < 2)
		printf("No Match found");
	else printf("Index1 = %d\tIndex2 = %d\n", indicies[0], indicies[1]);

	return 0;
}
