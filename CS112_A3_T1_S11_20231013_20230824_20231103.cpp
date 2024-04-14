/*
assingment 3 version 7.0
authors:    Ahmed Mohamed Ahmed --> 20231013     performed filters no. 2 , 5 , 8 , 11 , 13 , 14 , 15 , 18    section 11
            Ali Alnazeir Ahmed --> 20230824      performed filters no. 1 , 4 , 7 , 10 , did the gui , performed 2 more filters 16 , 17   section 11
            Abdullah Alaa --> 20231103           performed filters no. 3 , 6 , 9 , 12 , 19 , 20   section 11
this file is an image filter modification application 
*/

#include <iostream>
#include "Image_Class.h"
using namespace std;

void GrayscaleConversion(Image image);
void MergeImages(Image image);
void blackWhite(Image image);
void flip(Image image);
void crop(Image image);
void DarkenAndLighten(Image image);
void DetectImageEdges(Image image);
void rotate_of_90(Image image);
void rotate_of_180(Image image);
void rotate_of_270(Image image);
void rotateMenu(Image image);
void resize(Image image);
void inverter(Image image);
void frame(Image image);
void naturalSunlight(Image image);
void infraredmode(Image image);
void violetMode(Image image);
void blur(Image image);
void saturation(Image image);
void ColorGrading(Image image);
void oilPaintedpic(Image image);
void tv(Image image);
void skew(Image image);
void menu(Image image);
void saveimage(Image image);



void saveimage(Image image){
    string filename ;
    cout << "Pls enter image name to store new image\n";
    cout << "and specify extension .jpg, .bmp, .png, .tga: ";
    cin >> filename;
    image.saveImage(filename);
    system(filename.c_str());
}

void GrayscaleConversion(Image image){
    for (int i = 0; i < image.width; ++i) {
        for (int j = 0; j < image.height; ++j) {
            unsigned  int avg = 0;

            for (int k = 0; k < 3; ++k) {
                avg += image(i, j, k);
            }

            avg /= 3;

            image(i, j, 0) = avg;
            image(i, j, 1) = avg;
            image(i, j, 2) = avg;
        }
    }
    int user_choice ;
    cout << "1 - save new image "<< endl << "2 - use another filter "<< endl << "please enter a choice ";
    cin >> user_choice ;
    if (user_choice == 1)
    {
        saveimage(image);
    }else if (user_choice == 2)
    {
        menu(image);
    }else
    {
        while (user_choice != 1 || user_choice != 2)
        {
            cout << endl << "invalid choice --> please enter a valid choice : ";
            cin >> user_choice ;
        }
        if (user_choice == 1)
            {
                saveimage(image);
            }else if (user_choice == 2)
            {
               menu(image); 
            }
        
    }

}

void MergeImages(Image image){
    string filename2;
    cout << "Pls enter the second photo: ";
    cin >> filename2;

    Image image2(filename2);
    int width;
    int height;

    if(image.width < image2.width || image.height < image2.height){
        width = image2.width;
        height = image2.height;
    } else{
        width = image.width;
        height = image.height;
    }
    Image merged(width, height);

    for (int i = 0; i < width; ++i) {
        for (int j = 0; j < height; ++j) {
            for(int l = 0; l < 3; l++){
                float pixelValue = 0.5 * image(min(i, image.width - 1), min(j, image.height - 1), l) +
                                   0.5 * image2(min(i, image2.width - 1), min(j, image2.height - 1), l);
                merged(i, j, l) = static_cast<unsigned char>(pixelValue);
            }
        }
    }
    int user_choice ;
    cout << "1 - save new image "<< endl << "2 - use another filter "<< endl << "please enter a choice ";
    cin >> user_choice ;
    if (user_choice == 1)
    {
        saveimage(merged);
    }else if (user_choice == 2)
    {
        menu(merged);
    }else
    {
        while (user_choice != 1 || user_choice != 2)
        {
            cout << endl << "invalid choice --> please enter a valid choice : ";
            cin >> user_choice ;
        }
        if (user_choice == 1)
            {
                saveimage(merged);
            }else if (user_choice == 2)
            {
               menu(merged); 
            }
        
    }
}

