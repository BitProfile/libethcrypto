#pragma once 

#include "GenericSignatureSerializer.hpp"
#include "../../encoding/Base16Encoder.hpp"

namespace Ethereum{


typedef GenericSignatureSerializer<Base16Encoder> Base16SignatureSerializer;


}