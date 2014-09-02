#include <iostream>

int BinSearchR(int *v, int start, int end, int value){
	int middle;
	if (start > end){
		return -1;
	}
	else {
		middle = (start+end)/2;
		if (v[middle] == value)
			return middle;
		else if (value > v[middle])
			return BinSearchR(v,middle+1,end,value);
		else 
			return BinSearchR(v,start,middle-1,value);
	}

}

int BinSearchI(int *v,int start, int end, int value){
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

int main (){
	int array[13] = {10,20,30,40,50,60,70,80,90,100,110,120,130};
	std::cout << BinSearchI(array,1,13,80) << std::endl;	
	std::cout << BinSearchI(array,1,13,80) << std::endl;
}