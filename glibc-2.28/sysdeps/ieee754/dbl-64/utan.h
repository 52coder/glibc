/*
 * IBM Accurate Mathematical Library
 * Written by International Business Machines Corp.
 * Copyright (C) 2001-2018 Free Software Foundation, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 */

/******************************************************************/
/*                                                                */
/* MODULE_NAME:utan.h                                             */
/*                                                                */
/* common data and variables prototype and definition             */
/******************************************************************/

#ifndef UTAN_H
#define UTAN_H

#ifdef BIG_ENDI
  static const number
  /* polynomial I */
/**/ d3             = {{0x3FD55555, 0x55555555} }, /*  0.333... */
/**/ d5             = {{0x3FC11111, 0x111107C6} }, /*  0.133... */
/**/ d7             = {{0x3FABA1BA, 0x1CDB8745} }, /*    .      */
/**/ d9             = {{0x3F9664ED, 0x49CFC666} }, /*    .      */
/**/ d11            = {{0x3F82385A, 0x3CF2E4EA} }, /*    .      */
  /* polynomial II */
/**/ a3             = {{0x3fd55555, 0x55555555} }, /*  1/3      */
/**/ aa3            = {{0x3c755555, 0x55555555} }, /*  1/3-a3   */
/**/ a5             = {{0x3fc11111, 0x11111111} }, /*  2/15     */
/**/ aa5            = {{0x3c411111, 0x11111111} }, /*  2/15-a5  */
/**/ a7             = {{0x3faba1ba, 0x1ba1ba1c} }, /*  17/315   */
/**/ aa7            = {{0xbc479179, 0x17917918} }, /*   ()-a7   */
/**/ a9             = {{0x3f9664f4, 0x882c10fa} }, /*  62/2835  */
/**/ aa9            = {{0xbc09a528, 0x8b6c44fd} }, /*   ()-a9   */
/**/ a11            = {{0x3f8226e3, 0x55e6c23d} }, /*    .      */
/**/ aa11           = {{0xbc2c292b, 0x8f1a2c13} }, /*    .      */
/**/ a13            = {{0x3f6d6d3d, 0x0e157de0} }, /*    .      */
/**/ aa13           = {{0xbc0280cf, 0xc968d971} }, /*    .      */
/**/ a15            = {{0x3f57da36, 0x452b75e3} }, /*    .      */
#if 0
/**/ aa15           = {{0xbbf25789, 0xb285d2ed} }, /*    .      */
#endif
/**/ a17            = {{0x3f435582, 0x48036744} }, /*    .      */
#if 0
/**/ aa17           = {{0x3be488d9, 0x563f1f23} }, /*    .      */
#endif
/**/ a19            = {{0x3f2f57d7, 0x734d1664} }, /*    .      */
#if 0
/**/ aa19           = {{0x3bb0d55a, 0x913ccb50} }, /*    .      */
#endif
/**/ a21            = {{0x3f1967e1, 0x8afcafad} }, /*    .      */
#if 0
/**/ aa21           = {{0xbbbd7614, 0xa42d44e6} }, /*    .      */
#endif
/**/ a23            = {{0x3f0497d8, 0xeea25259} }, /*    .      */
#if 0
/**/ aa23           = {{0x3b99f2d0, 0x2e4d2863} }, /*    .      */
#endif
/**/ a25            = {{0x3ef0b132, 0xd39a6050} }, /*    .      */
#if 0
/**/ aa25           = {{0x3b93b274, 0xc2c19614} }, /*    .      */
#endif
/**/ a27            = {{0x3edb0f72, 0xd3ee24e9} }, /*    .      */
#if 0
/**/ aa27           = {{0x3b61688d, 0xdd595609} }, /*    .      */
#endif
  /* polynomial III */
/**/ e0             = {{0x3FD55555, 0x55554DBD} }, /*    .      */
/**/ e1             = {{0x3FC11112, 0xE0A6B45F} }, /*    .      */

  /* constants    */
/**/ mfftnhf        = {{0xc02f0000, 0x00000000} }, /*-15.5      */

/**/ g1             = {{0x3e4b096c, 0x00000000} }, /* 1.259e-8  */
/**/ g2             = {{0x3faf212d, 0x00000000} }, /* 0.0608    */
/**/ g3             = {{0x3fe92f1a, 0x00000000} }, /* 0.787     */
/**/ g4             = {{0x40390000, 0x00000000} }, /* 25.0      */
/**/ g5             = {{0x4197d784, 0x00000000} }, /* 1e8       */
/**/ gy1            = {{0x3e7ad7f2, 0x9abcaf48} }, /* 1e-7      */
/**/ gy2            = {{0x3faf212d, 0x00000000} }, /* 0.0608    */

