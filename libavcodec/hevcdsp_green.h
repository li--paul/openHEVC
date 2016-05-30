/*
 * HEVC video energy efficient decoder
 * Morgan Lacour 2015
 */
#ifndef HEVCDSP_GREEN_H
#define HEVCDSP_GREEN_H

#include "hevcdsp.h"

DECLARE_ALIGNED(16, const int8_t, ff_hevc_epel_green1_filters[7][1]) = {
	{ 64 },
	{ 64 },
	{ 64 },
	{ 64 },
	{ 64 },
	{ 64 },
	{ 64 },
};

DECLARE_ALIGNED(16, const int8_t, ff_hevc_epel_green2_filters[7][2]) = {
	{ 58,  6 },
	{ 50, 14 },
	{ 41, 23 },
	{ 32, 32 },
	{ 23, 41 },
	{ 14, 50 },
	{  6, 58 },
};

DECLARE_ALIGNED(16, const int8_t, ff_hevc_epel_green3_filters[7][3]) = {
	{ -3, 62,  5 },
	{ -5, 58, 11 },
	{ -7, 51, 20 },
	{ -6, 42, 28 },
	{ 20, 51, -7 },
	{ 11, 58, -5 },
	{  5, 62, -3 },
};

DECLARE_ALIGNED(16, const int8_t, ff_hevc_qpel_green5_filters[3][5]) = {
    { 1, -6, 20, 54, -5},
    { 2, -9, 40, 40, -9},
    {-5, 54, 20, -6,  1}
};

DECLARE_ALIGNED(16, const int8_t, ff_hevc_qpel_green3_filters[3][3]) = {
    { -4, 20, 48},
    { -9, 41, 32},
    { 48, 20, -4}
};


/** Green reload functions */
void green_reload_filter_luma1(HEVCDSPContext *c, const int bit_depth);
void green_reload_filter_luma3(HEVCDSPContext *c, const int bit_depth);
void green_reload_filter_luma5(HEVCDSPContext *c, const int bit_depth);
void green_reload_filter_luma7(HEVCDSPContext *c, const int bit_depth);
void green_reload_filter_chroma1(HEVCDSPContext *c, const int bit_depth);
void green_reload_filter_chroma2(HEVCDSPContext *c, const int bit_depth);
void green_reload_filter_chroma4(HEVCDSPContext *c, const int bit_depth);

#endif
