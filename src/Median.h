/*
 * Solution02.h
 *
 *  Created on: May 7, 2017
 *      Author: Trant
 */

#ifndef MEDIAN_H_
#define MEDIAN_H_

#include <vector>
using namespace std;

namespace Solutions {

class Median {
public:
	Median();
	virtual ~Median();
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2);
};

} /* namespace Solutions */

#endif /* MEDIAN_H_ */