/**/ u1             = {{0x3cc8c33a, 0x00000000} }, /* 6.873e-16 */
/**/ u2             = {{0x3983dc4d, 0x00000000} }, /* 1.224e-31 */
/**/ u3             = {{0x3c78e14b, 0x00000000} }, /* 2.158e-17 */
/**/ ua3            = {{0x3bfd8b58, 0x00000000} }, /* 1.001e-19 */
/**/ ub3            = {{0x3cc81898, 0x00000000} }, /* 6.688e-16 */
/**/ u4             = {{0x399856c2, 0x00000000} }, /* 3e-31     */
/**/ u5             = {{0x3c39d80a, 0x00000000} }, /* 1.401e-18 */
/**/ u6             = {{0x3c374c5a, 0x00000000} }, /* 1.263e-18 */
/**/ u7             = {{0x39903beb, 0x00000000} }, /* 2.001e-31 */
/**/ u8             = {{0x399c56ae, 0x00000000} }, /* 3.493e-31 */
/**/ u9             = {{0x3c7d0ac7, 0x00000000} }, /* 2.519e-17 */
/**/ ua9            = {{0x3bfd8b58, 0x00000000} }, /* 1.001e-19 */
/**/ ub9            = {{0x3ccc2375, 0x00000000} }, /* 7.810e-16 */
/**/ u10            = {{0x3c7e40af, 0x00000000} }, /* 2.624e-17 */
/**/ ua10           = {{0x3bfd8b58, 0x00000000} }, /* 1.001e-19 */
/**/ ub10           = {{0x3ccc6405, 0x00000000} }, /* 7.880e-16 */
/**/ u11            = {{0x39e509b6, 0x00000000} }, /* 8.298e-30 */
/**/ u12            = {{0x39e509b6, 0x00000000} }, /* 8.298e-30 */
/**/ u13            = {{0x3c39d80a, 0x00000000} }, /* 1.401e-18 */
/**/ u14            = {{0x3c374c5a, 0x00000000} }, /* 1.263e-18 */
/**/ u15            = {{0x3ab5767a, 0x00000000} }, /* 6.935e-26 */
/**/ u16            = {{0x3ab57744, 0x00000000} }, /* 6.936e-26 */
/**/ u17            = {{0x3c7d0ac7, 0x00000000} }, /* 2.519e-17 */
/**/ ua17           = {{0x3bfdb11f, 0x00000000} }, /* 1.006e-19 */
/**/ ub17           = {{0x3ccc2375, 0x00000000} }, /* 7.810e-16 */
/**/ u18            = {{0x3c7e40af, 0x00000000} }, /* 2.624e-17 */
/**/ ua18           = {{0x3bfdb11f, 0x00000000} }, /* 1.006e-19 */
/**/ ub18           = {{0x3ccc6405, 0x00000000} }, /* 7.880e-16 */
/**/ u19            = {{0x39a13b61, 0x00000000} }, /* 4.248e-31 */
/**/ u20            = {{0x39a13b61, 0x00000000} }, /* 4.248e-31 */
/**/ u21            = {{0x3c3bb9b8, 0x00000000} }, /* 1.503e-18 */
/**/ u22            = {{0x3c392e08, 0x00000000} }, /* 1.365e-18 */
/**/ u23            = {{0x3a0ce706, 0x00000000} }, /* 4.560e-29 */
/**/ u24            = {{0x3a0cff5d, 0x00000000} }, /* 4.575e-29 */
/**/ u25            = {{0x3c7d0ac7, 0x00000000} }, /* 2.519e-17 */
/**/ ua25           = {{0x3bfd8b58, 0x00000000} }, /* 1.001e-19 */
/**/ ub25           = {{0x3ccc2375, 0x00000000} }, /* 7.810e-16 */
/**/ u26            = {{0x3c7e40af, 0x00000000} }, /* 2.624e-17 */
/**/ ua26           = {{0x3bfd8b58, 0x00000000} }, /* 1.001e-19 */
/**/ ub26           = {{0x3ccc6405, 0x00000000} }, /* 7.880e-16 */
/**/ u27            = {{0x3ad421cb, 0x00000000} }, /* 2.602e-25 */
/**/ u28            = {{0x3ad421cb, 0x00000000} }, /* 2.602e-25 */

/**/            mp1 = {{0x3FF921FB, 0x58000000} },
/**/            mp2 = {{0xBE4DDE97, 0x3C000000} },
/**/            mp3 = {{0xBC8CB3B3, 0x99D747F2} },
/**/            pp3 = {{0xBC8CB3B3, 0x98000000} },
/**/            pp4 = {{0xbacd747f, 0x23e32ed7} },
/**/          hpinv = {{0x3FE45F30, 0x6DC9C883} },
/**/          toint = {{0x43380000, 0x00000000} };

