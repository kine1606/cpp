#pragma once
#include "ABO.h"

class O_type : public ABO
{
public:
    void give(ABO*) override;
    bool received(ABO*) override;
    // ~O_type();
};
