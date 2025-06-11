/**
 * @file mp_cpu.cpp
 * @author Chimipupu(https://github.com/Chimipupu)
 * @date 2025-06-12
 * @version 1.0
 * @note SPRESENSE メインCPUコア用
 */

#include "mp_cpu.hpp"

/**
 * @brief サブCPUコア1～5の開始関数
 * 
 */
void mp_sub_cpu_core_begin(void)
{
    uint8_t subcore_id = MP_SUB_CPU_CORE_1;

    for (subcore_id = MP_SUB_CPU_CORE_1; subcore_id <= MP_SUB_CPU_CORE_5; subcore_id++)
    {
        MP.begin(subcore_id);
    }
}