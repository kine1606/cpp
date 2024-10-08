#pragma once
#include "ABO.h"

class B_type : public ABO
{
public:
    void give(ABO*) override;
    bool received(ABO*) override;
    // ~B_type();
};
