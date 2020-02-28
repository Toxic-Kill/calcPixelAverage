#include <iostream>
#include<opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
	cv::Mat M1 = cv::imread("D:\\Files\\2.jpg");//读取图片
	int height = M1.rows;
	int width = M1.cols;
	for (int i = 0; i < height; i++)//遍历每个像素
	{
		for (int j = 0; j < width; j++)
		{
			uchar average = (M1.at<Vec3b>(i, j)[0] + M1.at<Vec3b>(i, j)[1] + M1.at<Vec3b>(i, j)[2]) / 3;//计算各像素点RGB平均值
			M1.at<Vec3b>(i, j)[0] = average;//赋值
			M1.at<Vec3b>(i, j)[1] = average;//赋值
			M1.at<Vec3b>(i, j)[2] = average;//赋值
		}
	}
	cv::imshow("M1", M1);//显示图片
	waitKey(0);
}