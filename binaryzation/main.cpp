#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main()
{
	Mat src = imread("D:\\1.jpg");
	Mat res1;
	Mat dest;
	cvtColor(src, dest, CV_BGR2GRAY);
	threshold(dest, res1, 100, 255, THRESH_BINARY);
	
	Mat res2;
	adaptiveThreshold(dest,res2 , 255, CV_ADAPTIVE_THRESH_GAUSSIAN_C, THRESH_BINARY, 15, 10);

	namedWindow("test1");
	imshow("test1", res1);
	namedWindow("test2");
	imshow("test2", res2);
	waitKey(0);
	return 0;
}
