/********************************************************
 *
 * C register defines file
 * Project: OpenFlow Switch (openflow_switch)
 * Description: OpenFlow Switch
 *
 ********************************************************/

#ifndef _REG_DEFINES_OPENFLOW_SWITCH_
#define _REG_DEFINES_OPENFLOW_SWITCH_

/* ========= Version Information ========= */

/* ========= Constants ========= */

#define TYPE_VLAN                             0x8100

#define TYPE_VLAN_PCP                         0x88aa

#define TYPE_IP                               0x0800

#define TYPE_ARP                              0x0806

#define TYPE_MPLS                             0x8847

#define TYPE_MPLS_MC                          0x8848

#define NO_VLAN                               0xffff

#define PROTO_ICMP                            0x01

#define PROTO_TCP                             0x06

#define POTO_UDP                              0x11

#define PROTO_SCTP                            0x84

// Ports to forward on
#define OPENFLOW_FORWARD_BITMASK_POS              0

#define OPENFLOW_FORWARD_BITMASK_WIDTH            16

#define OPENFLOW_NF2_ACTION_FLAG_POS              16

#define OPENFLOW_NF2_ACTION_FLAG_WIDTH            16

#define OPENFLOW_SET_VLAN_VID_POS                 32

// Vlan ID to be replaced
#define OPENFLOW_SET_VLAN_VID_WIDTH               16

#define OPENFLOW_SET_VLAN_PCP_POS                 48

// Vlan priority to be replaced
#define OPENFLOW_SET_VLAN_PCP_WIDTH               8

#define OPENFLOW_SET_DL_SRC_POS                   56

// Source MAC address to be replaced
#define OPENFLOW_SET_DL_SRC_WIDTH                 48

#define OPENFLOW_SET_DL_DST_POS                   104

// Destination MAC address to be replaced
#define OPENFLOW_SET_DL_DST_WIDTH                 48

#define OPENFLOW_SET_NW_SRC_POS                   152

// Source network address to be replaced
#define OPENFLOW_SET_NW_SRC_WIDTH                 32

#define OPENFLOW_SET_NW_DST_POS                   184

// Destination network address to be replaced
#define OPENFLOW_SET_NW_DST_WIDTH                 32

#define OPENFLOW_SET_NW_TOS_POS                   216

// TOS to be replaced
#define OPENFLOW_SET_NW_TOS_WIDTH                 6

#define OPENFLOW_SET_NW_ECN_POS                   222

// ECN to be replaced
#define OPENFLOW_SET_NW_ECN_WIDTH                 2

#define OPENFLOW_SET_TP_SRC_POS                   224

// Source transport port to be replaced
#define OPENFLOW_SET_TP_SRC_WIDTH                 16

#define OPENFLOW_SET_TP_DST_POS                   240

// Destination transport port to be replaced
#define OPENFLOW_SET_TP_DST_WIDTH                 16

#define NF2_OFPAT_OUTPUT                          0x0001

#define NF2_OFPAT_SET_VLAN_VID                    0x0002

#define NF2_OFPAT_SET_VLAN_PCP                    0x0004

#define NF2_OFPAT_POP_VLAN                        0x0008

#define NF2_OFPAT_SET_DL_SRC                      0x0010

#define NF2_OFPAT_SET_DL_DST                      0x0020

#define NF2_OFPAT_SET_NW_SRC                      0x0040

#define NF2_OFPAT_SET_NW_DST                      0x0080

#define NF2_OFPAT_SET_NW_TOS                      0x0100

#define NF2_OFPAT_SET_TP_SRC                      0x0200

#define NF2_OFPAT_SET_TP_DST                      0x0400

#define NF2_OFPAT_SET_NW_ECN                      0x0800

#define NF2_OFPAT_PUSH_VLAN                       0x1000

#define NF2_OFPAT_SET_NW_TTL                      0x2000

#define NF2_OFPAT_DEC_NW_TTL                      0x4000

