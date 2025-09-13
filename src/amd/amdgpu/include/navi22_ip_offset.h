/*
 * Copyright (C) 2018  Advanced Micro Devices, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER(S) BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
 * AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */
#ifndef _navi22_ip_offset_HEADER
#define _navi22_ip_offset_HEADER

#define MAX_INSTANCE 7
#define MAX_SEGMENT 5

struct IP_BASE_INSTANCE
{
    unsigned int segment[MAX_SEGMENT];
};

struct IP_BASE
{
    struct IP_BASE_INSTANCE instance[MAX_INSTANCE];
};

static const struct IP_BASE ATHUB_BASE = {{{{0x00000C00, 0x02408C00, 0, 0, 0}},
                                           {{0, 0, 0, 0, 0}},
                                           {{0, 0, 0, 0, 0}},
                                           {{0, 0, 0, 0, 0}},
                                           {{0, 0, 0, 0, 0}},
                                           {{0, 0, 0, 0, 0}},
                                           {{0, 0, 0, 0, 0}}}};
static const struct IP_BASE CLK_BASE = {{{{0x00016C00, 0x02401800, 0, 0, 0}},
                                         {{0x00016E00, 0x02401C00, 0, 0, 0}},
                                         {{0x00017000, 0x02402000, 0, 0, 0}},
                                         {{0x00017200, 0x02402400, 0, 0, 0}},
                                         {{0x0001B000, 0x0242D800, 0, 0, 0}},
                                         {{0x00017E00, 0x0240BC00, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}}}};
static const struct IP_BASE DF_BASE = {{{{0x00007000, 0x0240B800, 0, 0, 0}},
                                        {{0, 0, 0, 0, 0}},
                                        {{0, 0, 0, 0, 0}},
                                        {{0, 0, 0, 0, 0}},
                                        {{0, 0, 0, 0, 0}},
                                        {{0, 0, 0, 0, 0}},
                                        {{0, 0, 0, 0, 0}}}};
static const struct IP_BASE DIO_BASE = {{{{0x02404000, 0, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}}}};
static const struct IP_BASE DMU_BASE = {{{{0x00000012, 0x000000C0, 0x000034C0, 0x00009000, 0x02403C00}},
                                         {{0, 0, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}}}};
static const struct IP_BASE DPCS_BASE = {{{{0x00000012, 0x000000C0, 0x000034C0, 0x00009000, 0x02403C00}},
                                          {{0, 0, 0, 0, 0}},
                                          {{0, 0, 0, 0, 0}},
                                          {{0, 0, 0, 0, 0}},
                                          {{0, 0, 0, 0, 0}},
                                          {{0, 0, 0, 0, 0}},
                                          {{0, 0, 0, 0, 0}}}};
static const struct IP_BASE FUSE_BASE = {{{{0x00017400, 0x02401400, 0, 0, 0}},
                                          {{0, 0, 0, 0, 0}},
                                          {{0, 0, 0, 0, 0}},
                                          {{0, 0, 0, 0, 0}},
                                          {{0, 0, 0, 0, 0}},
                                          {{0, 0, 0, 0, 0}},
                                          {{0, 0, 0, 0, 0}}}};
static const struct IP_BASE GC_BASE = {{{{0x00001260, 0x0000A000, 0x02402C00, 0, 0}},
                                        {{0, 0, 0, 0, 0}},
                                        {{0, 0, 0, 0, 0}},
                                        {{0, 0, 0, 0, 0}},
                                        {{0, 0, 0, 0, 0}},
                                        {{0, 0, 0, 0, 0}},
                                        {{0, 0, 0, 0, 0}}}};
static const struct IP_BASE HDA_BASE = {{{{0x004C0000, 0x02404800, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}}}};
static const struct IP_BASE HDP_BASE = {{{{0x00000F20, 0x0240A400, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}}}};
static const struct IP_BASE MMHUB_BASE = {{{{0x0001A000, 0x02408800, 0, 0, 0}},
                                           {{0, 0, 0, 0, 0}},
                                           {{0, 0, 0, 0, 0}},
                                           {{0, 0, 0, 0, 0}},
                                           {{0, 0, 0, 0, 0}},
                                           {{0, 0, 0, 0, 0}},
                                           {{0, 0, 0, 0, 0}}}};
