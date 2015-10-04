#ifndef STORAGE_VOLUMES_H
#define STORAGE_VOLUMES_H

enum {
  VOLUME_SYNCLOG, 
};

#endif
#if defined(VS)
VS(VOLUME_SYNCLOG, 256)
#undef VS
#endif
#if defined(VB)
VB(VOLUME_SYNCLOG, 0)
#undef VB
#endif
