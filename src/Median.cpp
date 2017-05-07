/*
 * Median.cpp
 *
 *  Created on: May 7, 2017
 *      Author: Trant
 */

#include "Median.h"

namespace Solutions {

Median::Median() {
	// TODO Auto-generated constructor stub

}

Median::~Median() {
	// TODO Auto-generated destructor stub
}

/*
 * There are two sorted arrays nums1 and nums2 of size m and n
 * respectively.
 *
 * Find the median of the two sorted arrays. The overall run time
 * complexity should be O(log (m+n)).
 */
double Median::findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size = nums1.size()+nums2.size();
        int count = (size/2);

        // loop
        int i = 0;
        int n1, n2;
        int idx1 = 0;
        int idx2 = 0;
        int size1 = nums1.size();
        int size2 = nums2.size();
        while (i < count) {
            if (idx1 == size1) {
                n1 = nums2[idx2];
                idx2++;
            } else if (idx2 == size2) {
                n1 = nums1[idx1];
                idx1++;
            } else if (nums1[idx1] < nums2[idx2]) {
                n1 = nums1[idx1];
                idx1++;
            } else {
                n1 = nums2[idx2];
                idx2++;
            }
            i++;
        }

        // set n2
        if (idx1 == size1) {
            n2 = nums2[idx2];
        } else if (idx2 == size2) {
            n2 = nums1[idx1];
        } else if (nums1[idx1] < nums2[idx2]) {
            n2 = nums1[idx1];
        } else {
            n2 = nums2[idx2];
        }

        // calc meadian
        double median;
        if (size%2 == 0) {
            median = double (n1 + n2) / 2.0;
        } else {
            median = n2;
        }
        return median;

    }

}
