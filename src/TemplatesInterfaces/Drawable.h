//
// Created by Wiktor Sienkiewicz on 19/05/2025.
//

#pragma once


//Pure virtual function
class Drawable {
public:
    virtual void draw() const = 0;
    virtual ~Drawable() = default;
};
