#include<iostream.h> 


int main()
{
	int n = 10;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(i<j){
				continue;
			}
			else if(i==j){
				float testVar = 1.2;
				cout << "i and j are equal";
			}
			else{
				break;
			}
		}
	}
	return 0;
}
