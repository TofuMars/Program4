// This sample file will display the first world of waldo if OPENCV is configured properly
// Authors: Youssef and Nathan
// Date: November 9, 2019
// Course: CSS487 Autumn 2019

#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
using namespace cv;
using namespace std;

// sample main that shows waldo world 1
int main(int argc, char** argv)
{
	Mat image;
	image = imread("waldoworld1.jpg", IMREAD_COLOR); // Read the file
	namedWindow("world1", WINDOW_AUTOSIZE);
	imshow("world1", image);
	waitKey(0);

	return 0;
}