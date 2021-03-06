#pragma once

#include "../detail/Data.hpp"
#include "detail/GenericDataEncoder.hpp"


namespace Ethereum{


struct Base58Alphabet
{
    static const size_t base;
    static const char *map;
    static const bool strip; //dirty hack, needed to be changed with a more generic approach
};



typedef GenericDataEncoder<Base58Alphabet> Base58Encoder;





}

