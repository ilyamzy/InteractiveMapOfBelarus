#include "belarusmap.h"

BelarusMap::BelarusMap()
{
    // Создание QLabel для отображения изображения в качестве фоновой картинки
    backgroundLabel = new QLabel();

    // Загрузка изображения из файла
    QPixmap backgroundImage("/home/ilyamzy/proj/courseWork/Pictures/Belarus.jpg"); // Путь к изображению в ресурсах

    // Установка изображения в качестве фоновой картинки
    backgroundLabel->setPixmap(backgroundImage);

    // Настройка свойств масштабирования для автоматического изменения размера изображения
    backgroundLabel->setScaledContents(true);

    // Настройка политики размеров для автоматического изменения размера QLabel
    backgroundLabel->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

}