void blackWhite(Image image){
    for (int i = 0; i < image.width; ++i)
    {
        for (int j = 0; j < image.height; ++j)
        {
            if (((image(i , j , 0) + image(i , j , 1) + image(i , j ,2))/3) > 127)
            {
                image(i , j , 0) = image(i , j , 1) = image(i , j , 2) = 255 ;
            }else{
                image(i , j , 0) = image(i , j , 1) = image(i , j , 2) = 0 ;
                }
            
        }
        
    }
    int user_choice ;
    cout << "1 - save new image "<< endl << "2 - use another filter "<< endl << "please enter a choice ";
    cin >> user_choice ;
    if (user_choice == 1)
    {
        saveimage(image);
    }else if (user_choice == 2)
    {
        menu(image);
    }else
    {
        while (user_choice != 1 || user_choice != 2)
        {
            cout << endl << "invalid choice --> please enter a valid choice : ";
            cin >> user_choice ;
        }
        if (user_choice == 1)
            {
                saveimage(image);
            }else if (user_choice == 2)
            {
               menu(image); 
            }
        
    }

}

void inverter(Image image){
    for (int i = 0; i < image.width; ++i) {
        for (int j = 0; j < image.height; ++j) {
            image(i, j, 0) = 255 - (image(i, j, 0));
            image(i, j, 1) = 255 - image(i, j, 1);
            image(i, j, 2) = 255 - image(i, j, 2);
        }
    }
    int user_choice ;
    cout << "1 - save new image "<< endl << "2 - use another filter "<< endl << "please enter a choice ";
    cin >> user_choice ;
    if (user_choice == 1)
    {
        saveimage(image);
    }else if (user_choice == 2)
    {
        menu(image);
    }else
    {
        while (user_choice != 1 || user_choice != 2)
        {
            cout << endl << "invalid choice --> please enter a valid choice : ";
            cin >> user_choice ;
        }
        if (user_choice == 1)
            {
                saveimage(image);
            }else if (user_choice == 2)
            {
               menu(image); 
            }
        
    }
}

void flip(Image image){
    string direction ;
    string low = "";
    cout << endl << "enter the flip direction(vertical or horizontal): ";
    cin >> direction ;
    for (int m = 0; m < direction.length() ; ++m)
    {
        low += tolower(direction[m]);
    }
    
    Image image2(image.width, image.height);
    if (low == "vertical")
    {
        for (int q = 0; q < image.width; ++q)
        {
            for (int r = 0; r < image.height ; ++r)
            {    
                image2(q , r , 0) = image(q , image.height - r - 1, 0);
                image2(q , r , 1) = image(q , image.height - r - 1, 1);
                image2(q , r , 2) = image(q , image.height - r - 1, 2);
            }
            
        }
    }
    else if(low == "horizontal")
    {
        for (int i = 0; i < image.width; ++i)
        {
            for (int j = 0 ; j < image.height; ++j)
            {    
                image2(i , j , 0) = image(image.width - i , j , 0);
                image2(i , j , 1) = image(image.width - i , j , 1);
                image2(i , j , 2) = image(image.width - i , j , 2);
            }
            
        }
    }
    int user_choice ;
    cout << "1 - save new image "<< endl << "2 - use another filter "<< endl << "please enter a choice ";
    cin >> user_choice ;
    if (user_choice == 1)
    {
        saveimage(image2);
    }else if (user_choice == 2)
    {
        menu(image2);
    }else
    {
        while (user_choice != 1 || user_choice != 2)
        {
            cout << endl << "invalid choice --> please enter a valid choice : ";
            cin >> user_choice ;
        }
        if (user_choice == 1)
            {
                saveimage(image2);
            }else if (user_choice == 2)
            {
               menu(image2); 
            }
        
    }
}

void crop(Image image){
    int x , y , newWidth , newHeight;
    cout << endl << "enter starting point of x axis: ";
    cin >> x ;
    cout << endl << "enter starting point of y axis: ";
    cin >> y ;
    cout << endl << "enter the width of the cropped image: ";
    cin >> newWidth ;
    cout << endl << "enter the height of the cropped image: " ;
    cin >> newHeight ;

    Image image2(newWidth , newHeight);
    while (x > image.width || y > image.height || newWidth > image.width || newHeight > image.height || newWidth > (image.width - x) || newHeight > (image.height - y))
    {
        cout << "original width = "<< image.width << " and original height = "<< image.height << endl ;
        cout << "invalid inputs --> you must have exceeded the original lenght or original height"<< endl ;
        cout << endl << "enter starting point of x axis: ";
        cin >> x ;
        cout << endl << "enter starting point of y axis: ";
        cin >> y ;
        cout << endl << "enter the width of the cropped image: ";
        cin >> newWidth ;
        cout << endl << "enter the height of the cropped image: " ;
        cin >> newHeight ;
    }
    

    for (int i = 0; i < newWidth; ++i)
    {
        for (int j = 0; j < newHeight; ++j)
        {
                int originalWidth = x + i ;
                int originalHeight = y + j ;
                image2(i , j , 0) = image(originalWidth , originalHeight , 0) ;
                image2(i , j , 1) = image(originalWidth , originalHeight , 1) ;
                image2(i , j , 2) = image(originalWidth , originalHeight , 2) ;
        }
        
    }
    
    int user_choice ;
    cout << "1 - save new image "<< endl << "2 - use another filter "<< endl << "please enter a choice ";
    cin >> user_choice ;
    if (user_choice == 1)
    {
        saveimage(image2);
    }else if (user_choice == 2)
    {
        menu(image2);
    }else
    {
        while (user_choice != 1 || user_choice != 2)
        {
            cout << endl << "invalid choice --> please enter a valid choice : ";
            cin >> user_choice ;
        }
        if (user_choice == 1)
            {
                saveimage(image2);
            }else if (user_choice == 2)
            {
               menu(image2); 
            }
        
    }
}

