/**
 * @file mp_cpu.cpp
 * @author Chimipupu(https://github.com/Chimipupu)
 * @date 2025-06-12
 * @version 1.0
 * @note SPRESENSE サブCPUコア4用
 */

#include "mp_cpu.hpp"

/**
 * @brief サブCPUコアの開始のレスポンス関数
 * 
 */
void mp_sub_cpu_core_begin_res(void)
{
    MP.begin();
}