#else
#ifdef LITTLE_ENDI

  static const number
  /* polynomial I */
/**/ d3             = {{0x55555555, 0x3FD55555} }, /*  0.333... */
/**/ d5             = {{0x111107C6, 0x3FC11111} }, /*  0.133... */
/**/ d7             = {{0x1CDB8745, 0x3FABA1BA} }, /*    .      */
/**/ d9             = {{0x49CFC666, 0x3F9664ED} }, /*    .      */
/**/ d11            = {{0x3CF2E4EA, 0x3F82385A} }, /*    .      */
  /* polynomial II */
/**/ a3             = {{0x55555555, 0x3fd55555} }, /*  1/3      */
/**/ aa3            = {{0x55555555, 0x3c755555} }, /*  1/3-a3   */
/**/ a5             = {{0x11111111, 0x3fc11111} }, /*  2/15     */
/**/ aa5            = {{0x11111111, 0x3c411111} }, /*  2/15-a5  */
/**/ a7             = {{0x1ba1ba1c, 0x3faba1ba} }, /*  17/315   */
/**/ aa7            = {{0x17917918, 0xbc479179} }, /*   ()-a7   */
/**/ a9             = {{0x882c10fa, 0x3f9664f4} }, /*  62/2835  */
/**/ aa9            = {{0x8b6c44fd, 0xbc09a528} }, /*   ()-a9   */
/**/ a11            = {{0x55e6c23d, 0x3f8226e3} }, /*    .      */
/**/ aa11           = {{0x8f1a2c13, 0xbc2c292b} }, /*    .      */
/**/ a13            = {{0x0e157de0, 0x3f6d6d3d} }, /*    .      */
/**/ aa13           = {{0xc968d971, 0xbc0280cf} }, /*    .      */
/**/ a15            = {{0x452b75e3, 0x3f57da36} }, /*    .      */
#if 0
/**/ aa15           = {{0xb285d2ed, 0xbbf25789} }, /*    .      */
#endif
/**/ a17            = {{0x48036744, 0x3f435582} }, /*    .      */
#if 0
/**/ aa17           = {{0x563f1f23, 0x3be488d9} }, /*    .      */
#endif
/**/ a19            = {{0x734d1664, 0x3f2f57d7} }, /*    .      */
#if 0
/**/ aa19           = {{0x913ccb50, 0x3bb0d55a} }, /*    .      */
#endif
/**/ a21            = {{0x8afcafad, 0x3f1967e1} }, /*    .      */
#if 0
/**/ aa21           = {{0xa42d44e6, 0xbbbd7614} }, /*    .      */
#endif
/**/ a23            = {{0xeea25259, 0x3f0497d8} }, /*    .      */
#if 0
/**/ aa23           = {{0x2e4d2863, 0x3b99f2d0} }, /*    .      */
#endif
/**/ a25            = {{0xd39a6050, 0x3ef0b132} }, /*    .      */
#if 0
/**/ aa25           = {{0xc2c19614, 0x3b93b274} }, /*    .      */
#endif
/**/ a27            = {{0xd3ee24e9, 0x3edb0f72} }, /*    .      */
#if 0
/**/ aa27           = {{0xdd595609, 0x3b61688d} }, /*    .      */
#endif
  /* polynomial III */
/**/ e0             = {{0x55554DBD, 0x3FD55555} }, /*    .      */
/**/ e1             = {{0xE0A6B45F, 0x3FC11112} }, /*    .      */

  /* constants    */
/**/ mfftnhf        = {{0x00000000, 0xc02f0000} }, /*-15.5      */

/**/ g1             = {{0x00000000, 0x3e4b096c} }, /* 1.259e-8  */
/**/ g2             = {{0x00000000, 0x3faf212d} }, /* 0.0608    */
/**/ g3             = {{0x00000000, 0x3fe92f1a} }, /* 0.787     */
/**/ g4             = {{0x00000000, 0x40390000} }, /* 25.0      */
/**/ g5             = {{0x00000000, 0x4197d784} }, /* 1e8       */
/**/ gy1            = {{0x9abcaf48, 0x3e7ad7f2} }, /* 1e-7      */
/**/ gy2            = {{0x00000000, 0x3faf212d} }, /* 0.0608    */

