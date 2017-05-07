/*
 * TwoSum.h
 *
 *  Created on: May 7, 2017
 *      Author: Trant
 */

#ifndef TWOSUM_H_
#define TWOSUM_H_

#include <vector>
using namespace std;

namespace Solutions {

class TwoSum {
public:
	TwoSum();
	virtual ~TwoSum();
	vector<int> twoSum(vector<int>& numbers, int target);
};

} /* namespace Solutions */

#endif /* TWOSUM_H_ */
