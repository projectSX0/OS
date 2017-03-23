#include <ifaddrs.h>

#include <sys/socket.h> // AF_LINK

#ifdef AF_LINK
#   include <net/if_dl.h>
#endif

#ifdef AF_PACKET
#   include <netpacket/packet.h>
#   include <net/ethernet.h>
#   include <net/if_packet.h>
#   define AF_LINK AF_PACKET

typedef struct sockaddr_ll sockaddr_dl;
#endif

#ifdef __linux__

#include <sys/epoll.h>
#include <sys/sendfile.h>
#include <sys/ioctl.h>
#include <sys/inotify.h>
#include <sys/eventfd.h>
#include <sys/file.h>

#endif
