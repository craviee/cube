#include "utils.h"

std::string Utils::face2str(Face face)
{
    switch (face)
    {
        case Face::UP: return "up";
        case Face::DOWN: return "down";
        case Face::FRONT: return "front";
        case Face::BACK: return "back";
        case Face::LEFT: return "left";
        case Face::RIGHT: return "right";
        default: return "error";
    }
}

std::string Utils::color2str(Color color)
{
    switch (color)
    {
        case Color::RED: return "Red";
        case Color::BLUE: return "Blue";
        case Color::GREEN: return "Green";
        case Color::ORANGE: return "Orange";
        case Color::WHITE: return "White";
        case Color::YELLOW: return "Yellow";
        default: return "Error";
    }
}

void Utils::delay(int millisecondsToWait)
{
    QTime dieTime = QTime::currentTime().addMSecs( millisecondsToWait );
    while( QTime::currentTime() < dieTime )
    {
        QCoreApplication::processEvents( QEventLoop::AllEvents, 100 );
    }
}

Color Utils::getColor(QPushButton *button)
{
    if(button->styleSheet() == "background-color: blue"){
        return Color::BLUE;
    }else if(button->styleSheet() == "background-color: white"){
        return Color::WHITE;
    }else if(button->styleSheet() == "background-color: orange"){
        return Color::ORANGE;
    }else if(button->styleSheet() == "background-color: red"){
        return Color::RED;
    }else if(button->styleSheet() == "background-color: green"){
        return Color::GREEN;
    }else if(button->styleSheet() == "background-color: yellow"){
        return Color::YELLOW;
    }else{
        return Color::ERROR;
    }
}

void Utils::setColor(Color color, QPushButton *button)
{
    switch (color) {
    case Color::BLUE:
        button->setStyleSheet("background-color: blue");
        break;
    case Color::WHITE:
        button->setStyleSheet("background-color: white");
        break;
    case Color::ORANGE:
        button->setStyleSheet("background-color: orange");
        break;
    case Color::RED:
        button->setStyleSheet("background-color: red");
        break;
    case Color::GREEN:
        button->setStyleSheet("background-color: green");
        break;
    case Color::YELLOW:
        button->setStyleSheet("background-color: yellow");
        break;
    default:
        button->setStyleSheet("background-color: gray");
        break;
    }
}