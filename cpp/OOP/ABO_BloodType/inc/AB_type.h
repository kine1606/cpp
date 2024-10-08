#pragma once
#include "ABO.h"

class AB_type : public ABO
{
public:
    void give(ABO*) override;
    bool received(ABO*) override;
    // ~AB_type();
};
