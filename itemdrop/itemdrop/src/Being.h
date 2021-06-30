#pragma once
#include "Types.h"

class Being
{
public:
    Being(numeric_value h, numeric_value m):max_hp(h),max_mp(m),hp(h),mp(m)
    {

    }
    void hurt(numeric_value atk)
    {
        hp -= atk;
    }
    void cure(numeric_value reco)
    {
        hp += reco;
    }

private:
    numeric_value max_hp;
    numeric_value max_mp;
    numeric_value hp;
    numeric_value mp;

};