static const struct IP_BASE MP0_BASE = {{{{0x00016000, 0x00DC0000, 0x00E00000, 0x00E40000, 0x0243FC00}},
                                         {{0, 0, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}}}};
static const struct IP_BASE MP1_BASE = {{{{0x00016000, 0x00DC0000, 0x00E00000, 0x00E40000, 0x0243FC00}},
                                         {{0, 0, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}}}};
static const struct IP_BASE NBIF0_BASE = {{{{0x00000000, 0x00000014, 0x00000D20, 0x00010400, 0x0241B000}},
                                           {{0, 0, 0, 0, 0}},
                                           {{0, 0, 0, 0, 0}},
                                           {{0, 0, 0, 0, 0}},
                                           {{0, 0, 0, 0, 0}},
                                           {{0, 0, 0, 0, 0}},
                                           {{0, 0, 0, 0, 0}}}};
static const struct IP_BASE OSSSYS_BASE = {{{{0x000010A0, 0x0240A000, 0, 0, 0}},
                                            {{0, 0, 0, 0, 0}},
                                            {{0, 0, 0, 0, 0}},
                                            {{0, 0, 0, 0, 0}},
                                            {{0, 0, 0, 0, 0}},
                                            {{0, 0, 0, 0, 0}},
                                            {{0, 0, 0, 0, 0}}}};
static const struct IP_BASE PCIE0_BASE = {{{{0x00000000, 0x00000014, 0x00000D20, 0x00010400, 0x0241B000}},
                                           {{0, 0, 0, 0, 0}},
                                           {{0, 0, 0, 0, 0}},
                                           {{0, 0, 0, 0, 0}},
                                           {{0, 0, 0, 0, 0}},
                                           {{0, 0, 0, 0, 0}},
                                           {{0, 0, 0, 0, 0}}}};
static const struct IP_BASE SDMA_BASE = {{{{0x00001260, 0x0000A000, 0x02402C00, 0, 0}},
                                          {{0x00001260, 0x0000A000, 0x02402C00, 0, 0}},
                                          {{0, 0, 0, 0, 0}},
                                          {{0, 0, 0, 0, 0}},
                                          {{0, 0, 0, 0, 0}},
                                          {{0, 0, 0, 0, 0}},
                                          {{0, 0, 0, 0, 0}}}};
static const struct IP_BASE SMUIO_BASE = {{{{0x00016800, 0x00016A00, 0x00440000, 0x02401000, 0}},
                                           {{0, 0, 0, 0, 0}},
                                           {{0, 0, 0, 0, 0}},
                                           {{0, 0, 0, 0, 0}},
                                           {{0, 0, 0, 0, 0}},
                                           {{0, 0, 0, 0, 0}},
                                           {{0, 0, 0, 0, 0}}}};
static const struct IP_BASE THM_BASE = {{{{0x00016600, 0x02400C00, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}}}};
static const struct IP_BASE UMC_BASE = {{{{0x00014000, 0x02425800, 0, 0, 0}},
                                         {{0x00054000, 0x02425C00, 0, 0, 0}},
                                         {{0x00094000, 0x02426000, 0, 0, 0}},
                                         {{0x000D4000, 0x02426400, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}},
                                         {{0, 0, 0, 0, 0}}}};
static const struct IP_BASE USB0_BASE = {{{{0x0242A800, 0x05B00000, 0, 0, 0}},
                                          {{0, 0, 0, 0, 0}},
                                          {{0, 0, 0, 0, 0}},
                                          {{0, 0, 0, 0, 0}},
                                          {{0, 0, 0, 0, 0}},
                                          {{0, 0, 0, 0, 0}},
                                          {{0, 0, 0, 0, 0}}}};
static const struct IP_BASE UVD0_BASE = {{{{0x00007800, 0x00007E00, 0x02403000, 0, 0}},
                                          {{0, 0, 0, 0, 0}},
                                          {{0, 0, 0, 0, 0}},
                                          {{0, 0, 0, 0, 0}},
                                          {{0, 0, 0, 0, 0}},
                                          {{0, 0, 0, 0, 0}},
                                          {{0, 0, 0, 0, 0}}}};

#endif