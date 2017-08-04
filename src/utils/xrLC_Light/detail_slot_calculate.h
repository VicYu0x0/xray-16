////////////////////////////////////////////////////////////////////////////
//	Created		: 27.03.2009
//	Author		: Konstantin Slipchenko
//	Copyright (C) GSC Game World - 2009
////////////////////////////////////////////////////////////////////////////

#ifndef DETAIL_SLOT_CALCULATE_H_INCLUDED
#define DETAIL_SLOT_CALCULATE_H_INCLUDED

using Clock = std::chrono::high_resolution_clock;
using Time = Clock::time_point;
using Duration = Clock::duration;

DEFINE_VECTOR(u32, DWORDVec, DWORDIt);
namespace CDB
{
class COLLIDER;
}
class base_lighting;
struct DetailSlot;

extern thread_local Duration t_time;
extern thread_local u64 t_count;

bool detail_slot_calculate(
    u32 _x, u32 _z, DetailSlot& DS, DWORDVec& box_result, CDB::COLLIDER& DB, base_lighting& Selected);
bool detail_slot_process(u32 _x, u32 _z, DetailSlot& DS);
#endif // #ifndef DETAIL_SLOT_CALCULATE_H_INCLUDED