void rotate_of_90(Image image) {
    Image rotated_image(image.height, image.width);
    for (int i = 0; i < image.width; ++i) {
        for (int j = 0; j < image.height; ++j) {
            int newi = image.height - 1 - j;
            int newj = i;
            rotated_image(newi, newj, 0) = image(i, j, 0);
            rotated_image(newi, newj, 1) = image(i, j, 1);
            rotated_image(newi, newj, 2) = image(i, j, 2);
        }
    }
    int user_choice ;
    cout << "1 - save new image "<< endl << "2 - use another filter "<< endl << "please enter a choice ";
    cin >> user_choice ;
    if (user_choice == 1)
    {
        saveimage(rotated_image);
    }else if (user_choice == 2)
    {
        menu(rotated_image);
    }else
    {
        while (user_choice != 1 && user_choice != 2)
        {
            cout << endl << "invalid choice --> please enter a valid choice : ";
            cin >> user_choice ;
        }
        if (user_choice == 1)
        {
            saveimage(rotated_image);
        }else if (user_choice == 2)
        {
            menu(rotated_image); 
        }
    }
}

void rotate_of_180(Image image) {
    Image rotated_image(image.width, image.height);
    for (int i = 0; i < image.width; ++i) {
        for (int j = 0; j < image.height; ++j) {
            int newi = image.width - 1 - i;
            int newj = image.height - 1 - j;
            rotated_image(newi, newj, 0) = image(i, j, 0);
            rotated_image(newi, newj, 1) = image(i, j, 1);
            rotated_image(newi, newj, 2) = image(i, j, 2);
        }
    }
    int user_choice ;
    cout << "1 - save new image "<< endl << "2 - use another filter "<< endl << "please enter a choice ";
    cin >> user_choice ;
    if (user_choice == 1)
    {
        saveimage(rotated_image);
    }else if (user_choice == 2)
    {
        menu(rotated_image);
    }else
    {
        while (user_choice != 1 && user_choice != 2)
        {
            cout << endl << "invalid choice --> please enter a valid choice : ";
            cin >> user_choice ;
        }
        if (user_choice == 1)
        {
            saveimage(rotated_image);
        }else if (user_choice == 2)
        {
            menu(rotated_image); 
        }
    }
}

void rotate_of_270(Image image) {
    Image rotated_image(image.height, image.width);
    for (int i = 0; i < image.width; ++i) {
        for (int j = 0; j < image.height; ++j) {
            int newi = j;
            int newj = image.width - 1 - i;
            rotated_image(newi, newj, 0) = image(i, j, 0);
            rotated_image(newi, newj, 1) = image(i, j, 1);
            rotated_image(newi, newj, 2) = image(i, j, 2);
        }
    }
    int user_choice ;
    cout << "1 - save new image "<< endl << "2 - use another filter "<< endl << "please enter a choice ";
    cin >> user_choice ;
    if (user_choice == 1)
    {
        saveimage(rotated_image);
    }else if (user_choice == 2)
    {
        menu(rotated_image);
    }else
    {
        while (user_choice != 1 && user_choice != 2)
        {
            cout << endl << "invalid choice --> please enter a valid choice : ";
            cin >> user_choice ;
        }
        if (user_choice == 1)
        {
            saveimage(rotated_image);
        }else if (user_choice == 2)
        {
            menu(rotated_image); 
        }   
    }
}

void rotateMenu(Image image){
    string degree;
    cout << "enter the degree you want to rotate: ";
    cin >> degree;
    while(degree!="90" && degree !="180" && degree!="270") {
        cout << "please enter a valid degree => 90 or 180 or 270 : ";
        cin >> degree;
        if (degree == "90" || degree == "180" || degree == "270")
            break;
    }
    if(degree=="90")
        rotate_of_90(image);
    else if (degree=="180")
        rotate_of_180(image);
    else if(degree=="270")
        rotate_of_270(image);

}

