#include <iostream>
using namespace std;

float CalculateBMI(float h , float w ) {
	float Sqrt0fHeight = h*h ;
	float BMI = w / Sqrt0fHeight ;
	return BMI ;
}

int main() {

	float height ;
	float weight ;
	std::cout << "PLEASE ENTER YOUR HEIGHT IN METERS ---->> " << endl;
	cin >> height ;
	std::cout << "PLEASE ENTER YOUR WEIGHT IN KGS -----> " << endl;
	cin >> weight ;

	float BMI = CalculateBMI( height , weight );
	cout << "YOUR BMI IS "  << BMI << endl;


	if (BMI < 20 ) {
		cout << "YOU ARE UNDER WEIGHT " << endl;
	} else if ( BMI > 20 & BMI < 25 ) {
		cout << "YOU ARE HEALTHY " << endl;
	} else if ( BMI >25 & BMI < 30) {
		cout << " OVER WEIGHT " << endl;
	} else if ( BMI >30) {
		cout << "OBESE " << endl;
	}
	return 0;
}

