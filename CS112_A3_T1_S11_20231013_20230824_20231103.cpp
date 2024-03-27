/*
assingment 3 version 6.0
authors:    ahmed mohamed ahmed --> 20231013     performed filters no. 2 , 5 , 8 , 11      section 11
            ali alnazeir ahmed --> 20230824      performed filters no. 1 , 4 , 7 , 10      section 11
            abdullah alaa --> 20231103           performed filters no. 3 , 6 , 9 , 12      section 11
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
void resize(Image image);
void inverter(Image image);
void menu(Image image);
void saveimage(Image image);



void saveimage(Image image){
    string filename ;
    cout << "Pls enter image name to store new image\n";
    cout << "and specify extension .jpg, .bmp, .png, .tga: ";
    cin >> filename;
    image.saveImage(filename);
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
    if (x > image.width || y > image.height || newWidth > image.width || newHeight > image.height)
    {
        cout << "original width = "<< image.width << "and original height = "<< image.height << endl ;
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
    for (int i = 0; i < image.width; i++)
    {
        for (int j = 0; j < image.height; j++)
        {
            image2(i , j , 0) = image(newWidth , newHeight , 0) ;
            image2(i , j , 1) = image(newWidth , newHeight , 1) ;
            image2(i , j , 2) = image(newWidth , newHeight , 2) ;
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

void menu(Image image){
    int user_choice ;
    do
    {
        cout << "what filter do you want to perform: " << endl;
        cout << "1- gray scale converter" << endl << "2- black and white processing" << endl << "3- inverter" << endl;
        cout << "4- merge images" << endl << "5- flip images" << endl ;
        cout << "7- darken and lighten processing" << endl << "8- crop image"<< endl ;
        cout << "10- detect image edges" << endl << "11- resizing images" << endl ;
        cout << "13- exit the program" << endl ;
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
        }else if (user_choice == 7)
        {
            DarkenAndLighten(image);
        }else if (user_choice == 8)
        {
            crop(image);
        }else if (user_choice == 10)
        {
            DetectImageEdges(image);
        }else if (user_choice == 11)
        {
            resize(image);
        }else if (user_choice == 13)
        {
            break;
        }
        
        else
        {
            while (user_choice != 1 || user_choice != 2 || user_choice != 3 || user_choice != 4 || user_choice != 5 || user_choice != 7 || user_choice != 8 || user_choice != 10 || user_choice != 11 || user_choice != 13)
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
            }else if (user_choice == 4)
            {
                MergeImages(image);
            }else if (user_choice == 5)
            {
                flip(image);
            }else if (user_choice == 7)
            {
                DarkenAndLighten(image);
            }else if (user_choice == 8)
            {
                crop(image);
            }else if (user_choice == 10)
            {
                DetectImageEdges(image);
            }else if (user_choice == 11)
            {
                resize(image);
            }else if (user_choice == 13)
            {
                break ;
            }
            
        }
    }while(user_choice != 13);  
}

int main() {
    int user_choice;
    cout <<"1- want a filter" << endl << "2- exit" << endl << "enter a valid choice: ";
    cin >> user_choice;
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