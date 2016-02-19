#pragma once
#include "cvc4_private.h"
#include "expr/node.h"
#include "prop/cnf_stream.h"
#include <ostream>
#include <cmath>

namespace CVC4 {
namespace theory {
namespace booleans {
using namespace prop;
  SatLiteral defaultSpecial(TNode node, TNode orig, CVC4::prop::TseitinCnfStream* cnf);
}/* boolean */
}/* theory */
}/* CVC4 */
