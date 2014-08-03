#include <iostream>

int BinSearch(int *v, int start, int end, int value){
	
	int middle;

	if (start > end){
		return -1;
	}
	else {
		middle = (start+end)/2;
		if (v[middle] == value)
			return middle;
		else if (value > v[middle])
			return BinSearch(v,middle+1,end,value);
		else 
			return BinSearch(v,start,middle-1,value);
	}

}