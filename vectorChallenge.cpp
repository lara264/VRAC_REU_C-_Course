#include <iostream>
#include <vector>

//this calculates the mean value for each column of the given vectors
//it returns a vector of the mean values in their respective columns so the mean vector can be used again
std::vector<float> meanValue(std::vector<float> a, std::vector<float> b, std::vector<float> c) {
	std::vector<float> mean;

	int size = a.size();
	unsigned int i = 0;
	float sum;
	for (i = 0; i < size; i++) {
		sum = a[i] + b[i] + c[i];
		mean.push_back(sum / 3);
	}

	return mean;
}

//Adam Kohl used the Sample standard deviation equation. 
std::vector<float> stdDev(std::vector<float> a, std::vector<float> b, std::vector<float> c, std::vector<float> mean) {
	
	std::vector<float> std;

	int size = a.size();
	float numerator, result;

	for (unsigned int i = 0; i < size; i++) {
		numerator = 0;
		result = 0;

		numerator += ((a[i] - mean[i])*(a[i] - mean[i]));
		//std::cout << "a[i] - mean[i] is: " << a[i] - mean[i] << std::endl;
		numerator += ((b[i] - mean[i])*(b[i] - mean[i]));
		//std::cout << "b[i] - mean[i] is: " << b[i] - mean[i] << std::endl;
		numerator += ((c[i] - mean[i])*(c[i] - mean[i]));
		//std::cout << "c[i] - mean[i] is: " << c[i] - mean[i] << std::endl;

		//std::cout << "the numerator is: " << numerator << std::endl;

		numerator /= 2;

		result = sqrt(numerator);

		std.push_back(result);
	}

	return std;
}

//this is the main function, but because I put all my files in the same project, VS gets mad at me because then there are too many main functions it's trying to compile
int populationVSsample() {

	//with the given arrays find the resultant mean and standard deviation
	// using columns not entire vector

	std::vector<float> a = { 61, 7, 5, 12, 3, 9 };
	std::vector<float> b = {60, 21, 6, 19, 8, 13};
	std::vector<float> c = {59, 42, 8, 17, 12, 10};

	std::vector<float> mean = meanValue(a, b, c);

	for (auto num : mean) {
		std::cout << "The mean value of each column is: " << num << std::endl;
	}

	std::vector<float> std = stdDev(a, b, c, mean);

	for (auto num : std) {
		std::cout << "The standard deviation of each column is: " << num << std::endl;
	}

	
	return 0;
}