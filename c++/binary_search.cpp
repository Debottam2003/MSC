#include<iostream>

using namespace std;

int main(){
	
	int arr[] = {2,3,5,7,8,9,10,13};
	int first = 0;
	int last = sizeof(arr) / sizeof(arr[0]) - 1;
	int item = 8;
	int mid  = 0;
	int flag = 0;
	while(first <= last){
		mid = (first + last) / 2;
		cout << mid << endl;
		if(item == arr[mid]){
			flag = 1;
			break;
		}
		else if(item > arr[mid]){
            first = mid + 1;
		}
		else{
			last = mid - 1;
		}
	} 
	if(flag == 1){
		cout << "Item found";
	}
	else{
		cout << "Item not found";
	}
	return 0;
}
