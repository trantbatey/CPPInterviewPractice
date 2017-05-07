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
#include "TwoSum.h"
#include "Median.h"
using namespace std;
using namespace Solutions;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	// test two sums {1,3,5,7,11,13}
	vector<int> v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(5);
	v.push_back(7);
	v.push_back(11);
	v.push_back(13);
	int target = 10;
	TwoSum aTwoSum;
	vector<int> indicies = aTwoSum.twoSum(v, target);
	if (indicies.size() < 2)
		printf("No Match found");
	else printf("Index1 = %d\tIndex2 = %d\n\n", indicies[0], indicies[1]);

	// test find median of two vectors
	// {1,3,5,7,11,13}
	// {-1, 3, 4, 8, 12}
	vector<int> v2;
	v2.push_back(-1);
	v2.push_back(3);
	v2.push_back(4);
	v2.push_back(8);
	v2.push_back(12);
	Median aMedian;
	printf("Median = %3.2f\n\n", aMedian.findMedianSortedArrays(v, v2));

	return 0;
}
