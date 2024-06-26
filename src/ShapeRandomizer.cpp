#include "ShapeRandomizer.hpp"
#include <random>

Display_obj* ShapeRandomizer(Adafruit_ST7735& Display){
    int Random = random(0,4);
    int RandX = random(5,122);
    int RandY = random(10,91);
    uint16_t color = random(31,66000);

    if(Random <=1 && Random <=0){
        return new Rectangle(RandX, RandY, 5, 5, color, Display);
    }
    if(Random > 1 && Random <=2){
        return new Circle(RandX, RandY, 3, color, Display);
    }
    if(Random > 2 && Random <=3){
        return new Triangle(RandX, RandY, color, Display);
    }
    if(Random > 3 && Random <=4){
        return new Heart(RandX, RandY, color, Display);
    }
};