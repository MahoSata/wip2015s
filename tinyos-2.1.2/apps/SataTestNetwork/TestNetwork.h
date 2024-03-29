#ifndef TEST_NETWORK_H
#define TEST_NETWORK_H

#include <AM.h>
#include "TestNetworkC.h"

typedef nx_struct TestNetworkMsg {
  nx_am_addr_t source;
  nx_uint16_t seqno;
  nx_am_addr_t parent;
  nx_uint16_t voltage;
  // x_uint16_t metric;
  // x_uint16_t data;
  //nx_uint8_t hopToSource;
  nx_uint8_t passNodeId;
  //nx_uint16_t sendCount;
  //nx_uint16_t sendSuccessCount;
} TestNetworkMsg;

#endif
