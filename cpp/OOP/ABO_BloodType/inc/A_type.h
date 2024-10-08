#pragma once
#include "ABO.h"

class A_type : public ABO
{
public:
    void give(ABO*) override;
    bool received(ABO*) override;
    // ~A_type();
};