void DarkenAndLighten(Image image){
    string choice;
    cout<<"Do you want the image to be dark or light: ";
    cin >> choice;

    if (choice == "dark" || choice == "light") {
        for (int i = 0; i < image.width; ++i) {
            for (int j = 0; j < image.height; ++j) {
                for (int k = 0; k < 3; ++k) {
                    int v = image(i, j, k);
                    int NewValue;
                    if (choice == "dark") {
                        NewValue = v - 0.5 * v;
                    } else {
                        NewValue = v + 0.5 * v;
                    }
                    NewValue = min(NewValue, 255);
                    image(i, j, k) = NewValue;
                }
            }
        }
    } else {
        cout << "Pls enter 'light' or 'dark'." << endl;
    }

    int user_choice ;
    cout << "1 - save new image "<< endl << "2 - use another filter "<< endl << "please enter a choice ";
    cin >> user_choice ;
    if (user_choice == 1)
    {
        saveimage(image);
    }else if (user_choice == 2)
    {
        menu(image);
    }else
    {
        while (user_choice != 1 || user_choice != 2)
        {
            cout << endl << "invalid choice --> please enter a valid choice : ";
            cin >> user_choice ;
        }
        if (user_choice == 1)
            {
                saveimage(image);
            }else if (user_choice == 2)
            {
               menu(image); 
            }
        
    }
}

void frame(Image image){
    float thickness;
    cout <<"enter the thickness of the frame : ";
    cin >> thickness;


    for (int i = 0; i < image.width; ++i) {
        for (int j = 0; j < thickness; ++j) {
            image(i, j, 0) = 0;
            image(i, j, 1) = 0;
            image(i, j, 2) = 200;
        }
    }
    for (int i = 0; i < image.width; ++i) {
        for (int j = thickness; j < thickness + thickness / 1.5; ++j) {
            image(i, j, 0) = 100;
            image(i, j, 1) = 100;
            image(i, j, 2) = 100;
        }
    }
    for (int i = 0; i < image.width; ++i) {
        for (int j = thickness; j < thickness+thickness/1.5; ++j) {
            image(i, j, 0) = 100;
            image(i, j, 1) = 100;
            image(i, j, 2) = 100;
        }
    }
    for (int i = 0; i < image.width; ++i) 
    {
        for (int j = image.height - thickness; j < image.height; ++j) 
        {
            image(i, j, 0) = 0;
            image(i, j, 1) = 0;
            image(i, j, 2) = 200;
        }
    }
    for (int i = 0; i < image.width; ++i) 
    {
        for (int j = image.height - (thickness + thickness / 1.5); j < image.height - thickness / 1.5; ++j) 
        {
            image(i, j, 0) = 100;
            image(i, j, 1) = 100;
            image(i, j, 2) = 100;
        }
    }
     for (int i = 0; i < image.width; ++i) {
         for (int j = image.height-(thickness+thickness/1.5); j < thickness/1.5; ++j) {
            image(i, j, 0) = 100;
            image(i, j, 1) = 100;
            image(i, j, 2) = 100;
        }
    }
    for (int i = 0; i < thickness; ++i) {
        for (int j = 0; j < image.height; ++j) {
            image(i, j, 0) = 0;
            image(i, j, 1) = 0;
            image(i, j, 2) = 200;
        }
    }
    for (int i = thickness; i < thickness + thickness / 1.5; ++i) 
    {
        for (int j = thickness; j < image.height-thickness; ++j) 
        {
            image(i, j, 0) = 100;
            image(i, j, 1) = 100;
            image(i, j, 2) = 100;
        }
    }
    for (int i = image.width - thickness; i < image.width; ++i) 
    {
        for (int j = 0; j < image.height; ++j) {
            image(i, j, 0) = 0;
            image(i, j, 1) = 0;
            image(i, j, 2) = 200;
        }
    }
    for (int i = image.width - (thickness + thickness / 1.5); i < image.width - thickness / 1.5; ++i) 
    {
        for (int j = thickness; j < image.height-thickness; ++j)
        {
            image(i, j, 0) = 100;
            image(i, j, 1) = 100;
            image(i, j, 2) = 100;
        }
    }
    int user_choice ;
    cout << "1 - save new image "<< endl << "2 - use another filter "<< endl << "please enter a choice ";
    cin >> user_choice ;
    if (user_choice == 1)
    {
        saveimage(image);
    }else if (user_choice == 2)
    {
        menu(image);
    }else
    {
        while (user_choice != 1 && user_choice != 2)
        {
            cout << endl << "invalid choice --> please enter a valid choice : ";
            cin >> user_choice ;
        }
        if (user_choice == 1)
        {
            saveimage(image);
        }else if (user_choice == 2)
        {
            menu(image); 
        }
    }
}

