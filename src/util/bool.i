%{
#include "util/bool.h"
%}

%rename(apply) CVC4::BoolHashFunction::operator()(bool) const;
%rename(equals) CVC4::SpecialBool::operator==(const SpecialBool&) const;
%rename(apply) CVC4::SpecialBoolHashFunction::operator()(const SpecialBool&) const;
%ignore CVC4::operator<<(std::ostream&, const SpecialBool&);



%include "util/bool.h"
