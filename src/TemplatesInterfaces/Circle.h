//
// Created by Wiktor Sienkiewicz on 19/05/2025.
//

#pragma once
#include "Drawable.h"


class Circle : public Drawable {
public:
    Circle(float radius);

    void draw() const override;

private:
    float radius;
};