void DetectImageEdges(Image image){
    Image output(image.width, image.height);

    int laplacian[3][3] = {{0, 1, 0},
                           {1, -4, 1},
                           {0, 1, 0}};
    double threshold = 80;

    for (int y = 1; y < image.height - 1; y++) {
        for (int x = 1; x < image.width - 1; x++) {
            double sum_laplacian = 0;

            for (int i = -1; i <= 1; i++) {
                for (int j = -1; j <= 1; j++) {
                    for (int c = 0; c < image.channels; c++) {
                        sum_laplacian += image.getPixel(x + j, y + i, c) * laplacian[i + 1][j + 1];
                    }
                }
            }

            if (sum_laplacian > threshold) {
                for (int c = 0; c < output.channels; c++) {
                    output.setPixel(x, y, c, 0);
                }
            } else {
                for (int c = 0; c < output.channels; c++) {
                    output.setPixel(x, y, c, 255);
                }
            }
        }
    }

    int user_choice ;
    cout << "1 - save new image "<< endl << "2 - use another filter "<< endl << "please enter a choice ";
    cin >> user_choice ;
    if (user_choice == 1)
    {
        saveimage(output);
    }else if (user_choice == 2)
    {
        menu(output);
    }else
    {
        while (user_choice != 1 || user_choice != 2)
        {
            cout << endl << "invalid choice --> please enter a valid choice : ";
            cin >> user_choice ;
        }
        if (user_choice == 1)
            {
                saveimage(output);
            }else if (user_choice == 2)
            {
               menu(output); 
            }
        
    }
}

void resize(Image image){
    int newWidth , newHeight ; 
    cout << "enter the new width : ";
    cin >> newWidth ;
    cout << "enter the new height : ";
    cin >> newHeight ;
    Image image2(newWidth, newHeight);
    double scaleWidth = image.width / newWidth ;
    double scaleHeight = image.height / newHeight ;
    for (int i = 0; i < newWidth; i++)
    {
        for (int j = 0; j < newHeight; j++)
        {
            image2(i , j , 0) = round(image(i * scaleWidth , j * scaleHeight , 0));
            image2(i , j , 1) = round(image(i * scaleWidth , j * scaleHeight , 1));
            image2(i , j , 2) = round(image(i * scaleWidth , j * scaleHeight , 2));
        }
    }
    int user_choice ;
    cout << "1 - save new image "<< endl << "2 - use another filter "<< endl << "please enter a choice ";
    cin >> user_choice ;
    if (user_choice == 1)
    {
        saveimage(image2);
    }else if (user_choice == 2)
    {
        menu(image2);
    }else
    {
        while (user_choice != 1 || user_choice != 2)
        {
            cout << endl << "invalid choice --> please enter a valid choice : ";
            cin >> user_choice ;
        }
        if (user_choice == 1)
            {
                saveimage(image2);
            }else if (user_choice == 2)
            {
               menu(image2); 
            }
        
    }
}

void naturalSunlight(Image image){
    Image image2(image.width , image.height);
    for (int i = 0; i < image.width; i++)
    {
        for (int j = 0; j < image.height; j++)
        {
            image2(i , j , 0) = image(i , j , 0);
            image2(i , j , 1) = image(i , j , 1);
            image2(i , j , 2) = image(i , j , 2) * 0.6; 
        }
    }
    int user_choice ;
    cout << "1 - save new image "<< endl << "2 - use another filter "<< endl << "please enter a choice ";
    cin >> user_choice ;
    if (user_choice == 1)
    {
        saveimage(image2);
    }else if (user_choice == 2)
    {
        menu(image2);
    }else
    {
        while (user_choice != 1 && user_choice != 2)
        {
            cout << endl << "invalid choice --> please enter a valid choice : ";
            cin >> user_choice ;
        }
        if (user_choice == 1)
            {
                saveimage(image2);
            }else if (user_choice == 2)
            {
                menu(image2); 
            }
        
    }
}

