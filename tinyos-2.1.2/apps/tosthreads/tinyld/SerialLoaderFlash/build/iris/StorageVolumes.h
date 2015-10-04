#ifndef STORAGE_VOLUMES_H
#define STORAGE_VOLUMES_H

enum {
  VOLUME_MICROEXEIMAGE, 
};

#endif
#if defined(VS)
VS(VOLUME_MICROEXEIMAGE, 1024)
#undef VS
#endif
#if defined(VB)
VB(VOLUME_MICROEXEIMAGE, 0)
#undef VB
#endif
