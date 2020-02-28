#include <iostream>
#include<opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
	cv::Mat M1 = cv::imread("D:\\Files\\2.jpg");//读取图片
	int height = M1.rows;
	int wide = M1.cols;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < wide; j++)
		{
			uchar average = (M1.at<Vec3b>(i, j)[0] + M1.at<Vec3b>(i, j)[1] + M1.at<Vec3b>(i, j)[2]) / 3;
			M1.at<Vec3b>(i, j)[0] = average;
			M1.at<Vec3b>(i, j)[1] = average;
			M1.at<Vec3b>(i, j)[2] = average;
		}
	}
	cv::imshow("M1", M1);
	waitKey(0);
}