void infraredmode(Image image){
    for (int i = 0; i < image.width; ++i) {
        for (int j = 0; j < image.height; ++j) {
            image(i, j, 1) = 255 - image(i, j, 1);
            image(i, j, 2) = 255 - image(i, j, 2);
        }
    }
    for (int i = 0; i < image.width; ++i) {
        for (int j = 0; j < image.height; ++j) {
                image(i, j , 0) = 255 ;
        }
    }
    int user_choice ;
    cout << "1 - save new image "<< endl << "2 - use another filter "<< endl << "please enter a choice ";
    cin >> user_choice ;
    if (user_choice == 1)
    {
        saveimage(image);
    }else if (user_choice == 2)
    {
        menu(image);
    }else
    {
        while (user_choice != 1 && user_choice != 2)
        {
            cout << endl << "invalid choice --> please enter a valid choice : ";
            cin >> user_choice ;
        }
        if (user_choice == 1)
            {
                saveimage(image);
            }else if (user_choice == 2)
            {
               menu(image); 
            }
        
    }
}

void violetMode(Image image){
    Image image2(image.width , image.height);
    for (int i = 0; i < image.width; i++)
    {
        for (int j = 0; j < image.height; j++)
        {
            image2(i , j , 0) = image(i , j , 0);
            image2(i , j , 1) = image(i , j , 1) * 0.67;
            image2(i , j , 2) = image(i , j , 2); 
        }
    }
    int user_choice ;
    cout << "1 - save new image "<< endl << "2 - use another filter "<< endl << "please enter a choice ";
    cin >> user_choice ;
    if (user_choice == 1)
    {
        saveimage(image2);
    }else if (user_choice == 2)
    {
        menu(image2);
    }else
    {
        while (user_choice != 1 && user_choice != 2)
        {
            cout << endl << "invalid choice --> please enter a valid choice : ";
            cin >> user_choice ;
        }
        if (user_choice == 1)
            {
                saveimage(image2);
            }else if (user_choice == 2)
            {
                menu(image2); 
            }
        
    }
}

void saturation(Image image){
    for (int x = 0; x < image.width; x++) {
        for (int y = 0; y < image.height; y++) {
            for(int c =0 ; c<image.channels; c++) {
                double r = image.getPixel(x, y, 0);
                double g = image.getPixel(x, y, 1);
                double b = image.getPixel(x, y, 2);
                double lum = 0.2 * r + 0.7 * g + 0.07 * b;
                image(x, y, c) = min(255.0, lum + 0.5 * (r - lum));
            }
        }
    }
    int user_choice ;
    cout << "1 - save new image "<< endl << "2 - use another filter "<< endl << "please enter a choice ";
    cin >> user_choice ;
    if (user_choice == 1)
    {
        saveimage(image);
    }else if (user_choice == 2)
    {
        menu(image);
    }else
    {
        while (user_choice != 1 && user_choice != 2)
        {
            cout << endl << "invalid choice --> please enter a valid choice : ";
            cin >> user_choice ;
        }
        if (user_choice == 1)
        {
            saveimage(image);
        }else if (user_choice == 2)
        {
            menu(image); 
        }
    }
}

void ColorGrading(Image image){
    const int brightness = 30;
    const double contrast = 1.2;
    for (int x = 0; x < image.width; x++) {
        for (int y = 0; y < image.height; y++) {
            for(int c =0 ; c<image.channels; c++) {
                image(x, y, c) = min(255, max(0, image(x, y, c) + brightness));
                image(x, y, c) = min(255, (int) ((image(x, y, c) - 128) * contrast) + 128);

            }
        }
    }
    int user_choice ;
    cout << "1 - save new image "<< endl << "2 - use another filter "<< endl << "please enter a choice ";
    cin >> user_choice ;
    if (user_choice == 1)
    {
        saveimage(image);
    }else if (user_choice == 2)
    {
        menu(image);
    }else
    {
        while (user_choice != 1 && user_choice != 2)
        {
            cout << endl << "invalid choice --> please enter a valid choice : ";
            cin >> user_choice ;
        }
        if (user_choice == 1)
        {
            saveimage(image);
        }else if (user_choice == 2)
        {
            menu(image); 
        }
    }   
}

