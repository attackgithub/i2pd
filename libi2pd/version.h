#ifndef _VERSION_H_
#define _VERSION_H_

#define CODENAME "Purple"

#define STRINGIZE(x) #x
#define MAKE_VERSION(a,b,c) STRINGIZE(a) "." STRINGIZE(b) "." STRINGIZE(c)

#define I2PD_VERSION_MAJOR 2
#define I2PD_VERSION_MINOR 27
#define I2PD_VERSION_MICRO 0
#define I2PD_VERSION_PATCH 0
#define I2PD_VERSION MAKE_VERSION(I2PD_VERSION_MAJOR, I2PD_VERSION_MINOR, I2PD_VERSION_MICRO)
#define VERSION I2PD_VERSION

#ifdef MESHNET
#define I2PD_NET_ID 3
#else
#define I2PD_NET_ID 2
#endif

#define I2P_VERSION_MAJOR 0
#define I2P_VERSION_MINOR 9
#define I2P_VERSION_MICRO 41
#define I2P_VERSION_PATCH 0
#define I2P_VERSION MAKE_VERSION(I2P_VERSION_MAJOR, I2P_VERSION_MINOR, I2P_VERSION_MICRO)

#endif
