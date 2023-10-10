#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>

int main() {
    //introducir la tuta de acceso de la imagen
    cv::Mat image = cv::imread("C:/Users/alexa/Pictures/Tanjiro.jpg");
    //verifica que la imagen no este vacia
    if (image.empty()) {
        std::cout << "Error loading the image" << std::endl;
        return -1;
    }
    else {
        std::cout << "Image loaded successfully" << std::endl;
    }
    //muestra la imagen orifinal en una ventana de nombre "Image"
    cv::imshow("Image", image);

    //Espera hasta que se presiona alguna tecla
    cv::waitKey(0);

    // separa la imagen en diferentes canales de color
    cv::Mat bgr[3];
    cv::split(image, bgr);

    //modifica los mapas de colores de la imagen
    cv::Mat blueChannel, greenChannel, redChannel;
    cv::applyColorMap(bgr[0], blueChannel, cv::COLORMAP_JET);
    cv::applyColorMap(bgr[1], greenChannel, cv::COLORMAP_SPRING);
    cv::applyColorMap(bgr[2], redChannel, cv::COLORMAP_AUTUMN);

    // Abre la imagenes modificadas en diferentes ventanas
    cv::imshow("blueChannel", blueChannel);
    cv::imshow("greenChannel", greenChannel);
    cv::imshow("redChannel", redChannel);
    cv::waitKey(0);
}