void blur(Image image){
    int radius;
    cout << "enter the radius: ";
    cin >> radius;
    Image newimage(image.width, image.height);
    for (int i = 0; i < image.width; ++i) {
        for (int j = 0; j < image.height; ++j) {
            int sumR=0, sumG=0, sumB=0;
            int counter = 0;

            for (int x=i-(radius/2); x<=i+(radius/2); ++x) {
                for (int y=j-(radius/2); y<=j+(radius/2); ++y) {
                    if (x>=0 && x<image.width && y>=0 && y<image.height) {
                        sumR += image(x, y, 0);
                        sumG += image(x, y, 1);
                        sumB += image(x, y, 2);
                        counter++;
                    }
                }
            }

            int avgR , avgG , avgB;
            avgR = sumR/counter;
            avgG = sumG/counter;
            avgB = sumB/counter;

            newimage(i, j, 0) = avgR;
            newimage(i, j, 1) = avgG;
            newimage(i, j, 2) = avgB;
        }
    }
    int user_choice ;
    cout << "1 - save new image "<< endl << "2 - use another filter "<< endl << "please enter a choice ";
    cin >> user_choice ;
    if (user_choice == 1)
    {
        saveimage(newimage);
    }else if (user_choice == 2)
    {
        menu(newimage);
    }else
    {
        while (user_choice != 1 && user_choice != 2)
        {
            cout << endl << "invalid choice --> please enter a valid choice : ";
            cin >> user_choice ;
        }
        if (user_choice == 1)
        {
            saveimage(newimage);
        }else if (user_choice == 2)
        {
            menu(newimage); 
        }
    }
}

void tv(Image image){
    for (int j = 0; j < image.height; ++j) 
    {
        if(j%2==0)
        {
            for (int i = 0; i < image.width; ++i) 
            {
                image(i, j, 0) = 53;
                image(i, j, 1) = 57;
                image(i, j, 2) = 53;
            }
        }
    }

    for (int j = 0; j < image.height; ++j) {
        if(j%2==0){
            for (int i = 0; i < image.width; ++i) {
                image(i, j, 0)+=25;
                image(i, j, 1)+=25;
                image(i, j, 2)+=25;
            }
        }
        else{
            for (int i = 0; i < image.width; ++i) {
                image(i, j, 0)-=25;
                image(i, j, 1)-=25;
                image(i, j, 2)-=25;
            }
        }
    }
    
    int user_choice ;
    cout << "1 - save new image "<< endl << "2 - use another filter "<< endl << "please enter a choice ";
    cin >> user_choice ;
    if (user_choice == 1)
    {
        saveimage(image);
    }else if (user_choice == 2)
    {
        menu(image);
    }else
    {
        while (user_choice != 1 && user_choice != 2)
        {
            cout << endl << "invalid choice --> please enter a valid choice : ";
            cin >> user_choice ;
        }
        if (user_choice == 1)
        {
            saveimage(image);
        }else if (user_choice == 2)
        {
            menu(image); 
        }
    }
}

void skew(Image image){
    int skewval;
    cout << "Enter the skew value in degrees: ";
    cin >> skewval;
    double radianAngle = (skewval * M_PI) / 180;
    double shrinkingVal = (image.width * image.width) / (image.width + (image.height / tan(radianAngle)));
    double step = image.width - shrinkingVal;
    double move = step / image.width;
    //resized the image
    Image image2(image.width , image.height);
    double scaleWidth = image.width / shrinkingVal ;
    for (int i = 0; i < shrinkingVal; i++)
    {
        for (int j = 0; j < image.height; j++)
        {
            image2(i , j , 0) = round(image(i * scaleWidth , j  , 0));
            image2(i , j , 1) = round(image(i * scaleWidth , j  , 1));
            image2(i , j , 2) = round(image(i * scaleWidth , j  , 2));
        }
    }
    

    
    Image image3(image2.width, image2.height);

    for (int m = 0; m < image3.width; ++m) {
        for (int n = 0; n < image3.height; ++n) {
            int newWidth =  m + int(n * move); 
            if (newWidth >= 0 && newWidth < image3.width) {
                for (int c = 0; c < 3; ++c) {
                    image3(newWidth, n, c) = image2(m, n, c);
                }
            }
        }
    }

    Image rotated_image(image3.height, image3.width);
    for (int i = 0; i < image3.width; ++i) {
        for (int j = 0; j < image3.height; ++j) {
            int newi = image3.height - 1 - j;
            int newj = i;
            rotated_image(newi, newj, 0) = image3(i, j, 0);
            rotated_image(newi, newj, 1) = image3(i, j, 1);
            rotated_image(newi, newj, 2) = image3(i, j, 2);
        }
    }
    
    int user_choice ;
    cout << "1 - save new image "<< endl << "2 - use another filter "<< endl << "please enter a choice ";
    cin >> user_choice ;
    if (user_choice == 1)
    {
        saveimage(rotated_image);
    }else if (user_choice == 2)
    {
        menu(rotated_image);
    }else
    {
        while (user_choice != 1 && user_choice != 2)
        {
            cout << endl << "invalid choice --> please enter a valid choice : ";
            cin >> user_choice ;
        }
        if (user_choice == 1)
        {
            saveimage(rotated_image);
        }else if (user_choice == 2)
        {
            menu(rotated_image); 
        }
    }
}

