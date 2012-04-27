#include <fcntl.h>
#include <sys/ioctl.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "nf10_reg_acc.h"

#define NF10_IOCTL_CMD_READ_STAT (SIOCDEVPRIVATE+0)
#define NF10_IOCTL_CMD_WRITE_REG (SIOCDEVPRIVATE+1)
#define NF10_IOCTL_CMD_READ_REG (SIOCDEVPRIVATE+2)

int nf10_reg_wr(uint32_t addr, uint32_t val){
    int f;
    uint64_t v;

    //----------------------------------------------------
    //-- open nf10 file descriptor for all the fun stuff
    //----------------------------------------------------
    f = open("/dev/nf10", O_RDWR);
    if(f < 0){
        perror("/dev/nf10");
        return 0;
    }

    v = ((uint64_t)addr << 32) + (uint64_t)val;
    if(ioctl(f, NF10_IOCTL_CMD_WRITE_REG, v) < 0){
        perror("nf10 ioctl failed");
        return 0;
    }

    close(f);

    return 0;
}

unsigned int nf10_reg_rd(uint32_t addr){
    int f;
    uint64_t v;

    //----------------------------------------------------
    //-- open nf10 file descriptor for all the fun stuff
    //----------------------------------------------------
    f = open("/dev/nf10", O_RDWR);
    if(f < 0){
        perror("/dev/nf10");
        return 0;
    }

    v = (uint64_t)addr;
    if(ioctl(f, NF10_IOCTL_CMD_READ_REG, &v) < 0){
        perror("nf10 ioctl failed");
        return 0;
    }
    v &= 0xffffffff;

    close(f);

    return (unsigned int)v;
}


