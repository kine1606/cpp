#pragma once
#include "MayTinh.h"
class MayTinhFly : public MayTinh
{
public:
    MayTinhFly();
    void input() override;
    void output() override;
    ~MayTinhFly();
};