void menu(Image image){
    int user_choice ;
    do
    {
        cout << "what filter do you want to perform: " << endl;
        cout << "1- gray scale converter" << endl << "2- black and white processing" << endl << "3- inverter" << endl;
        cout << "4- merge images" << endl << "5- flip images" << endl << "6- rotate image filter" << endl;
        cout << "7- darken and lighten processing" << endl << "8- crop image"<< endl << "9- add frame to the picture" << endl;
        cout << "10- detect image edges" << endl << "11- resizing images" << endl << "12- bluring filter" << endl <<"13- natural sunlight" << endl << "14- infrared mode" << endl; ;
        cout << "15- violet mode" << endl << "16- saturation filter" << endl << "17- color grading filter"<< endl << "18- oil painting filter" << endl  << "19- tv effect filter" << endl << "20- skew image" << endl << "21- exit the program" << endl ;
        cout << "enter the number that represents the filter you want: ";
        cin >> user_choice ;
        if (user_choice == 1)
        {
            GrayscaleConversion(image);
        }else if (user_choice == 2)
        {
            blackWhite(image);
        }else if (user_choice == 3)
        {
            inverter(image);
        }else if (user_choice == 4)
        {
            MergeImages(image);
        }else if (user_choice == 5)
        {
            flip(image);
        }else if (user_choice == 6)
        {
            rotateMenu(image);
        }else if (user_choice == 7)
        {
            DarkenAndLighten(image);
        }else if (user_choice == 8)
        {
            crop(image);
        }else if (user_choice == 9)
        {
            frame(image);
        }else if (user_choice == 10)
        {
            DetectImageEdges(image);
        }else if (user_choice == 11)
        {
            resize(image);
        }else if (user_choice == 12)
        {
            blur(image);
        }else if (user_choice == 13)
        {
            naturalSunlight(image);
        }else if (user_choice == 14)
        {
            infraredmode(image);
        }else if (user_choice == 15)
        {
            violetMode(image);
        }else if (user_choice == 16)
        {
            saturation(image);
        }else if (user_choice == 17)
        {
            ColorGrading(image);
        }else if (user_choice == 18)
        {
            oilPaintedpic(image);
        }else if (user_choice == 19)
        {
            tv(image);
        }else if (user_choice == 20)
        {
            skew(image);
        }else if (user_choice == 21)
        {
            break;
        }
        
        else
        {
            while (user_choice > 21 || user_choice < 1)
            {
                cout << "invalid input --> please enter a valid choice: ";
                cin >> user_choice ;
            }
            if (user_choice == 1)
            {
                GrayscaleConversion(image);
            }else if (user_choice == 2)
            {
                blackWhite(image);
            }else if (user_choice == 3)
            {
                inverter(image);
            }else if (user_choice == 4)
            {
                MergeImages(image);
            }else if (user_choice == 5)
            {
                flip(image);
            }else if (user_choice == 6)
            {
                rotateMenu(image);
            }else if (user_choice == 7)
            {
                DarkenAndLighten(image);
            }else if (user_choice == 8)
            {
                crop(image);
            }else if (user_choice == 9)
            {
                frame(image);
            }else if (user_choice == 10)
            {
                DetectImageEdges(image);
            }else if (user_choice == 11)
            {
                resize(image);
            }else if (user_choice == 12)
            {
                blur(image);
            }else if (user_choice == 13)
            {
                naturalSunlight(image);
            }else if (user_choice == 14)
            {
                infraredmode(image);
            }else if (user_choice == 15)
            {
                violetMode(image);
            }else if (user_choice == 16)
            {
                saturation(image);
            }else if (user_choice == 17)
            {
                ColorGrading(image);
            }else if (user_choice == 18)
            {
                oilPaintedpic(image);
            }else if (user_choice == 19)
            {
                tv(image);
            }else if (user_choice == 20)
            {
                skew(image);
            }else if (user_choice == 21)
            {
                break ;
            }
            
        }
    }while(user_choice != 21);  
}

int main() {
    int user_choice;
    cout <<"1- want a filter" << endl << "2- exit" << endl << "enter a valid choice: ";
    cin >> user_choice;
    if (user_choice >= 2)
    {
        return 0;
    }        
    do
    {
        string filename ;
        cout << "enter the name of the image with its extension ex.(imgname.ext): ";
        cin >> filename;
        Image image(filename);
        menu(image);
    } while (user_choice == 1);
    return 0;
}
