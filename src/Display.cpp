#include "Display.hpp"

Rectangle::Rectangle (mInt cx, mInt cy, mInt ch, mInt cl, uint16_t cColor, TFT_ILI9163C& Display_) :  
    x(cx), y(cy), h(ch), l(cl), color(cColor), display(Display_) {} //construtor da classe

void Rectangle::setPosition(mInt x_, mInt y_){
    this->x = x_;
    this->y = y_;
    }

void Rectangle::setColor(mInt color_){
    this->color = color_;
    }

void Rectangle::fillColor(mInt color_){
    setColor(color_);
    this->display.fillRect(this->x,this->y,this->l,this->h,this->color);
    }
void Rectangle::fillColor(){
    this->display.fillRect(this->x,this->y,this->l,this->h,this->color);
}