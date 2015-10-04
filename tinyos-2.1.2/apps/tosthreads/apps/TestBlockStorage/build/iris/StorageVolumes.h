#ifndef STORAGE_VOLUMES_H
#define STORAGE_VOLUMES_H

enum {
  VOLUME_TESTBLOCKSTORAGE1, 
};

#endif
#if defined(VS)
VS(VOLUME_TESTBLOCKSTORAGE1, 1024)
#undef VS
#endif
#if defined(VB)
VB(VOLUME_TESTBLOCKSTORAGE1, 0)
#undef VB
#endif