#define OPENFLOW_PKT_COUNTER_POS                  0

#define OPENFLOW_PKT_COUNTER_WIDTH                25

#define OPENFLOW_LAST_SEEN_POS                    25

#define OPENFLOW_LAST_SEEN_WIDTH                  7 

#define OPENFLOW_BYTE_COUNTER_POS                 32    

#define OPENFLOW_BYTE_COUNTER_WIDTH               32    

#define WILDCARD_BASE                             0x8000

#define EXACT_BASE                                0x0000

#define OPENFLOW_WILDCARD_TABLE_SIZE  32

/* ========= Modules ========= */

// Module tags
#define OF_BASE_ADDR                        0x7a018000

/* ========== Registers ========== */

// Name: openflow_datapath(OF)
// Description: openflow_datapath
// File: projects/openflow_switch/hw/include/openflow_datapath.xml
#define OF_NUM_PKTS_DROPPED_0_REG                0x7a018000
#define OF_NUM_PKTS_DROPPED_1_REG                0x7a018001
#define OF_NUM_PKTS_DROPPED_2_REG                0x7a018002
#define OF_NUM_PKTS_DROPPED_3_REG                0x7a018003
#define OF_NUM_PKTS_DROPPED_4_REG                0x7a018004
#define OF_EXACT_HITS_REG                        0x7a018005
#define OF_EXACT_MISSES_REG                      0x7a018006
#define OF_WILDCARD_HITS_REG                     0x7a018007
#define OF_WILDCARD_MISSES_REG                   0x7a018008
#define OF_DL_PARSE_CNT_0_REG                    0x7a018009
#define OF_DL_PARSE_CNT_1_REG                    0x7a01800a
#define OF_DL_PARSE_CNT_2_REG                    0x7a01800b
#define OF_DL_PARSE_CNT_3_REG                    0x7a01800c
#define OF_DL_PARSE_CNT_4_REG                    0x7a01800d
#define OF_MPLS_PARSE_CNT_0_REG                  0x7a01800e
#define OF_MPLS_PARSE_CNT_1_REG                  0x7a01800f
#define OF_MPLS_PARSE_CNT_2_REG                  0x7a018010
#define OF_MPLS_PARSE_CNT_3_REG                  0x7a018011
#define OF_MPLS_PARSE_CNT_4_REG                  0x7a018012
#define OF_ARP_PARSE_CNT_0_REG                   0x7a018013
#define OF_ARP_PARSE_CNT_1_REG                   0x7a018014
#define OF_ARP_PARSE_CNT_2_REG                   0x7a018015
#define OF_ARP_PARSE_CNT_3_REG                   0x7a018016
#define OF_ARP_PARSE_CNT_4_REG                   0x7a018017
#define OF_IP_TP_PARSE_CNT_0_REG                 0x7a018018
#define OF_IP_TP_PARSE_CNT_1_REG                 0x7a018019
#define OF_IP_TP_PARSE_CNT_2_REG                 0x7a01801a
#define OF_IP_TP_PARSE_CNT_3_REG                 0x7a01801b
#define OF_IP_TP_PARSE_CNT_4_REG                 0x7a01801c
#define OF_LAST_OUTSIDE_REG                      0x7a01801c
#define OF_ACC_RDY_REG                           0x7a01801d
#define OF_BASE_ADDR_REG                         0x7a01801e
#define OF_WRITE_ORDER_REG                       0x7a01801f
#define OF_MOD_WRITE_ORDER_REG                   0x7a018020
#define OF_READ_ORDER_REG                        0x7a018021
#define OF_ENTRY_BASE_REG                        0x7a018022
#define OF_LOOKUP_CMP_BASE_REG                   0x7a018022
#define OF_LOOKUP_CMP_MASK_BASE_REG              0x7a01802a
#define OF_LOOKUP_ACTION_BASE_REG                0x7a018032
#define OF_STATS_BASE_REG                        0x7a01803c

#endif

