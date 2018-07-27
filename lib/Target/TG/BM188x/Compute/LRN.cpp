//===- LRN.cpp ------------------------------------------------------------===//
//
//                             The ONNC Project
//
// See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
#define DEBUG_TYPE "tg_lrn"
#include "LRN.h"
#include <onnc/Support/Debug.h>

using namespace onnc;
using namespace onnc::BM188X;

//===----------------------------------------------------------------------===//
// LRN
//===----------------------------------------------------------------------===//
BM188X::LRN::LRN(const IntAttr& pSize)
    : onnc::LRN(pSize), m_SumRightShiftWidth(0), m_LrnRightShiftWidth(0)
{
  m_ThresholdXQuantized[0] = 0;
  m_ThresholdXQuantized[1] = 0;
}

BM188X::LRN::~LRN()
{
}

void BM188X::LRN::print(std::ostream &pOS) const
{
  // TODO
}