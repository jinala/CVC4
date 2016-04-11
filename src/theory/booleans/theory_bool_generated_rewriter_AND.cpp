#include "theory/booleans/theory_bool_special_rewriter.h"
#include "theory/theory.h"
#include "theory/bv/theory_bv_utils.h"
#include "options/main_options.h"

using namespace CVC4;
using namespace CVC4::theory;
using namespace CVC4::theory::booleans;
using namespace CVC4::theory::bv;

Node rewrite_13_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[0][0]);
  children.push_back(node[2]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node[1]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[1]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[1]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[1][0]);
  children.push_back(node[2]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[1]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[1]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[1]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[2][0]);
  children.push_back(node[0]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node[1]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[1]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[1]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[2]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[2]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[2]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node[2]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[2]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[2]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[1]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[1]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[1]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node[2]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[2]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[2]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_13_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[2][0]);
  children.push_back(node[1]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[2]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[2]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[2]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[13]++;
  return utils::mkSpecialBool(children, 13);
}
Node rewrite_22_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[0][0]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node[1]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[1]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[1]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[22]++;
  return utils::mkSpecialBool(children, 22);
}
Node rewrite_22_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[1][0]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node[1]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[1]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[1]] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[22]++;
  return utils::mkSpecialBool(children, 22);
}
Node rewrite_12_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[2]);
  children.push_back(node[1]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[12]++;
  return utils::mkSpecialBool(children, 12);
}
Node rewrite_12_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node[2]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[2]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[2]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[12]++;
  return utils::mkSpecialBool(children, 12);
}
Node rewrite_12_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[2]);
  children.push_back(node[0]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node[1]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[1]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[1]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[12]++;
  return utils::mkSpecialBool(children, 12);
}
Node rewrite_12_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  children.push_back(node[2]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node[1]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[1]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[1]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[12]++;
  return utils::mkSpecialBool(children, 12);
}
Node rewrite_12_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[2][0]);
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node[2]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[2]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[2]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[12]++;
  return utils::mkSpecialBool(children, 12);
}
Node rewrite_12_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[12]++;
  return utils::mkSpecialBool(children, 12);
}
Node rewrite_10_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[0][0]);
  children.push_back(node[1]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node[0]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[0]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[0]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[10]++;
  return utils::mkSpecialBool(children, 10);
}
Node rewrite_10_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[1][0]);
  children.push_back(node[0]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node[1]) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node[1]] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node[1]] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[10]++;
  return utils::mkSpecialBool(children, 10);
}
Node rewrite_4_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[2]);
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[4]++;
  return utils::mkSpecialBool(children, 4);
}
Node rewrite_4_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[2]);
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[4]++;
  return utils::mkSpecialBool(children, 4);
}
Node rewrite_4_2(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[0]);
  children.push_back(node[2]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[4]++;
  return utils::mkSpecialBool(children, 4);
}
Node rewrite_4_3(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[2]);
  children.push_back(node[0]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[4]++;
  return utils::mkSpecialBool(children, 4);
}
Node rewrite_4_4(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1]);
  children.push_back(node[2]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[4]++;
  return utils::mkSpecialBool(children, 4);
}
Node rewrite_4_5(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[2]);
  children.push_back(node[1]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[4]++;
  return utils::mkSpecialBool(children, 4);
}
Node rewrite_24_0(Node node) {
  std::vector<Node> children;
  children.push_back(node[1]);
  children.push_back(node[0]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[24]++;
  return utils::mkSpecialBool(children, 24);
}
Node rewrite_24_1(Node node) {
  std::vector<Node> children;
  children.push_back(node[0]);
  children.push_back(node[1]);
  if (options::checkDuplicates()) {
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
    if (TheoryBoolSpecialRewriter::nodes.find(node) != TheoryBoolSpecialRewriter::nodes.end()) {
      TheoryBoolSpecialRewriter::nodes[node] += 1;
    } else {
      TheoryBoolSpecialRewriter::nodes[node] = 1;
    }
  }
  if (options::printStats()) TheoryBoolSpecialRewriter::counter[24]++;
  return utils::mkSpecialBool(children, 24);
}
Node rewrite_24(TNode node, const bool* predicates) {
  if (predicates[3] && predicates[1] && true && predicates[0] && true && true) {
    return rewrite_13_0(node);
  }
  else if (predicates[3] && predicates[1] && true && predicates[0] && true && true) {
    return rewrite_13_1(node);
  }
  else if (predicates[3] && true && predicates[0] && true && predicates[2] && true) {
    return rewrite_13_2(node);
  }
  else if (predicates[3] && true && predicates[0] && true && predicates[2] && true) {
    return rewrite_13_3(node);
  }
  else if (predicates[3] && predicates[1] && true && true && predicates[2] && true) {
    return rewrite_13_4(node);
  }
  else if (predicates[3] && predicates[1] && true && true && predicates[2] && true) {
    return rewrite_13_5(node);
  }
  else {
    return node;
  }
}
Node rewrite_13(TNode node, const bool* predicates) {
  if (predicates[4] && predicates[1] && true && predicates[0] && true) {
    return rewrite_22_0(node);
  }
  else if (predicates[4] && predicates[1] && true && predicates[0] && true) {
    return rewrite_22_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_22(TNode node, const bool* predicates) {
  if (predicates[3] && predicates[1] && true && true && true) {
    return rewrite_12_0(node);
  }
  else if (predicates[3] && true && true && predicates[2] && true) {
    return rewrite_12_1(node);
  }
  else if (predicates[3] && true && predicates[0] && true && true) {
    return rewrite_12_2(node);
  }
  else if (predicates[3] && true && predicates[0] && true && true) {
    return rewrite_12_3(node);
  }
  else if (predicates[3] && true && true && predicates[2] && true) {
    return rewrite_12_4(node);
  }
  else if (predicates[3] && predicates[1] && true && true && true) {
    return rewrite_12_5(node);
  }
  else {
    return node;
  }
}
Node rewrite_12(TNode node, const bool* predicates) {
  if (predicates[4] && predicates[1] && true && true) {
    return rewrite_10_0(node);
  }
  else if (predicates[4] && true && predicates[0] && true) {
    return rewrite_10_1(node);
  }
  else {
    return node;
  }
}
Node rewrite_10(TNode node, const bool* predicates) {
  if (predicates[3] && true && true && true) {
    return rewrite_4_0(node);
  }
  else if (predicates[3] && true && true && true) {
    return rewrite_4_1(node);
  }
  else if (predicates[3] && true && true && true) {
    return rewrite_4_2(node);
  }
  else if (predicates[3] && true && true && true) {
    return rewrite_4_3(node);
  }
  else if (predicates[3] && true && true && true) {
    return rewrite_4_4(node);
  }
  else if (predicates[3] && true && true && true) {
    return rewrite_4_5(node);
  }
  else {
    return node;
  }
}
Node rewrite_4(TNode node, const bool* predicates) {
  if (predicates[4] && true && true) {
    return rewrite_24_0(node);
  }
  else if (predicates[4] && true && true) {
    return rewrite_24_1(node);
  }
  else {
    return node;
  }
}
RewriteResponse TheoryBoolSpecialRewriter::RewriteAND(TNode node,  bool prewrite) {
  bool predicates[5];
  for (int i = 0; i < 5; i++) {
    predicates[i] = false;
  }
  predicates[3] = node.getKind() == kind::AND && node.getNumChildren() == 3;
  predicates[4] = node.getKind() == kind::AND && node.getNumChildren() == 2;
  if (node.getNumChildren() > 0) {
    predicates[1] = node[0].getKind() == kind::NOT && node[0].getNumChildren() == 1;
  }
  if (node.getNumChildren() > 1) {
    predicates[0] = node[1].getKind() == kind::NOT && node[1].getNumChildren() == 1;
  }
  if (node.getNumChildren() > 2) {
    predicates[2] = node[2].getKind() == kind::NOT && node[2].getNumChildren() == 1;
  }
  Node response;
  if (TheoryBoolSpecialRewriter::enabled[13]) {
    response = rewrite_13(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[22]) {
    response = rewrite_22(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[12]) {
    response = rewrite_12(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[10]) {
    response = rewrite_10(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[4]) {
    response = rewrite_4(node, predicates);
    if (response != node) return RewriteResponse(REWRITE_DONE, response);
  }
  if (TheoryBoolSpecialRewriter::enabled[24]) {
    response = rewrite_24(node, predicates);
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
