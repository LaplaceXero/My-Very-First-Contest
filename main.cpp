#include <iostream>
using namespace std;

int main() {
	
	int N; //number of new users
	int A; //users just saw the problems and didn’t make any submissions
	int B; //users who made a submission but could not solve any problem correctly.
	
	cin >>N >>A >>B;
	
	cout <<(N-A) <<" " <<(N - A - B) <<endl;
	return 0;
}
