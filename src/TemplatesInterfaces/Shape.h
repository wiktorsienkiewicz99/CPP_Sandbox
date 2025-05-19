//
// Created by Wiktor Sienkiewicz on 19/05/2025.
//

#pragma once

class Shape {
    virtual void draw() const = 0;
    virtual ~Shape() = default;
};
