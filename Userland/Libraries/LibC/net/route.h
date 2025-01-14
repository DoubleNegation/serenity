/*
 * Copyright (c) 2020, Marios Prokopakis <mariosprokopakis@gmail.com>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <sys/socket.h>

struct rtentry {
    struct sockaddr rt_gateway; /* the gateway address */
    struct sockaddr rt_genmask; /* the target network mask */
    unsigned short int rt_flags;
    char* rt_dev;
    /* FIXME: complete the struct */
};

#define RTF_UP 0x1      /* do not delete the route */
#define RTF_GATEWAY 0x2 /* the route is a gateway and not an end host */

struct arpreq {
    struct sockaddr arp_pa;      /* protocol address */
    struct sockaddr arp_ha;      /* hardware address */
    struct sockaddr arp_netmask; /* netmask of protocol address */
    int arp_flags;               /* flags */
    char arp_dev[16];
};
