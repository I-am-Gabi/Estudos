#include <iostream>

int BinSearch (int *v,int start, int end, int value){

	int mid;

	while (start <= end){
		mid = (start + end)/2;
		if (value == v[mid]) {
			return mid;
		}
		else if (value > v[mid]){
			start = mid + 1;
		}
		else if (value < v[mid]){
			end = mid -1;
		}
	}

}