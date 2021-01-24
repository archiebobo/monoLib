#pragma once
#ifndef _MONO_COMMON_H_
#define _MONO_COMMON_H_

#include <stdbool.h>

typedef char m_byte;
typedef unsigned short mono_type;

#define S_TOLERENCE 0.000001f
#define D_TOLERENCE 0.0000000001

#define m_veci_name 0xA710
#define m_vecf_name 0xA720
#define m_vecd_name 0xA730

#define m_matf_name 0xA740
#define m_matd_name 0xA750

#define m_linei_name 0xA810
#define m_linef_name 0xA820
#define m_lined_name 0xA830

#define m_polylinei_name 0xA840
#define m_polylinef_name 0xA850
#define m_polylined_name 0xA806

#define m_bezierf_name 0xA810
#define m_bezierd_name 0xA820
#define m_bezier_order 0xA801
#define m_bezier_cvf 0xA812
#define m_bezier_cvd 0xA822

#define m_nurbs_cf_name 0xA910
#define m_nurbs_cd_name 0xA920
#define m_nrubs_c_degree 0xA901
#define m_nurbs_c_cvf 0xA0912
#define m_nurbs_c_cfd 0xA0922
#define m_nurbs_c_kf 0xA0913
#define m_nurbs_c_kd 0xA0923
#define m_nurbs_c_wf 0xA0914
#define m_nurbs_c_wd 0xA0924

static const mono_type m_veci_type = m_veci_name;
static const mono_type m_vecf_type = m_vecf_name;
static const mono_type m_vecd_type = m_vecd_name;

#endif // !_MONO_COMMON_
