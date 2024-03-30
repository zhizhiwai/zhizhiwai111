


//
// Created by zzyooo on 24-3-29.
//
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(){
    // 读
    Mat img = imread("/home/zzyooo/zzywrite/car.png");
    imshow("inin", img);

    // 查
    if (img.empty()) {
        cout << "Error: Unable to load input image" << endl;
        return -1;
    }

    // 加载级联分类器
    CascadeClassifier aaa;
    if (!aaa.load("/home/zzyooo/zzywrite/cascade_562_1000.xml")) {
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