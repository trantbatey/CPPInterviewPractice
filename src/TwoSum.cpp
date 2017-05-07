/*
 * TwoSum.cpp
 *
 *  Created on: May 7, 2017
 *      Author: Trant
 */
using namespace std;

#include "TwoSum.h"

namespace Solutions {

TwoSum::TwoSum() {
	// TODO Auto-generated constructor stub

}

TwoSum::~TwoSum() {
	// TODO Auto-generated destructor stub
}

/*
 * Given an array of integers that is already sorted in ascending
 * order, find two numbers such that they add up to a specific
 * target number.
 *
 * The function twoSum should return indices of the two numbers
 * such that they add up to the target, where index1 must be less
 * than index2. Please note that your returned answers (both index1
 * and index2) are not zero-based.
 *
 * You may assume that each input would have exactly one solution
 * and you may not use the same element twice.
 *
 * Input: numbers={2, 7, 11, 15}, target=9
 * Output: index1=1, index2=2
 */
vector<int> TwoSum::twoSum(vector<int>& numbers, int target) {
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

} /* namespace Solutions */


/*
 * Given an array of integers that is already sorted in ascending order, find two numbers such that they add up to a specific target number.

The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.

You may assume that each input would have exactly one solution and you may not use the same element twice.

Input: numbers={2, 7, 11, 15}, target=9
Output: index1=1, index2=2
 */
