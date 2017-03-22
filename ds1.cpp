#include <bits/stdc++.h>

using namespace std;

int sum1(int *v, int *p)
{
	int sum = 0;
	for(; v != p; v++)
		sum += *v;
	return sum;
}

int sum2()
{
	int sum = 0;

	return sum;
}

int first_odd(int *v, int *p)
{
	int odd = 0;
	for(; v != p; v++)
		if(*v & 1)
			return *v;
	return INT_MAX;
}

int getSum(int *inputArray, int leftIndex, int rightIndex){
    int mid;
    if(NULL == inputArray || leftIndex > rightIndex)
        return 0;
    if(leftIndex == rightIndex)
        return inputArray[leftIndex];
    mid = (leftIndex + rightIndex) / 2;
    return getSum(inputArray, leftIndex, mid) +
               getSum(inputArray, mid+1, rightIndex);
}

int rec_sum(int *v, int *p)
{
    if (v == p)
        return *p;
    return (*p + rec_sum(v, p - 1));	
}

int main()
{
	int v[] = {8, 2, 1, 2, 4};
	
	
	return 0;
}
