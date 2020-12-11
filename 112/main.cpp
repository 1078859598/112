#include <iostream>
#include <opencv.hpp>
using namespace cv;
using namespace std;
int main()
{
	Mat channels[3];
	Mat dstchannels[3];


	Mat dstMat;
	Mat srcMat = imread("C:/Users/HS/Desktop/2.jpg");


	split(srcMat, channels);
	for (int i = 0; i < 3; i++)
	{
		equalizeHist(channels[i], dstchannels[i]);
	}
	merge(dstchannels, 3, dstMat);




	imshow("dstMat", dstMat);
	waitKey(0);
	return 0;
	//std::cout << "Hello World!\n";
}