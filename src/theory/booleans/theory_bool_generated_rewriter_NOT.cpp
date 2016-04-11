#include "theory/booleans/theory_bool_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"
#include "options/main_options.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::booleans;
using namespace CVC4::theory::bv;

Node rewrite_19_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node[0][0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0][0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0][0]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0][2]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0][2]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0][2]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[19]++;
  return utils::mkSpecialBool(children, 19);
}
Node rewrite_19_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node[0][1]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0][1]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0][1]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0][2]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0][2]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0][2]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[19]++;
  return utils::mkSpecialBool(children, 19);
}
Node rewrite_19_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node[0][0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0][0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0][0]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0][1]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0][1]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0][1]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[19]++;
  return utils::mkSpecialBool(children, 19);
}
Node rewrite_19_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node[0][2]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0][2]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0][2]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0][0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0][0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0][0]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[19]++;
  return utils::mkSpecialBool(children, 19);
}
Node rewrite_19_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node[0][2]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0][2]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0][2]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0][1]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0][1]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0][1]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[19]++;
  return utils::mkSpecialBool(children, 19);
}
Node rewrite_19_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node[0][1]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0][1]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0][1]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0][0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0][0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0][0]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[19]++;
  return utils::mkSpecialBool(children, 19);
}
Node rewrite_23_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1][0]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node[0][0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0][0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0][0]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0][1]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0][1]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0][1]] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[23]++;
  return utils::mkSpecialBool(children, 23);
}
Node rewrite_23_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0][0]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node[0][1]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0][1]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0][1]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0][0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0][0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0][0]] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[23]++;
  return utils::mkSpecialBool(children, 23);
}
Node rewrite_16_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node[0][2]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0][2]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0][2]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[16]++;
  return utils::mkSpecialBool(children, 16);
}
Node rewrite_16_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node[0][0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0][0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0][0]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[16]++;
  return utils::mkSpecialBool(children, 16);
}
Node rewrite_16_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node[0][0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0][0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0][0]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[16]++;
  return utils::mkSpecialBool(children, 16);
}
Node rewrite_16_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node[0][1]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0][1]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0][1]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[16]++;
  return utils::mkSpecialBool(children, 16);
}
Node rewrite_16_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node[0][2]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0][2]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0][2]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[16]++;
  return utils::mkSpecialBool(children, 16);
}
Node rewrite_16_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node[0][1]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0][1]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0][1]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[16]++;
  return utils::mkSpecialBool(children, 16);
}
Node rewrite_17_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1][0]);
  children.push_back(node[0][0]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node[0][1]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0][1]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0][1]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[17]++;
  return utils::mkSpecialBool(children, 17);
}
Node rewrite_17_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0][0]);
  children.push_back(node[0][1]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node[0][0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0][0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0][0]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[17]++;
  return utils::mkSpecialBool(children, 17);
}
Node rewrite_8_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[8]++;
  return utils::mkSpecialBool(children, 8);
}
Node rewrite_8_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  children.push_back(node[0][2]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[8]++;
  return utils::mkSpecialBool(children, 8);
}
Node rewrite_8_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2]);
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[8]++;
  return utils::mkSpecialBool(children, 8);
}
Node rewrite_8_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[8]++;
  return utils::mkSpecialBool(children, 8);
}
Node rewrite_8_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][2]);
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[8]++;
  return utils::mkSpecialBool(children, 8);
}
Node rewrite_8_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  children.push_back(node[0][2]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[8]++;
  return utils::mkSpecialBool(children, 8);
}
Node rewrite_9_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][1]);
  children.push_back(node[0][0]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[9]++;
  return utils::mkSpecialBool(children, 9);
}
Node rewrite_9_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[0][1]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[9]++;
  return utils::mkSpecialBool(children, 9);
}
Node rewrite_9(TNode node, const bool* predicates) {
  if (predicates[0] && predicates[3] && predicates[5] && true && true && predicates[4] && true) {
    return rewrite_19_0(node);
  }
  else if (predicates[0] && predicates[3] && true && predicates[1] && true && predicates[4] && true) {
    return rewrite_19_1(node);
  }
  else if (predicates[0] && predicates[3] && predicates[5] && true && predicates[1] && true && true) {
    return rewrite_19_2(node);
  }
  else if (predicates[0] && predicates[3] && predicates[5] && true && true && predicates[4] && true) {
    return rewrite_19_3(node);
  }
  else if (predicates[0] && predicates[3] && true && predicates[1] && true && predicates[4] && true) {
    return rewrite_19_4(node);
  }
  else if (predicates[0] && predicates[3] && predicates[5] && true && predicates[1] && true && true) {
    return rewrite_19_5(node);
  }
  else {
    return node;
  }
}
Node rewrite_19(TNode node, const bool* predicates) {
  if (predicates[0] && predicates[2] && predicates[5] && true && predicates[1] && true) {
    return rewrite_23_0(node);
  }
  else if (predicates[0] && predicates[2] && predicates[5] && true && predicates[1] && true) {
    return rewrite_23_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_23(TNode node, const bool* predicates) {
  if (predicates[0] && predicates[3] && true && true && predicates[4] && true) {
    return rewrite_16_0(node);
  }
  else if (predicates[0] && predicates[3] && predicates[5] && true && true && true) {
    return rewrite_16_1(node);
  }
  else if (predicates[0] && predicates[3] && predicates[5] && true && true && true) {
    return rewrite_16_2(node);
  }
  else if (predicates[0] && predicates[3] && true && predicates[1] && true && true) {
    return rewrite_16_3(node);
  }
  else if (predicates[0] && predicates[3] && true && true && predicates[4] && true) {
    return rewrite_16_4(node);
  }
  else if (predicates[0] && predicates[3] && true && predicates[1] && true && true) {
    return rewrite_16_5(node);
  }
  else {
    return node;
  }
}
Node rewrite_16(TNode node, const bool* predicates) {
  if (predicates[0] && predicates[2] && true && predicates[1] && true) {
    return rewrite_17_0(node);
  }
  else if (predicates[0] && predicates[2] && predicates[5] && true && true) {
    return rewrite_17_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_17(TNode node, const bool* predicates) {
  if (predicates[0] && predicates[3] && true && true && true) {
    return rewrite_8_0(node);
  }
  else if (predicates[0] && predicates[3] && true && true && true) {
    return rewrite_8_1(node);
  }
  else if (predicates[0] && predicates[3] && true && true && true) {
    return rewrite_8_2(node);
  }
  else if (predicates[0] && predicates[3] && true && true && true) {
    return rewrite_8_3(node);
  }
  else if (predicates[0] && predicates[3] && true && true && true) {
    return rewrite_8_4(node);
  }
  else if (predicates[0] && predicates[3] && true && true && true) {
    return rewrite_8_5(node);
  }
  else {
    return node;
  }
}
Node rewrite_8(TNode node, const bool* predicates) {
  if (predicates[0] && predicates[2] && true && true) {
    return rewrite_9_0(node);
  }
  else if (predicates[0] && predicates[2] && true && true) {
    return rewrite_9_1(node);
  }
  else {
    return node;
  }
}
RewriteResponse TheoryBoolSpecialRewriter::RewriteNOT(TNode node,  bool prewrite) {
  bool predicates[6];
  for (int i = 0; i < 6; i++) {
    predicates[i] = false;
  }
  predicates[0] = node.getKind() == kind::NOT && node.getNumChildren() == 1;
  if (node.getNumChildren() > 0) {
    predicates[2] = node[0].getKind() == kind::AND && node[0].getNumChildren() == 2;
    predicates[3] = node[0].getKind() == kind::AND && node[0].getNumChildren() == 3;
    if (node[0].getNumChildren() > 2) {
      predicates[4] = node[0][2].getKind() == kind::NOT && node[0][2].getNumChildren() == 1;
    }
    if (node[0].getNumChildren() > 0) {
      predicates[5] = node[0][0].getKind() == kind::NOT && node[0][0].getNumChildren() == 1;
    }
    if (node[0].getNumChildren() > 1) {
      predicates[1] = node[0][1].getKind() == kind::NOT && node[0][1].getNumChildren() == 1;
    }
  }
  Node response;
  if (TheoryBoolSpecialRewriter::enabled[19]) {
    response = rewrite_19(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[23]) {
    response = rewrite_23(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[16]) {
    response = rewrite_16(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[17]) {
    response = rewrite_17(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[8]) {
    response = rewrite_8(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[9]) {
    response = rewrite_9(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[1999]++;
  if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
    TheoryBoolSpecialRewriter::nodes[node] += 1;
  } else {
    TheoryBoolSpecialRewriter::nodes[node] = 1;
  }
  return RewriteResponse(REWRITE_DONE, node);
}
