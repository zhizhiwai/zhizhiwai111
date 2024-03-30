/**
 * @Project       : Project
 * @Author        : CocoTang1024
 * @FileName      : license_plate_detection.cpp
 * @Date          : 2024/3/30 18:52
 * @Software      : CLion
 * @Version       : v1.0
 * @Description   : None
 **/

#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(){
    // 读
    Mat img = imread("../img.png");
    imshow("inin", img);

    // 查
    if (img.empty()) {
        cout << "Error: Unable to load input image" << endl;
        return -1;
    }

    // 加载级联分类器
    CascadeClassifier aaa;
    if (!aaa.load("../indian_license_plate.xml")) {
        cout << "Error: Unable to load cascade classifier" << endl;
        return -1;
    }

    vector <Rect> zzy;
    aaa.detectMultiScale(img, zzy, 1.1, 5);

    for (size_t i = 0; i < zzy.size(); i++) {
        rectangle(img, zzy[i], Scalar(0, 255, 0), 2);
    }
    imshow("outout", img);
    waitKey(0);

    return 0;
}