/**/ u1             = {{0x00000000, 0x3cc8c33a} }, /* 6.873e-16 */
/**/ u2             = {{0x00000000, 0x3983dc4d} }, /* 1.224e-31 */
/**/ u3             = {{0x00000000, 0x3c78e14b} }, /* 2.158e-17 */
/**/ ua3            = {{0x00000000, 0x3bfd8b58} }, /* 1.001e-19 */
/**/ ub3            = {{0x00000000, 0x3cc81898} }, /* 6.688e-16 */
/**/ u4             = {{0x00000000, 0x399856c2} }, /* 3e-31     */
/**/ u5             = {{0x00000000, 0x3c39d80a} }, /* 1.401e-18 */
/**/ u6             = {{0x00000000, 0x3c374c5a} }, /* 1.263e-18 */
/**/ u7             = {{0x00000000, 0x39903beb} }, /* 2.001e-31 */
/**/ u8             = {{0x00000000, 0x399c56ae} }, /* 3.493e-31 */
/**/ u9             = {{0x00000000, 0x3c7d0ac7} }, /* 2.519e-17 */
/**/ ua9            = {{0x00000000, 0x3bfd8b58} }, /* 1.001e-19 */
/**/ ub9            = {{0x00000000, 0x3ccc2375} }, /* 7.810e-16 */
/**/ u10            = {{0x00000000, 0x3c7e40af} }, /* 2.624e-17 */
/**/ ua10           = {{0x00000000, 0x3bfd8b58} }, /* 1.001e-19 */
/**/ ub10           = {{0x00000000, 0x3ccc6405} }, /* 7.880e-16 */
/**/ u11            = {{0x00000000, 0x39e509b6} }, /* 8.298e-30 */
/**/ u12            = {{0x00000000, 0x39e509b6} }, /* 8.298e-30 */
/**/ u13            = {{0x00000000, 0x3c39d80a} }, /* 1.401e-18 */
/**/ u14            = {{0x00000000, 0x3c374c5a} }, /* 1.263e-18 */
/**/ u15            = {{0x00000000, 0x3ab5767a} }, /* 6.935e-26 */
/**/ u16            = {{0x00000000, 0x3ab57744} }, /* 6.936e-26 */
/**/ u17            = {{0x00000000, 0x3c7d0ac7} }, /* 2.519e-17 */
/**/ ua17           = {{0x00000000, 0x3bfdb11f} }, /* 1.006e-19 */
/**/ ub17           = {{0x00000000, 0x3ccc2375} }, /* 7.810e-16 */
/**/ u18            = {{0x00000000, 0x3c7e40af} }, /* 2.624e-17 */
/**/ ua18           = {{0x00000000, 0x3bfdb11f} }, /* 1.006e-19 */
/**/ ub18           = {{0x00000000, 0x3ccc6405} }, /* 7.880e-16 */
/**/ u19            = {{0x00000000, 0x39a13b61} }, /* 4.248e-31 */
/**/ u20            = {{0x00000000, 0x39a13b61} }, /* 4.248e-31 */
/**/ u21            = {{0x00000000, 0x3c3bb9b8} }, /* 1.503e-18 */
/**/ u22            = {{0x00000000, 0x3c392e08} }, /* 1.365e-18 */
/**/ u23            = {{0x00000000, 0x3a0ce706} }, /* 4.560e-29 */
/**/ u24            = {{0x00000000, 0x3a0cff5d} }, /* 4.575e-29 */
/**/ u25            = {{0x00000000, 0x3c7d0ac7} }, /* 2.519e-17 */
/**/ ua25           = {{0x00000000, 0x3bfd8b58} }, /* 1.001e-19 */
/**/ ub25           = {{0x00000000, 0x3ccc2375} }, /* 7.810e-16 */
/**/ u26            = {{0x00000000, 0x3c7e40af} }, /* 2.624e-17 */
/**/ ua26           = {{0x00000000, 0x3bfd8b58} }, /* 1.001e-19 */
/**/ ub26           = {{0x00000000, 0x3ccc6405} }, /* 7.880e-16 */
/**/ u27            = {{0x00000000, 0x3ad421cb} }, /* 2.602e-25 */
/**/ u28            = {{0x00000000, 0x3ad421cb} }, /* 2.602e-25 */

/**/            mp1 = {{0x58000000, 0x3FF921FB} },
/**/            mp2 = {{0x3C000000, 0xBE4DDE97} },
/**/            mp3 = {{0x99D747F2, 0xBC8CB3B3} },
/**/            pp3 = {{0x98000000, 0xBC8CB3B3} },
/**/            pp4 = {{0x23e32ed7, 0xbacd747f} },
/**/          hpinv = {{0x6DC9C883, 0x3FE45F30} },
/**/          toint = {{0x00000000, 0x43380000} };

#endif
#endif

#endif
